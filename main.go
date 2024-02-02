// This program demonstrates attaching an eBPF program to a network interface,
// to test hash & lpm_trie performance.
package main

import (
	"encoding/json"
	"fmt"
	"log"
	"net"
	"os"
	"path"
	"strconv"
	"strings"

	"ebpf_map/tc"
	"github.com/cilium/cilium/pkg/types"
	"github.com/cilium/ebpf"
)

//go:generate go run github.com/cilium/ebpf/cmd/bpf2go -cc clang bpf ./ebpf_map.c -- -I./include

const (
	bpfFSPath = "/sys/fs/bpf"
)

type CIDRs struct {
	Subnets      []string `json:"subnets"`
	SubnetsSplit []string `json:"subnets_split"`
	Hosts        []string `json:"hosts"`
	Host223      []string `json:"host223"`
}

type IP4Key struct {
	PrefixLen uint32
	IP        types.IPv4
}

func newIP4Key(ip net.IP, sourceMask net.IPMask) IP4Key {
	key := IP4Key{}
	ones, _ := sourceMask.Size()
	copy(key.IP[:], ip.To4())
	key.PrefixLen = uint32(ones)
	return key
}

func main() {
	if len(os.Args) < 4 {
		log.Fatalf("Please specify <network interface> <map type> <mask length>")
	}

	// Look up the network interface by name.
	ifaceName := os.Args[1]
	iface, err := net.InterfaceByName(ifaceName)
	if err != nil {
		log.Fatalf("failed to lookup network iface %q: %s", ifaceName, err)
	}

	mapType := os.Args[2]
	if mapType != "trie" && mapType != "hash" {
		log.Fatalf("map type must be one of: trie/hash")
	}

	maskLenStr := os.Args[3]
	maskLen, err := strconv.Atoi(maskLenStr)
	if err != nil || maskLen < 0 || maskLen > 32 {
		log.Fatalf("invalid mask length, should be 0-32")
	}

	val := 38
	if mapType == "hash" {
		val = 34
	}
	keys, values := readCidrsFromConf(maskLen, val)

	objs := initObjects()

	/* example of single key/value map update
	var res = make([]byte, objs.HashMap.KeySize())
	ones, _ := ipnet.Mask.Size()
	binary.LittleEndian.PutUint32(res, uint32(ones))
	copy(res[4:], ipnet.IP)
	if err := objs.HashMap.Put(res, uint8(2)); err != nil {
		log.Fatalf("hash map put err %v \n", err)
	}
	*/
	var ebpfMap *ebpf.Map
	var ebpfProg *ebpf.Program
	var annotation string
	switch mapType {
	case "trie":
		ebpfMap = objs.LpmTrieMap
		ebpfProg = objs.TrieSearch
		annotation = fmt.Sprintf("%s:[%s]", "ebpf_map.o", "trie")
	case "hash":
		ebpfMap = objs.HashMap
		ebpfProg = objs.HashSearch
		annotation = fmt.Sprintf("%s:[%s]", "ebpf_map.o", "hash")
	}
	count, err := ebpfMap.BatchUpdate(keys, values, nil)
	if err != nil {
		log.Fatalf("BatchUpdate failed: %v", err)
	}
	if count != len(keys) {
		log.Fatalf("BatchUpdate: expected %d, actually %d", len(keys), count)
	}

	defer objs.Close()

	// Attach the program.
	err = tc.AttachEbpfIngress(iface.Index, ebpfProg, annotation)
	if err != nil {
		log.Fatalf("could not attach ebpf program: %s", err)
	}

	log.Printf("Successfully attached ebpf to iface %q (index %d), map size: %d", iface.Name, iface.Index, count)
}

func initObjects() bpfObjects {
	pinPath := path.Join(bpfFSPath, "ebpf_map_test")
	if err := os.MkdirAll(pinPath, os.ModePerm); err != nil {
		log.Fatalf("failed to create bpf fs %s: %+v", pinPath, err)
	}

	bpfSpec, err := loadBpf()
	if err != nil {
		log.Fatalf("failed to load bpf spec: %+v", err)
	}

	for _, p := range bpfSpec.Programs {
		// As we know, the elf section of our bpf program is private ones. As a
		// result, `cilium/ebpf` can not recognize the section name, and it will
		// assign the type of bpf program as `UnspecifiedProgram`. Therefore, we
		// have to specify the type of bpf program as `SchedCLS`.
		p.AttachType = ebpf.AttachNone
		if p.Type == ebpf.UnspecifiedProgram {
			p.Type = ebpf.SchedCLS
		}
	}

	// Load pre-compiled programs into the kernel.
	objs := bpfObjects{}
	ebpfCollection := &ebpf.CollectionOptions{
		Maps: ebpf.MapOptions{
			// Pin the map to the BPF filesystem and configure the
			// library to automatically re-write it in the BPF program,
			// so it can be re-used if it already exists or
			// create it if not.
			PinPath: pinPath,
		},
	}
	err = bpfSpec.LoadAndAssign(&objs, ebpfCollection)
	if err != nil {
		log.Fatalf("loading objects failed: %s", err)
	}

	return objs
}

func readCidrsFromConf(maskLen, val int) ([]IP4Key, []uint8) {
	data, err := os.ReadFile("./conf/cidr.json")
	if err != nil {
		log.Fatalf("failed to read cidrs from conf")
	}

	var c CIDRs
	err = json.Unmarshal(data, &c)
	if err != nil {
		log.Fatalf("failed to unmarshal cidrs from conf")
	}

	cidrs := append(c.Subnets, c.Hosts...)
	cidrs = append(cidrs, c.Host223[maskLen])
	keys := make([]IP4Key, 0, len(cidrs))
	values := make([]uint8, 0, len(cidrs))
	for _, cidr := range cidrs {
		if !strings.Contains(cidr, "/") {
			cidr += "/32"
		}
		ip, ipnet, err := net.ParseCIDR(cidr)
		if err != nil {
			log.Printf("wrong format cidr: %s, %v \n", cidr, err)
			continue
		}

		// populate key and value slices for BatchUpdate
		ip4Key4 := newIP4Key(ip, ipnet.Mask)
		keys = append(keys, ip4Key4)
		values = append(values, uint8(val))
	}

	return keys, values
}
