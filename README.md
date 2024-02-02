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