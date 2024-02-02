#include "vmlinux.h"
#include "bpf_endian.h"
#include "bpf_helpers.h"
#include "lib_net_def.h"
#include "bpf_compiler.h"

#define MAX_MAP_ENTRIES 0x8000
#define IPV4_PREFIX_LEN 32

#define GET_PREFIX(PREFIX) \
        bpf_htonl((PREFIX) < 32 ? ((1<<(PREFIX)) - 1) << (32-(PREFIX)) : 0xFFFFFFFF)

struct ip4_trie_key {
	struct bpf_lpm_trie_key lpm_key;
	u8 addr[4];
};

struct ip4_hash_key {
    u32 prefixlen;
    u8 addr[4];
};

/*
struct {
	__uint(type, BPF_MAP_TYPE_LPM_TRIE);
	__uint(max_entries, MAX_MAP_ENTRIES);
	__type(key, struct ip4_trie_key);
	__type(value, u8);
	__uint(pinning, LIBBPF_PIN_BY_NAME);
	__uint(map_flags, BPF_F_NO_PREALLOC);
} lpm_trie_map SEC(".maps");

struct {
    __uint(type, BPF_MAP_TYPE_HASH);
    __uint(max_entries, MAX_MAP_ENTRIES);
    __type(key, struct ip4_hash_key);
    __type(value, u8);
    __uint(map_flags, BPF_F_NO_PREALLOC);
} hash_map SEC(".maps");
*/

struct bpf_map_def lpm_trie_map SEC("maps") = {
    .type = BPF_MAP_TYPE_LPM_TRIE,
    .key_size = sizeof(struct ip4_trie_key),
    .value_size = sizeof(u8),
    .map_flags = BPF_F_NO_PREALLOC,
    .max_entries = MAX_MAP_ENTRIES,
};

struct bpf_map_def hash_map SEC("maps") = {
    .type = BPF_MAP_TYPE_HASH,
    .key_size = sizeof(struct ip4_hash_key),
    .value_size = sizeof(u8),
    .map_flags = BPF_F_NO_PREALLOC,
    .max_entries = MAX_MAP_ENTRIES,
};


SEC("trie")
int trie_search(struct __sk_buff *skb) {
	void *data_end = (void *)(u64)skb->data_end;
	void *data     = (void *)(u64)skb->data;

	// Only IPv4 supported for this example
	struct ethhdr *ether = data;
	if (data + sizeof(*ether) > data_end) {
		return TC_ACT_SHOT;
	}

	if (ether->h_proto != 0x08U) { // htons(ETH_P_IP) -> 0x08U
		// Non IPv4 traffic
		return TC_ACT_OK;
	}

	data += sizeof(*ether);
	struct iphdr *ip = data;
	if (data + sizeof(*ip) > data_end) {
		return TC_ACT_SHOT;
	}

	struct ip4_trie_key key;
	key.lpm_key.prefixlen = IPV4_PREFIX_LEN;
	key.addr[0] = ip->daddr & 0xff;
	key.addr[1] = (ip->daddr >> 8) & 0xff;
	key.addr[2] = (ip->daddr >> 16) & 0xff;
	key.addr[3] = (ip->daddr >> 24) & 0xff;

    u8 *dscp = bpf_map_lookup_elem(&lpm_trie_map, &key);
    if (!dscp) {
        return TC_ACT_OK;
    }

    u8 new_tos = *dscp << 2;
    u8 old_tos = ip->tos;

    int ret;
    ret = bpf_l3_csum_replace(skb, IP_CSUM_OFF, _htons(old_tos), _htons(new_tos), 2);
    if (unlikely(ret)) {
        return TC_ACT_SHOT;
    }

    ret = bpf_skb_store_bytes(skb, TOS_OFF, &new_tos, sizeof(new_tos), 0);
    if (unlikely(ret)) {
        return TC_ACT_SHOT;
    }

	return TC_ACT_OK;
}

SEC("hash")
int hash_search(struct __sk_buff *skb) {
	void *data_end = (void *)(u64)skb->data_end;
	void *data     = (void *)(u64)skb->data;

	// Only IPv4 supported for this example
	struct ethhdr *ether = data;
	if (data + sizeof(*ether) > data_end) {
		return TC_ACT_SHOT;
	}

	if (ether->h_proto != 0x08U) { // htons(ETH_P_IP) -> 0x08U
		// Non IPv4 traffic
		return TC_ACT_OK;
	}

	data += sizeof(*ether);
	struct iphdr *ip = data;
	if (data + sizeof(*ip) > data_end) {
		return TC_ACT_SHOT;
	}

	struct ip4_hash_key key;
	__be32 daddr = ip->daddr;
    u8 *dscp;

#pragma unroll
    for (u32 i = IPV4_PREFIX_LEN; i > 0; i--) {
        daddr &= GET_PREFIX(i);
        key.prefixlen = i;
        key.addr[0] = daddr & 0xff;
        key.addr[1] = (daddr >> 8) & 0xff;
        key.addr[2] = (daddr >> 16) & 0xff;
       	key.addr[3] = (daddr >> 24) & 0xff;

        dscp = bpf_map_lookup_elem(&hash_map, &key);
        if (dscp) {
            break;
        }
    }

    if (!dscp) {
        key.prefixlen = 0;
        key.addr[0] = 0;
        key.addr[1] = 0;
        key.addr[2] = 0;
        key.addr[3] = 0;
        dscp = bpf_map_lookup_elem(&hash_map, &key);
    }

    u8 new_tos = 0;
    if (dscp) {
        new_tos = *dscp << 2;
    }
    u8 old_tos = ip->tos;

    int ret;
    ret = bpf_l3_csum_replace(skb, IP_CSUM_OFF, _htons(old_tos), _htons(new_tos), 2);
    if (unlikely(ret)) {
        return TC_ACT_SHOT;
    }

    ret = bpf_skb_store_bytes(skb, TOS_OFF, &new_tos, sizeof(new_tos), 0);
    if (unlikely(ret)) {
        return TC_ACT_SHOT;
    }

	return TC_ACT_OK;
}

char __license[] SEC("license") = "Dual MIT/GPL";
