# summary
| match cnt | hash (Gbps) | lpm_trie (Gbps) |
| 1 | 21.3 | 21.0 |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |
| |



# match cnt 1
## hash
./ebpf_map lxc60294565d708 hash 32
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 60960 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.48 GBytes  21.3 Gbits/sec    0    398 KBytes
[  5]   1.00-2.00   sec  2.49 GBytes  21.4 Gbits/sec    0    417 KBytes
[  5]   2.00-3.00   sec  2.47 GBytes  21.3 Gbits/sec    0    440 KBytes
[  5]   3.00-4.00   sec  2.47 GBytes  21.2 Gbits/sec    0    470 KBytes
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    597 KBytes
[  5]   5.00-6.00   sec  2.48 GBytes  21.3 Gbits/sec    0    597 KBytes
[  5]   6.00-7.00   sec  2.47 GBytes  21.2 Gbits/sec    0    597 KBytes
[  5]   7.00-8.00   sec  2.48 GBytes  21.3 Gbits/sec    0    727 KBytes
[  5]   8.00-9.00   sec  2.50 GBytes  21.5 Gbits/sec   50    763 KBytes
[  5]   9.00-10.00  sec  2.50 GBytes  21.5 Gbits/sec    0    763 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec   50             sender
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 32
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 60966 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.43 GBytes  20.9 Gbits/sec    0    517 KBytes
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    599 KBytes
[  5]   2.00-3.00   sec  2.42 GBytes  20.8 Gbits/sec    0    628 KBytes
[  5]   3.00-4.00   sec  2.44 GBytes  20.9 Gbits/sec    0    628 KBytes
[  5]   4.00-5.00   sec  2.46 GBytes  21.1 Gbits/sec    0    628 KBytes
[  5]   5.00-6.00   sec  2.47 GBytes  21.2 Gbits/sec    0    628 KBytes
[  5]   6.00-7.00   sec  2.46 GBytes  21.1 Gbits/sec    0    628 KBytes
[  5]   7.00-8.00   sec  2.45 GBytes  21.0 Gbits/sec    0    719 KBytes
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    728 KBytes
[  5]   9.00-10.00  sec  2.47 GBytes  21.2 Gbits/sec    0    728 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver

# match cnt 2
## hash
./ebpf_map lxc60294565d708 hash 31
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 60994 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.49 GBytes  21.4 Gbits/sec    0    528 KBytes       
[  5]   1.00-2.00   sec  2.50 GBytes  21.4 Gbits/sec    0    528 KBytes       
[  5]   2.00-3.00   sec  2.48 GBytes  21.3 Gbits/sec    0    528 KBytes       
[  5]   3.00-4.00   sec  2.49 GBytes  21.3 Gbits/sec    0    610 KBytes       
[  5]   4.00-5.00   sec  2.51 GBytes  21.6 Gbits/sec    0    673 KBytes       
[  5]   5.00-6.00   sec  2.48 GBytes  21.3 Gbits/sec    0    673 KBytes       
[  5]   6.00-7.00   sec  2.49 GBytes  21.4 Gbits/sec    0    673 KBytes       
[  5]   7.00-8.00   sec  2.50 GBytes  21.5 Gbits/sec    0    673 KBytes       
[  5]   8.00-9.00   sec  2.49 GBytes  21.4 Gbits/sec    0    673 KBytes       
[  5]   9.00-10.00  sec  2.47 GBytes  21.3 Gbits/sec    0    673 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.9 GBytes  21.4 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.9 GBytes  21.4 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 31
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32770 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.45 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   5.00-6.00   sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   7.00-8.00   sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  20.9 Gbits/sec    0    776 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver


# match cnt 3
## hash
./ebpf_map lxc60294565d708 hash 30
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32776 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.48 GBytes  21.3 Gbits/sec    0    544 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    634 KBytes       
[  5]   6.00-7.00   sec  2.46 GBytes  21.1 Gbits/sec    0    634 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.1 Gbits/sec    0    666 KBytes       
[  5]   8.00-9.00   sec  2.46 GBytes  21.1 Gbits/sec    0    666 KBytes       
[  5]   9.00-10.00  sec  2.49 GBytes  21.4 Gbits/sec    0    711 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 30
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32784 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.47 GBytes  21.2 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.45 GBytes  21.0 Gbits/sec    0    567 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    567 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.1 Gbits/sec    0    567 KBytes       
[  5]   6.00-7.00   sec  2.48 GBytes  21.3 Gbits/sec    0    567 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.1 Gbits/sec    0    567 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    567 KBytes       
[  5]   9.00-10.00  sec  2.48 GBytes  21.3 Gbits/sec    0    887 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver


# match cnt 4
## hash
./ebpf_map lxc60294565d708 hash 29
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32788 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.43 GBytes  20.8 Gbits/sec    0    452 KBytes       
[  5]   1.00-2.00   sec  2.47 GBytes  21.2 Gbits/sec    0    474 KBytes       
[  5]   2.00-3.00   sec  2.48 GBytes  21.3 Gbits/sec    0    529 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    529 KBytes       
[  5]   4.00-5.00   sec  2.46 GBytes  21.1 Gbits/sec    0    529 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    529 KBytes       
[  5]   6.00-7.00   sec  2.47 GBytes  21.2 Gbits/sec    0    529 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.2 Gbits/sec    0    529 KBytes       
[  5]   8.00-9.00   sec  2.46 GBytes  21.2 Gbits/sec    0    529 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.8 Gbits/sec    0    723 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 29
# iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32798 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.40 GBytes  20.6 Gbits/sec    0    417 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.1 Gbits/sec    0    417 KBytes       
[  5]   2.00-3.00   sec  2.48 GBytes  21.3 Gbits/sec    0    445 KBytes       
[  5]   3.00-4.00   sec  2.47 GBytes  21.2 Gbits/sec    0    445 KBytes       
[  5]   4.00-5.00   sec  2.45 GBytes  21.1 Gbits/sec    0    445 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    467 KBytes       
[  5]   6.00-7.00   sec  2.46 GBytes  21.1 Gbits/sec    0    467 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.1 Gbits/sec    0    731 KBytes       
[  5]   8.00-9.00   sec  2.47 GBytes  21.2 Gbits/sec    0    731 KBytes       
[  5]   9.00-10.00  sec  2.50 GBytes  21.5 Gbits/sec    0    731 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver


# match cnt 5
## hash
./ebpf_map lxc60294565d708 hash 28
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32802 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.43 GBytes  20.8 Gbits/sec    0    417 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.8 Gbits/sec    0    439 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.8 Gbits/sec    0    460 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    626 KBytes       
[  5]   4.00-5.00   sec  2.45 GBytes  21.1 Gbits/sec    0    626 KBytes       
[  5]   5.00-6.00   sec  2.47 GBytes  21.2 Gbits/sec    0    626 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.1 Gbits/sec    0    626 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.2 Gbits/sec    0    626 KBytes       
[  5]   8.00-9.00   sec  2.47 GBytes  21.2 Gbits/sec    0    626 KBytes       
[  5]   9.00-10.00  sec  2.48 GBytes  21.3 Gbits/sec    0    626 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 28
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32808 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.1 Gbits/sec    0    571 KBytes       
[  5]   2.00-3.00   sec  2.42 GBytes  20.8 Gbits/sec    0    701 KBytes       
[  5]   3.00-4.00   sec  2.42 GBytes  20.8 Gbits/sec    0    701 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.9 Gbits/sec    0    701 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.1 Gbits/sec    0    811 KBytes       
[  5]   6.00-7.00   sec  2.48 GBytes  21.3 Gbits/sec    0    811 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.1 Gbits/sec    0    811 KBytes       
[  5]   8.00-9.00   sec  2.46 GBytes  21.1 Gbits/sec    0    811 KBytes       
[  5]   9.00-10.00  sec  2.45 GBytes  21.1 Gbits/sec    0    811 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver


# match cnt 6
## hash
./ebpf_map lxc60294565d708 hash 27
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32814 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.61 GBytes  22.4 Gbits/sec    0    300 KBytes       
[  5]   1.00-2.00   sec  2.44 GBytes  21.0 Gbits/sec    0    300 KBytes       
[  5]   2.00-3.00   sec  2.49 GBytes  21.4 Gbits/sec    0    315 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.2 Gbits/sec    0    331 KBytes       
[  5]   4.00-5.00   sec  2.46 GBytes  21.1 Gbits/sec    0    331 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  21.0 Gbits/sec    0    370 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  20.9 Gbits/sec    0    370 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    393 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    495 KBytes       
[  5]   9.00-10.00  sec  2.42 GBytes  20.8 Gbits/sec    0    713 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 27
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32820 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.48 GBytes  21.3 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.2 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   9.00-10.00  sec  2.46 GBytes  21.1 Gbits/sec    0    487 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver


# match cnt 7
## hash
./ebpf_map lxc60294565d708 hash 26
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32826 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.47 GBytes  21.2 Gbits/sec    0    398 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.0 Gbits/sec    0    398 KBytes       
[  5]   2.00-3.00   sec  2.45 GBytes  21.0 Gbits/sec    0    417 KBytes       
[  5]   3.00-4.00   sec  2.47 GBytes  21.2 Gbits/sec    0    439 KBytes       
[  5]   4.00-5.00   sec  2.49 GBytes  21.4 Gbits/sec    0    439 KBytes       
[  5]   5.00-6.00   sec  2.50 GBytes  21.4 Gbits/sec    0    439 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.0 Gbits/sec    0    439 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    588 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    588 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.8 Gbits/sec    0    588 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 26
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32832 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.2 Gbits/sec    0    487 KBytes       
[  5]   6.00-7.00   sec  2.46 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0    762 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.4 GBytes  21.0 Gbits/sec                  receiver


# match cnt 8
## hash
./ebpf_map lxc60294565d708 hash 25
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32836 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.0 Gbits/sec    0    630 KBytes       
[  5]   2.00-3.00   sec  2.38 GBytes  20.5 Gbits/sec    0    630 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    630 KBytes       
[  5]   4.00-5.00   sec  2.38 GBytes  20.4 Gbits/sec    0    807 KBytes       
[  5]   5.00-6.00   sec  2.43 GBytes  20.8 Gbits/sec    0    807 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    807 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    807 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  20.9 Gbits/sec    0    807 KBytes       
[  5]   9.00-10.00  sec  2.47 GBytes  21.2 Gbits/sec    0    807 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 25
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32842 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.38 GBytes  20.5 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  21.0 Gbits/sec    0    511 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver


# match cnt 9
## hash
./ebpf_map lxc60294565d708 hash 24
# iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32850 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.8 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.40 GBytes  20.6 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    654 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.9 Gbits/sec    0    654 KBytes       
[  5]   5.00-6.00   sec  2.42 GBytes  20.8 Gbits/sec    0    706 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    723 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    723 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    759 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    759 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 24
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32854 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.44 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.47 GBytes  21.2 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.45 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  20.9 Gbits/sec    0    528 KBytes       
[  5]   6.00-7.00   sec  2.42 GBytes  20.8 Gbits/sec    0    528 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.2 Gbits/sec    0    659 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    659 KBytes       
[  5]   9.00-10.00  sec  2.46 GBytes  21.1 Gbits/sec    0    752 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver


# match cnt 10
## hash
./ebpf_map lxc60294565d708 hash 23
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32860 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    493 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    493 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    542 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  20.9 Gbits/sec    0    542 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.9 Gbits/sec    0    610 KBytes       
[  5]   5.00-6.00   sec  2.42 GBytes  20.8 Gbits/sec    0    610 KBytes       
[  5]   6.00-7.00   sec  2.43 GBytes  20.8 Gbits/sec    0    672 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.3 Gbits/sec    0    672 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  20.9 Gbits/sec    0    672 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    672 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 23
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32866 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  21.0 Gbits/sec    0    497 KBytes       
[  5]   1.00-2.00   sec  2.48 GBytes  21.3 Gbits/sec    0    497 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  20.9 Gbits/sec    0    497 KBytes       
[  5]   3.00-4.00   sec  2.45 GBytes  21.0 Gbits/sec    0    497 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.9 Gbits/sec    0    521 KBytes       
[  5]   5.00-6.00   sec  2.43 GBytes  20.9 Gbits/sec    0    627 KBytes       
[  5]   6.00-7.00   sec  2.43 GBytes  20.9 Gbits/sec    0    627 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    678 KBytes       
[  5]   8.00-9.00   sec  2.42 GBytes  20.8 Gbits/sec    0    694 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.8 Gbits/sec    0    694 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec                  receiver


# match cnt 11
## hash
./ebpf_map lxc60294565d708 hash 22
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32870 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.57 GBytes  22.1 Gbits/sec    0    315 KBytes       
[  5]   1.00-2.00   sec  2.42 GBytes  20.8 Gbits/sec    0    331 KBytes       
[  5]   2.00-3.00   sec  2.42 GBytes  20.8 Gbits/sec    0    394 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    394 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    462 KBytes       
[  5]   5.00-6.00   sec  2.41 GBytes  20.7 Gbits/sec    0    462 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    462 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0    462 KBytes       
[  5]   8.00-9.00   sec  2.40 GBytes  20.6 Gbits/sec    0    462 KBytes       
[  5]   9.00-10.00  sec  2.40 GBytes  20.6 Gbits/sec    0    462 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 22
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32874 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.50 GBytes  21.4 Gbits/sec    0    285 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.1 Gbits/sec    0    285 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    319 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    319 KBytes       
[  5]   4.00-5.00   sec  2.45 GBytes  21.1 Gbits/sec    0    339 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    355 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.6 Gbits/sec    0    355 KBytes       
[  5]   7.00-8.00   sec  2.40 GBytes  20.6 Gbits/sec    0    355 KBytes       
[  5]   8.00-9.00   sec  2.39 GBytes  20.6 Gbits/sec    0    355 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    355 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver


# match cnt 12
## hash
./ebpf_map lxc60294565d708 hash 21
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32880 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.39 GBytes  20.5 Gbits/sec    0    351 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.8 Gbits/sec    0    351 KBytes       
[  5]   2.00-3.00   sec  2.42 GBytes  20.8 Gbits/sec    0    390 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    439 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  20.9 Gbits/sec    0    510 KBytes       
[  5]   5.00-6.00   sec  2.43 GBytes  20.8 Gbits/sec    0    510 KBytes       
[  5]   6.00-7.00   sec  2.42 GBytes  20.8 Gbits/sec    0    540 KBytes       
[  5]   7.00-8.00   sec  2.43 GBytes  20.9 Gbits/sec    0    540 KBytes       
[  5]   8.00-9.00   sec  2.42 GBytes  20.8 Gbits/sec    0    540 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  20.9 Gbits/sec    0    540 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 21
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 32884 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    739 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    739 KBytes       
[  5]   3.00-4.00   sec  2.45 GBytes  21.0 Gbits/sec    0    739 KBytes       
[  5]   4.00-5.00   sec  2.42 GBytes  20.8 Gbits/sec    0    739 KBytes       
[  5]   5.00-6.00   sec  2.42 GBytes  20.8 Gbits/sec    0    739 KBytes       
[  5]   6.00-7.00   sec  2.46 GBytes  21.2 Gbits/sec    0    739 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  21.0 Gbits/sec    0    775 KBytes       
[  5]   8.00-9.00   sec  2.40 GBytes  20.6 Gbits/sec    0    775 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    775 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec                  receiver


# match cnt 13
## hash
./ebpf_map lxc60294565d708 hash 20
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33040 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.37 GBytes  20.4 Gbits/sec    0    335 KBytes       
[  5]   1.00-2.00   sec  2.38 GBytes  20.5 Gbits/sec    0    335 KBytes       
[  5]   2.00-3.00   sec  2.39 GBytes  20.5 Gbits/sec    0    396 KBytes       
[  5]   3.00-4.00   sec  2.39 GBytes  20.5 Gbits/sec    0    396 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    480 KBytes       
[  5]   5.00-6.00   sec  2.41 GBytes  20.7 Gbits/sec    0    480 KBytes       
[  5]   6.00-7.00   sec  2.42 GBytes  20.8 Gbits/sec    0    591 KBytes       
[  5]   7.00-8.00   sec  2.43 GBytes  20.9 Gbits/sec    0    591 KBytes       
[  5]   8.00-9.00   sec  2.42 GBytes  20.8 Gbits/sec    0    628 KBytes       
[  5]   9.00-10.00  sec  2.38 GBytes  20.5 Gbits/sec    0    694 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 20
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33046 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    517 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.0 Gbits/sec    0    517 KBytes       
[  5]   2.00-3.00   sec  2.45 GBytes  21.1 Gbits/sec    0    517 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.1 Gbits/sec    0    517 KBytes       
[  5]   4.00-5.00   sec  2.46 GBytes  21.1 Gbits/sec    0    517 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  21.0 Gbits/sec    0    517 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.1 Gbits/sec    0    746 KBytes       
[  5]   7.00-8.00   sec  2.43 GBytes  20.9 Gbits/sec    0    746 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  20.9 Gbits/sec    0    746 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  21.0 Gbits/sec    0    746 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver


# match cnt 14
## hash
./ebpf_map lxc60294565d708 hash 19
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33050 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    564 KBytes       
[  5]   3.00-4.00   sec  2.38 GBytes  20.4 Gbits/sec    0    564 KBytes       
[  5]   4.00-5.00   sec  2.36 GBytes  20.3 Gbits/sec    0    580 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    580 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    580 KBytes       
[  5]   7.00-8.00   sec  2.39 GBytes  20.5 Gbits/sec    0    674 KBytes       
[  5]   8.00-9.00   sec  2.39 GBytes  20.5 Gbits/sec    0    674 KBytes       
[  5]   9.00-10.00  sec  2.32 GBytes  19.9 Gbits/sec    0    748 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.9 GBytes  20.5 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.9 GBytes  20.5 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 19
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33054 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.42 GBytes  20.8 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.42 GBytes  20.8 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    490 KBytes       
[  5]   7.00-8.00   sec  2.43 GBytes  20.8 Gbits/sec    0    490 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    540 KBytes       
[  5]   9.00-10.00  sec  2.46 GBytes  21.1 Gbits/sec    0    540 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver


# match cnt 15
## hash
./ebpf_map lxc60294565d708 hash 18
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33060 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.38 GBytes  20.5 Gbits/sec    0    417 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    417 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    417 KBytes       
[  5]   3.00-4.00   sec  2.42 GBytes  20.8 Gbits/sec    0    417 KBytes       
[  5]   4.00-5.00   sec  2.40 GBytes  20.6 Gbits/sec    0    417 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    518 KBytes       
[  5]   6.00-7.00   sec  2.39 GBytes  20.5 Gbits/sec    0    602 KBytes       
[  5]   7.00-8.00   sec  2.39 GBytes  20.6 Gbits/sec    0    637 KBytes       
[  5]   8.00-9.00   sec  2.40 GBytes  20.6 Gbits/sec    0    669 KBytes       
[  5]   9.00-10.00  sec  2.40 GBytes  20.6 Gbits/sec    0    669 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 18
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33066 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.47 GBytes  21.2 Gbits/sec    0    517 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.2 Gbits/sec    0    517 KBytes       
[  5]   2.00-3.00   sec  2.48 GBytes  21.3 Gbits/sec    0    517 KBytes       
[  5]   3.00-4.00   sec  2.48 GBytes  21.3 Gbits/sec    0    517 KBytes       
[  5]   4.00-5.00   sec  2.48 GBytes  21.3 Gbits/sec    0    517 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.2 Gbits/sec    0    669 KBytes       
[  5]   6.00-7.00   sec  2.49 GBytes  21.4 Gbits/sec    0    669 KBytes       
[  5]   7.00-8.00   sec  2.49 GBytes  21.4 Gbits/sec    0    669 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  21.0 Gbits/sec    0    669 KBytes       
[  5]   9.00-10.00  sec  2.46 GBytes  21.2 Gbits/sec    0    669 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.7 GBytes  21.2 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.7 GBytes  21.2 Gbits/sec                  receiver


# match cnt 16
## hash
./ebpf_map lxc60294565d708 hash 17
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33070 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.40 GBytes  20.6 Gbits/sec    0    335 KBytes       
[  5]   1.00-2.00   sec  2.38 GBytes  20.4 Gbits/sec    0    351 KBytes       
[  5]   2.00-3.00   sec  2.36 GBytes  20.3 Gbits/sec    0    351 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    370 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    466 KBytes       
[  5]   5.00-6.00   sec  2.38 GBytes  20.4 Gbits/sec    0    466 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.7 Gbits/sec    0    493 KBytes       
[  5]   7.00-8.00   sec  2.40 GBytes  20.6 Gbits/sec    0    542 KBytes       
[  5]   8.00-9.00   sec  2.41 GBytes  20.7 Gbits/sec    0    597 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    597 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.9 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.9 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 17
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33076 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.8 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    493 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  21.0 Gbits/sec    0    493 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  21.0 Gbits/sec    0    493 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.1 Gbits/sec    0    493 KBytes       
[  5]   8.00-9.00   sec  2.46 GBytes  21.1 Gbits/sec    0    493 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  21.0 Gbits/sec    0    522 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.4 GBytes  21.0 Gbits/sec                  receiver


# match cnt 17
## hash
./ebpf_map lxc60294565d708 hash 16
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33082 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.40 GBytes  20.6 Gbits/sec    0    519 KBytes       
[  5]   1.00-2.00   sec  2.39 GBytes  20.5 Gbits/sec    0    519 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    658 KBytes       
[  5]   3.00-4.00   sec  2.41 GBytes  20.7 Gbits/sec    0    658 KBytes       
[  5]   4.00-5.00   sec  2.42 GBytes  20.8 Gbits/sec    0    658 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    658 KBytes       
[  5]   6.00-7.00   sec  2.39 GBytes  20.5 Gbits/sec    0    693 KBytes       
[  5]   7.00-8.00   sec  2.40 GBytes  20.6 Gbits/sec    0    817 KBytes       
[  5]   8.00-9.00   sec  2.39 GBytes  20.6 Gbits/sec    0    817 KBytes       
[  5]   9.00-10.00  sec  2.39 GBytes  20.5 Gbits/sec    0    817 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 16
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33086 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.46 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.2 Gbits/sec    0    487 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec                  receiver


# match cnt 18
## hash
./ebpf_map lxc60294565d708 hash 15
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33092 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.39 GBytes  20.5 Gbits/sec    0    493 KBytes       
[  5]   1.00-2.00   sec  2.39 GBytes  20.5 Gbits/sec    0    493 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    493 KBytes       
[  5]   3.00-4.00   sec  2.39 GBytes  20.5 Gbits/sec    0    519 KBytes       
[  5]   4.00-5.00   sec  2.40 GBytes  20.6 Gbits/sec    0    519 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.7 Gbits/sec    0    519 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    519 KBytes       
[  5]   7.00-8.00   sec  2.41 GBytes  20.7 Gbits/sec    0    519 KBytes       
[  5]   8.00-9.00   sec  2.40 GBytes  20.6 Gbits/sec    0    603 KBytes       
[  5]   9.00-10.00  sec  2.38 GBytes  20.5 Gbits/sec    0    603 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 15
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33096 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.46 GBytes  21.1 Gbits/sec    0    657 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.0 Gbits/sec    0    750 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    750 KBytes       
[  5]   3.00-4.00   sec  2.43 GBytes  20.8 Gbits/sec    0    750 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.9 Gbits/sec    0    826 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  20.9 Gbits/sec    0    826 KBytes       
[  5]   6.00-7.00   sec  2.41 GBytes  20.7 Gbits/sec    0    826 KBytes       
[  5]   7.00-8.00   sec  2.41 GBytes  20.7 Gbits/sec    0    826 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    826 KBytes       
[  5]   9.00-10.00  sec  2.46 GBytes  21.1 Gbits/sec    0    911 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver


# match cnt 19
## hash
./ebpf_map lxc60294565d708 hash 14
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33106 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.38 GBytes  20.5 Gbits/sec    0    452 KBytes       
[  5]   1.00-2.00   sec  2.35 GBytes  20.2 Gbits/sec    0    452 KBytes       
[  5]   2.00-3.00   sec  2.38 GBytes  20.5 Gbits/sec    0    452 KBytes       
[  5]   3.00-4.00   sec  2.39 GBytes  20.5 Gbits/sec    0    452 KBytes       
[  5]   4.00-5.00   sec  2.40 GBytes  20.6 Gbits/sec    0    474 KBytes       
[  5]   5.00-6.00   sec  2.42 GBytes  20.8 Gbits/sec    0    474 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.6 Gbits/sec    0    474 KBytes       
[  5]   7.00-8.00   sec  2.37 GBytes  20.4 Gbits/sec    0    538 KBytes       
[  5]   8.00-9.00   sec  2.33 GBytes  20.0 Gbits/sec    0    558 KBytes       
[  5]   9.00-10.00  sec  2.39 GBytes  20.5 Gbits/sec    0    748 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.8 GBytes  20.5 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.8 GBytes  20.5 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 14
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33112 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.48 GBytes  21.3 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.50 GBytes  21.5 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.50 GBytes  21.4 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.49 GBytes  21.4 Gbits/sec    0    592 KBytes       
[  5]   4.00-5.00   sec  2.50 GBytes  21.4 Gbits/sec    0    592 KBytes       
[  5]   5.00-6.00   sec  2.47 GBytes  21.2 Gbits/sec    0    592 KBytes       
[  5]   6.00-7.00   sec  2.47 GBytes  21.2 Gbits/sec    0    592 KBytes       
[  5]   7.00-8.00   sec  2.48 GBytes  21.3 Gbits/sec    0    592 KBytes       
[  5]   8.00-9.00   sec  2.48 GBytes  21.3 Gbits/sec    0    592 KBytes       
[  5]   9.00-10.00  sec  2.47 GBytes  21.2 Gbits/sec    0    624 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec                  receiver


# match cnt 20
## hash
./ebpf_map lxc60294565d708 hash 13
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33116 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.39 GBytes  20.5 Gbits/sec    0    493 KBytes       
[  5]   1.00-2.00   sec  2.40 GBytes  20.6 Gbits/sec    0    493 KBytes       
[  5]   2.00-3.00   sec  2.36 GBytes  20.2 Gbits/sec    0    649 KBytes       
[  5]   3.00-4.00   sec  2.36 GBytes  20.3 Gbits/sec    0    659 KBytes       
[  5]   4.00-5.00   sec  2.37 GBytes  20.3 Gbits/sec    0    659 KBytes       
[  5]   5.00-6.00   sec  2.38 GBytes  20.5 Gbits/sec    0    697 KBytes       
[  5]   6.00-7.00   sec  2.38 GBytes  20.4 Gbits/sec    0    697 KBytes       
[  5]   7.00-8.00   sec  2.39 GBytes  20.5 Gbits/sec    0    752 KBytes       
[  5]   8.00-9.00   sec  2.37 GBytes  20.3 Gbits/sec    0    771 KBytes       
[  5]   9.00-10.00  sec  2.36 GBytes  20.3 Gbits/sec    0    771 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 13
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33122 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.42 GBytes  20.8 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    538 KBytes       
[  5]   9.00-10.00  sec  2.45 GBytes  21.0 Gbits/sec    0    571 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver


# match cnt 21
## hash
./ebpf_map lxc60294565d708 hash 12
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33126 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.56 GBytes  22.0 Gbits/sec    0    262 KBytes       
[  5]   1.00-2.00   sec  2.37 GBytes  20.4 Gbits/sec    0    308 KBytes       
[  5]   2.00-3.00   sec  2.40 GBytes  20.6 Gbits/sec    0    359 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    401 KBytes       
[  5]   4.00-5.00   sec  2.38 GBytes  20.4 Gbits/sec    0    401 KBytes       
[  5]   5.00-6.00   sec  2.38 GBytes  20.5 Gbits/sec    0    466 KBytes       
[  5]   6.00-7.00   sec  2.38 GBytes  20.4 Gbits/sec    0    466 KBytes       
[  5]   7.00-8.00   sec  2.37 GBytes  20.4 Gbits/sec    0    466 KBytes       
[  5]   8.00-9.00   sec  2.35 GBytes  20.2 Gbits/sec    0    466 KBytes       
[  5]   9.00-10.00  sec  2.38 GBytes  20.4 Gbits/sec    0    466 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.0 GBytes  20.6 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 12
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33136 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  21.0 Gbits/sec    0    474 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.2 Gbits/sec    0    474 KBytes       
[  5]   2.00-3.00   sec  2.49 GBytes  21.4 Gbits/sec    0    474 KBytes       
[  5]   3.00-4.00   sec  2.48 GBytes  21.3 Gbits/sec    0    474 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    474 KBytes       
[  5]   5.00-6.00   sec  2.43 GBytes  20.8 Gbits/sec    0    474 KBytes       
[  5]   6.00-7.00   sec  2.47 GBytes  21.2 Gbits/sec    0    474 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  20.9 Gbits/sec    0    497 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    497 KBytes       
[  5]   9.00-10.00  sec  2.45 GBytes  21.0 Gbits/sec    0    497 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec                  receiver


# match cnt 22
## hash
./ebpf_map lxc60294565d708 hash 11
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33142 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.39 GBytes  20.5 Gbits/sec    0    398 KBytes       
[  5]   1.00-2.00   sec  2.38 GBytes  20.4 Gbits/sec    0    417 KBytes       
[  5]   2.00-3.00   sec  2.39 GBytes  20.5 Gbits/sec    0    417 KBytes       
[  5]   3.00-4.00   sec  2.38 GBytes  20.4 Gbits/sec    0    417 KBytes       
[  5]   4.00-5.00   sec  2.38 GBytes  20.5 Gbits/sec    0    417 KBytes       
[  5]   5.00-6.00   sec  2.38 GBytes  20.5 Gbits/sec    0    417 KBytes       
[  5]   6.00-7.00   sec  2.38 GBytes  20.5 Gbits/sec    0    417 KBytes       
[  5]   7.00-8.00   sec  2.40 GBytes  20.6 Gbits/sec    0    417 KBytes       
[  5]   8.00-9.00   sec  2.38 GBytes  20.4 Gbits/sec    0    417 KBytes       
[  5]   9.00-10.00  sec  2.37 GBytes  20.4 Gbits/sec    0    417 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.8 GBytes  20.5 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.8 GBytes  20.5 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 11
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33146 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.48 GBytes  21.3 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.1 Gbits/sec    0    522 KBytes       
[  5]   2.00-3.00   sec  2.47 GBytes  21.2 Gbits/sec    0    522 KBytes       
[  5]   3.00-4.00   sec  2.45 GBytes  21.1 Gbits/sec    0    612 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    612 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.2 Gbits/sec    0    612 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.1 Gbits/sec    0    711 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.2 Gbits/sec    0    748 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    786 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  21.0 Gbits/sec    0    786 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver

# match cnt 23
## hash
./ebpf_map lxc60294565d708 hash 10
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33150 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.36 GBytes  20.2 Gbits/sec    0    369 KBytes       
[  5]   1.00-2.00   sec  2.39 GBytes  20.5 Gbits/sec    0    369 KBytes       
[  5]   2.00-3.00   sec  2.40 GBytes  20.6 Gbits/sec    0    392 KBytes       
[  5]   3.00-4.00   sec  2.36 GBytes  20.3 Gbits/sec    0    499 KBytes       
[  5]   4.00-5.00   sec  2.37 GBytes  20.3 Gbits/sec    0    585 KBytes       
[  5]   5.00-6.00   sec  2.39 GBytes  20.5 Gbits/sec    0    677 KBytes       
[  5]   6.00-7.00   sec  2.36 GBytes  20.3 Gbits/sec    0    711 KBytes       
[  5]   7.00-8.00   sec  2.37 GBytes  20.4 Gbits/sec    0    711 KBytes       
[  5]   8.00-9.00   sec  2.34 GBytes  20.1 Gbits/sec    0    711 KBytes       
[  5]   9.00-10.00  sec  2.36 GBytes  20.3 Gbits/sec    0    711 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 10
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33156 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.47 GBytes  21.2 Gbits/sec    0    723 KBytes       
[  5]   1.00-2.00   sec  2.49 GBytes  21.4 Gbits/sec    0    723 KBytes       
[  5]   2.00-3.00   sec  2.50 GBytes  21.5 Gbits/sec    0    723 KBytes       
[  5]   3.00-4.00   sec  2.49 GBytes  21.4 Gbits/sec    0    723 KBytes       
[  5]   4.00-5.00   sec  2.47 GBytes  21.3 Gbits/sec    0    723 KBytes       
[  5]   5.00-6.00   sec  2.48 GBytes  21.3 Gbits/sec    0    723 KBytes       
[  5]   6.00-7.00   sec  2.48 GBytes  21.3 Gbits/sec    0    723 KBytes       
[  5]   7.00-8.00   sec  2.47 GBytes  21.2 Gbits/sec    0    723 KBytes       
[  5]   8.00-9.00   sec  2.47 GBytes  21.2 Gbits/sec    0    723 KBytes       
[  5]   9.00-10.00  sec  2.48 GBytes  21.3 Gbits/sec    0    723 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.8 GBytes  21.3 Gbits/sec                  receiver


# match cnt 24
## hash
./ebpf_map lxc60294565d708 hash 9
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33160 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.38 GBytes  20.5 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.40 GBytes  20.6 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.40 GBytes  20.6 Gbits/sec    0    487 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    513 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.6 Gbits/sec    0    513 KBytes       
[  5]   7.00-8.00   sec  2.33 GBytes  20.0 Gbits/sec    0    611 KBytes       
[  5]   8.00-9.00   sec  2.38 GBytes  20.5 Gbits/sec    0    611 KBytes       
[  5]   9.00-10.00  sec  2.38 GBytes  20.4 Gbits/sec    0    611 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.9 GBytes  20.5 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.9 GBytes  20.5 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 9
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33164 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.45 GBytes  21.1 Gbits/sec    0    571 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.8 Gbits/sec    0    571 KBytes       
[  5]   3.00-4.00   sec  2.43 GBytes  20.9 Gbits/sec    0    676 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    833 KBytes       
[  5]   5.00-6.00   sec  2.41 GBytes  20.7 Gbits/sec    0    875 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.7 Gbits/sec    0    875 KBytes       
[  5]   7.00-8.00   sec  2.42 GBytes  20.8 Gbits/sec    0   1013 KBytes       
[  5]   8.00-9.00   sec  2.41 GBytes  20.7 Gbits/sec    0   1013 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0   1013 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec                  receiver


# match cnt 25
## hash
./ebpf_map lxc60294565d708 hash 8
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33170 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.35 GBytes  20.2 Gbits/sec    0    493 KBytes       
[  5]   1.00-2.00   sec  2.37 GBytes  20.3 Gbits/sec    0    493 KBytes       
[  5]   2.00-3.00   sec  2.40 GBytes  20.6 Gbits/sec    0    493 KBytes       
[  5]   3.00-4.00   sec  2.38 GBytes  20.4 Gbits/sec    0    493 KBytes       
[  5]   4.00-5.00   sec  2.34 GBytes  20.1 Gbits/sec    0    493 KBytes       
[  5]   5.00-6.00   sec  2.37 GBytes  20.4 Gbits/sec    0    493 KBytes       
[  5]   6.00-7.00   sec  2.38 GBytes  20.5 Gbits/sec    0    493 KBytes       
[  5]   7.00-8.00   sec  2.38 GBytes  20.5 Gbits/sec    0    493 KBytes       
[  5]   8.00-9.00   sec  2.37 GBytes  20.3 Gbits/sec    0    517 KBytes       
[  5]   9.00-10.00  sec  2.37 GBytes  20.4 Gbits/sec    0    542 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.7 GBytes  20.4 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 8
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33174 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.46 GBytes  21.1 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.46 GBytes  21.1 Gbits/sec    0    529 KBytes       
[  5]   2.00-3.00   sec  2.46 GBytes  21.1 Gbits/sec    0    612 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    712 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    712 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.2 Gbits/sec    0    750 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.0 Gbits/sec    0    750 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  21.0 Gbits/sec    0    750 KBytes       
[  5]   8.00-9.00   sec  2.47 GBytes  21.2 Gbits/sec    0    789 KBytes       
[  5]   9.00-10.00  sec  2.44 GBytes  21.0 Gbits/sec    0    789 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.1 Gbits/sec                  receiver


# match cnt 26
## hash
./ebpf_map lxc60294565d708 hash 7
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33178 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.34 GBytes  20.1 Gbits/sec    0    474 KBytes       
[  5]   1.00-2.00   sec  2.35 GBytes  20.2 Gbits/sec    0    474 KBytes       
[  5]   2.00-3.00   sec  2.35 GBytes  20.2 Gbits/sec    0    474 KBytes       
[  5]   3.00-4.00   sec  2.32 GBytes  19.9 Gbits/sec    0    474 KBytes       
[  5]   4.00-5.00   sec  2.34 GBytes  20.1 Gbits/sec    0    474 KBytes       
[  5]   5.00-6.00   sec  2.33 GBytes  20.0 Gbits/sec    0    522 KBytes       
[  5]   6.00-7.00   sec  2.37 GBytes  20.4 Gbits/sec    0    548 KBytes       
[  5]   7.00-8.00   sec  2.38 GBytes  20.4 Gbits/sec    0    548 KBytes       
[  5]   8.00-9.00   sec  2.34 GBytes  20.1 Gbits/sec    0    548 KBytes       
[  5]   9.00-10.00  sec  2.33 GBytes  20.0 Gbits/sec    0    604 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.5 GBytes  20.2 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.5 GBytes  20.2 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 7
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33184 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.44 GBytes  20.9 Gbits/sec    0    369 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.8 Gbits/sec    0    369 KBytes       
[  5]   2.00-3.00   sec  2.42 GBytes  20.8 Gbits/sec    0    388 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    388 KBytes       
[  5]   4.00-5.00   sec  2.50 GBytes  21.5 Gbits/sec    0    388 KBytes       
[  5]   5.00-6.00   sec  2.50 GBytes  21.5 Gbits/sec    0    388 KBytes       
[  5]   6.00-7.00   sec  2.49 GBytes  21.4 Gbits/sec    0    388 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.0 Gbits/sec    0    731 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.8 Gbits/sec    0    767 KBytes       
[  5]   9.00-10.00  sec  2.47 GBytes  21.2 Gbits/sec    0    767 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.6 GBytes  21.1 Gbits/sec                  receiver


# match cnt 27
## hash
./ebpf_map lxc60294565d708 hash 6
# iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33188 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.33 GBytes  20.0 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.36 GBytes  20.3 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.38 GBytes  20.4 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.35 GBytes  20.2 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.39 GBytes  20.6 Gbits/sec    0    541 KBytes       
[  5]   5.00-6.00   sec  2.39 GBytes  20.5 Gbits/sec    0    541 KBytes       
[  5]   6.00-7.00   sec  2.37 GBytes  20.4 Gbits/sec    0    541 KBytes       
[  5]   7.00-8.00   sec  2.34 GBytes  20.1 Gbits/sec    0    781 KBytes       
[  5]   8.00-9.00   sec  2.36 GBytes  20.3 Gbits/sec    0    781 KBytes       
[  5]   9.00-10.00  sec  2.39 GBytes  20.5 Gbits/sec    0    820 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.7 GBytes  20.3 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.7 GBytes  20.3 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 6
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33194 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.41 GBytes  20.7 Gbits/sec    0    414 KBytes       
[  5]   1.00-2.00   sec  2.42 GBytes  20.8 Gbits/sec    0    488 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    573 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  20.9 Gbits/sec    0    694 KBytes       
[  5]   4.00-5.00   sec  2.43 GBytes  20.8 Gbits/sec   94    729 KBytes       
[  5]   5.00-6.00   sec  2.49 GBytes  21.4 Gbits/sec    0    729 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  21.0 Gbits/sec    0    729 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.0 Gbits/sec    0    729 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    729 KBytes       
[  5]   9.00-10.00  sec  2.40 GBytes  20.7 Gbits/sec    0    729 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec   94             sender
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec                  receiver


# match cnt 28
## hash
./ebpf_map lxc60294565d708 hash 5
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33198 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.39 GBytes  20.5 Gbits/sec    0    584 KBytes       
[  5]   1.00-2.00   sec  2.37 GBytes  20.4 Gbits/sec    0    584 KBytes       
[  5]   2.00-3.00   sec  2.33 GBytes  20.0 Gbits/sec    0    584 KBytes       
[  5]   3.00-4.00   sec  2.33 GBytes  20.0 Gbits/sec    0    616 KBytes       
[  5]   4.00-5.00   sec  2.35 GBytes  20.2 Gbits/sec    0    616 KBytes       
[  5]   5.00-6.00   sec  2.36 GBytes  20.3 Gbits/sec    0    680 KBytes       
[  5]   6.00-7.00   sec  2.32 GBytes  19.9 Gbits/sec    0    793 KBytes       
[  5]   7.00-8.00   sec  2.32 GBytes  19.9 Gbits/sec    0    793 KBytes       
[  5]   8.00-9.00   sec  2.32 GBytes  19.9 Gbits/sec    0    793 KBytes       
[  5]   9.00-10.00  sec  2.35 GBytes  20.2 Gbits/sec  331   1.03 MBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.4 GBytes  20.1 Gbits/sec  331             sender
[  5]   0.00-10.00  sec  23.4 GBytes  20.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 5
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33204 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.40 GBytes  20.6 Gbits/sec    0    526 KBytes       
[  5]   1.00-2.00   sec  2.50 GBytes  21.5 Gbits/sec    0    641 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    676 KBytes       
[  5]   3.00-4.00   sec  2.41 GBytes  20.7 Gbits/sec    0    676 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    676 KBytes       
[  5]   5.00-6.00   sec  2.44 GBytes  21.0 Gbits/sec    0    676 KBytes       
[  5]   6.00-7.00   sec  2.49 GBytes  21.4 Gbits/sec    0    676 KBytes       
[  5]   7.00-8.00   sec  2.46 GBytes  21.1 Gbits/sec    0    676 KBytes       
[  5]   8.00-9.00   sec  2.42 GBytes  20.8 Gbits/sec    0    676 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0    676 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec                  receiver


# match cnt 29
## hash
./ebpf_map lxc60294565d708 hash 4
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33210 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.31 GBytes  19.9 Gbits/sec    0    493 KBytes       
[  5]   1.00-2.00   sec  2.33 GBytes  20.0 Gbits/sec    0    493 KBytes       
[  5]   2.00-3.00   sec  2.36 GBytes  20.3 Gbits/sec    0    493 KBytes       
[  5]   3.00-4.00   sec  2.35 GBytes  20.2 Gbits/sec    0    493 KBytes       
[  5]   4.00-5.00   sec  2.35 GBytes  20.2 Gbits/sec    0    493 KBytes       
[  5]   5.00-6.00   sec  2.35 GBytes  20.2 Gbits/sec    0    493 KBytes       
[  5]   6.00-7.00   sec  2.36 GBytes  20.3 Gbits/sec    0    493 KBytes       
[  5]   7.00-8.00   sec  2.36 GBytes  20.3 Gbits/sec    0    493 KBytes       
[  5]   8.00-9.00   sec  2.37 GBytes  20.3 Gbits/sec    0    493 KBytes       
[  5]   9.00-10.00  sec  2.35 GBytes  20.2 Gbits/sec    0    519 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.5 GBytes  20.2 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.5 GBytes  20.2 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 4
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33214 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.44 GBytes  21.0 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.43 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   4.00-5.00   sec  2.42 GBytes  20.8 Gbits/sec    0    487 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    487 KBytes       
[  5]   6.00-7.00   sec  2.44 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  20.9 Gbits/sec    0    487 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    659 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0    752 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.8 Gbits/sec                  receiver


# match cnt 30
## hash
./ebpf_map lxc60294565d708 hash 3
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33218 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.35 GBytes  20.2 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.37 GBytes  20.3 Gbits/sec    0    511 KBytes       
[  5]   2.00-3.00   sec  2.36 GBytes  20.2 Gbits/sec    0    511 KBytes       
[  5]   3.00-4.00   sec  2.37 GBytes  20.4 Gbits/sec    0    511 KBytes       
[  5]   4.00-5.00   sec  2.37 GBytes  20.3 Gbits/sec    0    511 KBytes       
[  5]   5.00-6.00   sec  2.37 GBytes  20.4 Gbits/sec    0    511 KBytes       
[  5]   6.00-7.00   sec  2.37 GBytes  20.3 Gbits/sec    0    615 KBytes       
[  5]   7.00-8.00   sec  2.37 GBytes  20.3 Gbits/sec    0    666 KBytes       
[  5]   8.00-9.00   sec  2.38 GBytes  20.5 Gbits/sec    0    746 KBytes       
[  5]   9.00-10.00  sec  2.32 GBytes  19.9 Gbits/sec    0    746 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.6 GBytes  20.3 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.6 GBytes  20.3 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 3
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33226 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.45 GBytes  21.0 Gbits/sec    0    400 KBytes       
[  5]   1.00-2.00   sec  2.48 GBytes  21.3 Gbits/sec    0    400 KBytes       
[  5]   2.00-3.00   sec  2.41 GBytes  20.7 Gbits/sec    0    488 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    583 KBytes       
[  5]   4.00-5.00   sec  2.41 GBytes  20.7 Gbits/sec    0    619 KBytes       
[  5]   5.00-6.00   sec  2.40 GBytes  20.6 Gbits/sec    0    724 KBytes       
[  5]   6.00-7.00   sec  2.40 GBytes  20.6 Gbits/sec    0    724 KBytes       
[  5]   7.00-8.00   sec  2.40 GBytes  20.6 Gbits/sec    0    766 KBytes       
[  5]   8.00-9.00   sec  2.40 GBytes  20.6 Gbits/sec    0    766 KBytes       
[  5]   9.00-10.00  sec  2.41 GBytes  20.7 Gbits/sec    0    807 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.2 GBytes  20.8 Gbits/sec                  receiver


# match cnt 31
## hash
./ebpf_map lxc60294565d708 hash 2
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33234 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.33 GBytes  20.0 Gbits/sec    0    525 KBytes       
[  5]   1.00-2.00   sec  2.34 GBytes  20.1 Gbits/sec    0    646 KBytes       
[  5]   2.00-3.00   sec  2.34 GBytes  20.1 Gbits/sec    0    646 KBytes       
[  5]   3.00-4.00   sec  2.33 GBytes  20.0 Gbits/sec    0    646 KBytes       
[  5]   4.00-5.00   sec  2.34 GBytes  20.1 Gbits/sec    0    725 KBytes       
[  5]   5.00-6.00   sec  2.34 GBytes  20.1 Gbits/sec    0    725 KBytes       
[  5]   6.00-7.00   sec  2.35 GBytes  20.2 Gbits/sec    0    845 KBytes       
[  5]   7.00-8.00   sec  2.36 GBytes  20.2 Gbits/sec    0    845 KBytes       
[  5]   8.00-9.00   sec  2.33 GBytes  20.0 Gbits/sec    0    845 KBytes       
[  5]   9.00-10.00  sec  2.34 GBytes  20.1 Gbits/sec    0    845 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.4 GBytes  20.1 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.4 GBytes  20.1 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 2
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33238 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.41 GBytes  20.7 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.46 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.48 GBytes  21.3 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.47 GBytes  21.2 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.46 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   8.00-9.00   sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   9.00-10.00  sec  2.45 GBytes  21.0 Gbits/sec    0    464 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.5 GBytes  21.0 Gbits/sec                  receiver


# match cnt 32
## hash
./ebpf_map lxc60294565d708 hash 1
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33242 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.34 GBytes  20.1 Gbits/sec    0    521 KBytes       
[  5]   1.00-2.00   sec  2.38 GBytes  20.4 Gbits/sec    0    521 KBytes       
[  5]   2.00-3.00   sec  2.37 GBytes  20.3 Gbits/sec    0    521 KBytes       
[  5]   3.00-4.00   sec  2.36 GBytes  20.3 Gbits/sec    0    576 KBytes       
[  5]   4.00-5.00   sec  2.35 GBytes  20.2 Gbits/sec    0    576 KBytes       
[  5]   5.00-6.00   sec  2.36 GBytes  20.3 Gbits/sec    0    576 KBytes       
[  5]   6.00-7.00   sec  2.35 GBytes  20.2 Gbits/sec    0    576 KBytes       
[  5]   7.00-8.00   sec  2.34 GBytes  20.1 Gbits/sec    0    752 KBytes       
[  5]   8.00-9.00   sec  2.38 GBytes  20.5 Gbits/sec    0    752 KBytes       
[  5]   9.00-10.00  sec  2.39 GBytes  20.6 Gbits/sec    0    752 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.6 GBytes  20.3 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.6 GBytes  20.3 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 1
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33248 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.40 GBytes  20.6 Gbits/sec    0    464 KBytes       
[  5]   1.00-2.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   3.00-4.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   4.00-5.00   sec  2.44 GBytes  21.0 Gbits/sec    0    464 KBytes       
[  5]   5.00-6.00   sec  2.45 GBytes  21.1 Gbits/sec    0    464 KBytes       
[  5]   6.00-7.00   sec  2.43 GBytes  20.9 Gbits/sec    0    464 KBytes       
[  5]   7.00-8.00   sec  2.44 GBytes  21.0 Gbits/sec    0    514 KBytes       
[  5]   8.00-9.00   sec  2.44 GBytes  20.9 Gbits/sec    0    514 KBytes       
[  5]   9.00-10.00  sec  2.45 GBytes  21.1 Gbits/sec    0    514 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.4 GBytes  20.9 Gbits/sec                  receiver


# match cnt 33
## hash
./ebpf_map lxc60294565d708 hash 0
# iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33252 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.31 GBytes  19.8 Gbits/sec    0    487 KBytes       
[  5]   1.00-2.00   sec  2.29 GBytes  19.7 Gbits/sec    0    487 KBytes       
[  5]   2.00-3.00   sec  2.29 GBytes  19.7 Gbits/sec    0    487 KBytes       
[  5]   3.00-4.00   sec  2.31 GBytes  19.9 Gbits/sec    0    567 KBytes       
[  5]   4.00-5.00   sec  2.29 GBytes  19.7 Gbits/sec    0    567 KBytes       
[  5]   5.00-6.00   sec  2.32 GBytes  19.9 Gbits/sec    0    567 KBytes       
[  5]   6.00-7.00   sec  2.34 GBytes  20.1 Gbits/sec    0    567 KBytes       
[  5]   7.00-8.00   sec  2.28 GBytes  19.5 Gbits/sec    0    567 KBytes       
[  5]   8.00-9.00   sec  2.29 GBytes  19.6 Gbits/sec    0    567 KBytes       
[  5]   9.00-10.00  sec  2.29 GBytes  19.7 Gbits/sec    0    567 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  23.0 GBytes  19.8 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  23.0 GBytes  19.8 Gbits/sec                  receiver

## trie
./ebpf_map lxc60294565d708 trie 0
iperf3 -c 10.129.113.223
Connecting to host 10.129.113.223, port 5201
[  5] local 10.105.17.131 port 33258 connected to 10.129.113.223 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  2.43 GBytes  20.9 Gbits/sec    0    335 KBytes       
[  5]   1.00-2.00   sec  2.44 GBytes  20.9 Gbits/sec    0    351 KBytes       
[  5]   2.00-3.00   sec  2.43 GBytes  20.9 Gbits/sec    0    392 KBytes       
[  5]   3.00-4.00   sec  2.40 GBytes  20.6 Gbits/sec    0    392 KBytes       
[  5]   4.00-5.00   sec  2.42 GBytes  20.8 Gbits/sec    0    432 KBytes       
[  5]   5.00-6.00   sec  2.46 GBytes  21.1 Gbits/sec    0    432 KBytes       
[  5]   6.00-7.00   sec  2.45 GBytes  21.1 Gbits/sec    0    432 KBytes       
[  5]   7.00-8.00   sec  2.45 GBytes  21.0 Gbits/sec    0    557 KBytes       
[  5]   8.00-9.00   sec  2.43 GBytes  20.9 Gbits/sec    0    630 KBytes       
[  5]   9.00-10.00  sec  2.43 GBytes  20.9 Gbits/sec    0    650 KBytes
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec    0             sender
[  5]   0.00-10.00  sec  24.3 GBytes  20.9 Gbits/sec                  receiver

