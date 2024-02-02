# ebpf_map 
This repo is for testing the performance of hash & trie map in ebpf.

## build ebpf manually
```
export CLANG=clang
export CFLAGS="-O2 -g -Wall -Werror -target bpf"
export INCLUDE="./include"
$CLANG $CFLAGS -I$INCLUDE -c ebpf_map.c -o ebpf_map.o
# clang -O2 -g -Wall -Werror -target bpf -I./include -c ebpf_map.c -o ebpf_map.o
```

## attach ebpf manually
```
tc qdisc add dev <device> clsact
tc filter add dev <device> <direction> bpf da obj <object-name> sec <section-name>
tc filter show dev <device> <direction>

# e.g
tc filter add dev lxc60294565d708 ingress bpf da obj ebpf_map.o sec trie
# tc filter show dev lxc60294565d708 ingress
filter protocol all pref 49152 bpf chain 0 
filter protocol all pref 49152 bpf chain 0 handle 0x1 ebpf_map.o:[trie] direct-action not_in_hw id 6814 tag 704c89c4edcf21bb jited 
```

## test summary
| match cnt | hash (Gbps) | lpm_trie (Gbps) |
|---|---|---|
| 1 | 21.3 | 21.0 |
| 2 | 21.4 | 20.9 |
| 3 | 21.1 | 21.1 |
| 4 | 21.1 | 21.1 |
| 5 | 21.1 | 21.0 |
| 6 | 21.1 | 21.1 |
| 7 | 21.1 | 21.0 |
| 8 | 20.8 | 20.9 |
| 9 | 20.8 | 21.0 |
| 10 | 20.9 | 20.9 |
| 11 | 20.8 | 20.9 |
| 12 | 20.8 | 20.8 |
| 13 | 20.6 | 21.0 |
| 14 | 20.5 | 20.9 |
| 15 | 20.6 | 21.2 |
| 16 | 20.6 | 21.0 |
| 17 | 20.6 | 21.1 |
| 18 | 20.6 | 20.9 |
| 19 | 20.5 | 21.3 |
| 20 | 20.4 | 21.0 |
| 21 | 20.6 | 21.1 |
| 22 | 20.5 | 21.1 |
| 23 | 20.4 | 21.3 |
| 24 | 20.5 | 20.8 |
| 25 | 20.4 | 21.1 |
| 26 | 20.2 | 21.1 |
| 27 | 20.3 | 20.9 |
| 28 | 20.1 | 20.9 |
| 29 | 20.2 | 20.8 |
| 30 | 20.3 | 20.8 |
| 31 | 20.1 | 21.0 |
| 32 | 20.3 | 20.9 |
| 33 | 19.8 | 20.9 |
