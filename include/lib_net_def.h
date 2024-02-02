#ifndef __LIB_NET_DEF_H__
#define __LIB_NET_DEF_H__

/*
 *	IEEE 802.3 Ethernet magic constants.  The frame sizes omit the preamble
 *	and FCS/CRC (frame check sequence).
 */

#define ETH_ALEN 6 /* Octets in one ethernet addr	 */
#define ETH_TLEN 2 /* Octets in ethernet type field */
#define ETH_HLEN 14 /* Total octets in header.	 */
#define ETH_ZLEN 60 /* Min. octets in frame sans FCS */
#define ETH_DATA_LEN 1500 /* Max. octets in payload	 */
#define ETH_FRAME_LEN 1514 /* Max. octets in frame sans FCS */
#define ETH_FCS_LEN 4 /* Octets in the FCS		 */

#define ETH_MIN_MTU 68 /* Min IPv4 MTU per RFC791	*/
#define ETH_MAX_MTU 0xFFFFU /* 65535, same as IP_MAX_MTU	*/

/*
 *	These are the defined Ethernet Protocol ID's.
 */

#define ETH_P_LOOP 0x0060 /* Ethernet Loopback packet	*/
#define ETH_P_PUP 0x0200 /* Xerox PUP packet		*/
#define ETH_P_PUPAT 0x0201 /* Xerox PUP Addr Trans packet	*/
#define ETH_P_TSN 0x22F0 /* TSN (IEEE 1722) packet	*/
#define ETH_P_ERSPAN2 0x22EB /* ERSPAN version 2 (type III)	*/
#define ETH_P_IP 0x0800 /* Internet Protocol packet	*/
#define ETH_P_X25 0x0805 /* CCITT X.25			*/
#define ETH_P_ARP 0x0806 /* Address Resolution packet	*/
#define ETH_P_BPQ 0x08FF /* G8BPQ AX.25 Ethernet Packet	[ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_IEEEPUP 0x0a00 /* Xerox IEEE802.3 PUP packet */
#define ETH_P_IEEEPUPAT 0x0a01 /* Xerox IEEE802.3 PUP Addr Trans packet */
#define ETH_P_BATMAN 0x4305 /* B.A.T.M.A.N.-Advanced packet [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_DEC 0x6000 /* DEC Assigned proto           */
#define ETH_P_DNA_DL 0x6001 /* DEC DNA Dump/Load            */
#define ETH_P_DNA_RC 0x6002 /* DEC DNA Remote Console       */
#define ETH_P_DNA_RT 0x6003 /* DEC DNA Routing              */
#define ETH_P_LAT 0x6004 /* DEC LAT                      */
#define ETH_P_DIAG 0x6005 /* DEC Diagnostics              */
#define ETH_P_CUST 0x6006 /* DEC Customer use             */
#define ETH_P_SCA 0x6007 /* DEC Systems Comms Arch       */
#define ETH_P_TEB 0x6558 /* Trans Ether Bridging		*/
#define ETH_P_RARP 0x8035 /* Reverse Addr Res packet	*/
#define ETH_P_ATALK 0x809B /* Appletalk DDP		*/
#define ETH_P_AARP 0x80F3 /* Appletalk AARP		*/
#define ETH_P_8021Q 0x8100 /* 802.1Q VLAN Extended Header  */
#define ETH_P_ERSPAN 0x88BE /* ERSPAN type II		*/
#define ETH_P_IPX 0x8137 /* IPX over DIX			*/
#define ETH_P_IPV6 0x86DD /* IPv6 over bluebook		*/
#define ETH_P_PAUSE 0x8808 /* IEEE Pause frames. See 802.3 31B */
#define ETH_P_SLOW 0x8809 /* Slow Protocol. See 802.3ad 43B */
#define ETH_P_WCCP 0x883E /* Web-cache coordination protocol \
                           * defined in draft-wilson-wrec-wccp-v2-00.txt */
#define ETH_P_MPLS_UC 0x8847 /* MPLS Unicast traffic		*/
#define ETH_P_MPLS_MC 0x8848 /* MPLS Multicast traffic	*/
#define ETH_P_ATMMPOA 0x884c /* MultiProtocol Over ATM	*/
#define ETH_P_PPP_DISC 0x8863 /* PPPoE discovery messages     */
#define ETH_P_PPP_SES 0x8864 /* PPPoE session messages	*/
#define ETH_P_LINK_CTL 0x886c /* HPNA, wlan link local tunnel */
#define ETH_P_ATMFATE 0x8884 /* Frame-based ATM Transport \
                              * over Ethernet             \
                              */
#define ETH_P_PAE 0x888E /* Port Access Entity (IEEE 802.1X) */
#define ETH_P_AOE 0x88A2 /* ATA over Ethernet		*/
#define ETH_P_8021AD 0x88A8 /* 802.1ad Service VLAN		*/
#define ETH_P_802_EX1 0x88B5 /* 802.1 Local Experimental 1.  */
#define ETH_P_PREAUTH 0x88C7 /* 802.11 Preauthentication */
#define ETH_P_TIPC 0x88CA /* TIPC 			*/
#define ETH_P_LLDP 0x88CC /* Link Layer Discovery Protocol */
#define ETH_P_MRP 0x88E3 /* Media Redundancy Protocol	*/
#define ETH_P_MACSEC 0x88E5 /* 802.1ae MACsec */
#define ETH_P_8021AH 0x88E7 /* 802.1ah Backbone Service Tag */
#define ETH_P_MVRP 0x88F5 /* 802.1Q MVRP                  */
#define ETH_P_1588 0x88F7 /* IEEE 1588 Timesync */
#define ETH_P_NCSI 0x88F8 /* NCSI protocol		*/
#define ETH_P_PRP 0x88FB /* IEC 62439-3 PRP/HSRv0	*/
#define ETH_P_CFM 0x8902 /* Connectivity Fault Management */
#define ETH_P_FCOE 0x8906 /* Fibre Channel over Ethernet  */
#define ETH_P_IBOE 0x8915 /* Infiniband over Ethernet	*/
#define ETH_P_TDLS 0x890D /* TDLS */
#define ETH_P_FIP 0x8914 /* FCoE Initialization Protocol */
#define ETH_P_80221 0x8917 /* IEEE 802.21 Media Independent Handover Protocol */
#define ETH_P_HSR 0x892F /* IEC 62439-3 HSRv1	*/
#define ETH_P_NSH 0x894F /* Network Service Header */
#define ETH_P_LOOPBACK 0x9000 /* Ethernet loopback packet, per IEEE 802.3 */
#define ETH_P_QINQ1 0x9100 /* deprecated QinQ VLAN [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_QINQ2 0x9200 /* deprecated QinQ VLAN [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_QINQ3 0x9300 /* deprecated QinQ VLAN [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_EDSA 0xDADA /* Ethertype DSA [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_DSA_8021Q 0xDADB /* Fake VLAN Header for DSA [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_IFE 0xED3E /* ForCES inter-FE LFB type */
#define ETH_P_AF_IUCV 0xFBFB /* IBM af_iucv [ NOT AN OFFICIALLY REGISTERED ID ] */

#define ETH_P_802_3_MIN 0x0600 /* If the value in the ethernet type is less than this value \
                                * then the frame is Ethernet II. Else it is 802.3 */

/* Supported address families. */
#define AF_UNSPEC 0
#define AF_UNIX 1 /* Unix domain sockets 		*/
#define AF_LOCAL 1 /* POSIX name for AF_UNIX	*/
#define AF_INET 2 /* Internet IP Protocol 	*/
#define AF_AX25 3 /* Amateur Radio AX.25 		*/
#define AF_IPX 4 /* Novell IPX 			*/
#define AF_APPLETALK 5 /* AppleTalk DDP 		*/
#define AF_NETROM 6 /* Amateur Radio NET/ROM 	*/
#define AF_BRIDGE 7 /* Multiprotocol bridge 	*/
#define AF_ATMPVC 8 /* ATM PVCs			*/
#define AF_X25 9 /* Reserved for X.25 project 	*/
#define AF_INET6 10 /* IP version 6			*/
#define AF_ROSE 11 /* Amateur Radio X.25 PLP	*/
#define AF_DECnet 12 /* Reserved for DECnet project	*/
#define AF_NETBEUI 13 /* Reserved for 802.2LLC project*/
#define AF_SECURITY 14 /* Security callback pseudo AF */
#define AF_KEY 15 /* PF_KEY key management API */
#define AF_NETLINK 16
#define AF_ROUTE AF_NETLINK /* Alias to emulate 4.4BSD */
#define AF_PACKET 17 /* Packet family		*/
#define AF_ASH 18 /* Ash				*/
#define AF_ECONET 19 /* Acorn Econet			*/
#define AF_ATMSVC 20 /* ATM SVCs			*/
#define AF_RDS 21 /* RDS sockets 			*/
#define AF_SNA 22 /* Linux SNA Project (nutters!) */
#define AF_IRDA 23 /* IRDA sockets			*/
#define AF_PPPOX 24 /* PPPoX sockets		*/
#define AF_WANPIPE 25 /* Wanpipe API Sockets */
#define AF_LLC 26 /* Linux LLC			*/
#define AF_IB 27 /* Native InfiniBand address	*/
#define AF_MPLS 28 /* MPLS */
#define AF_CAN 29 /* Controller Area Network      */
#define AF_TIPC 30 /* TIPC sockets			*/
#define AF_BLUETOOTH 31 /* Bluetooth sockets 		*/
#define AF_IUCV 32 /* IUCV sockets			*/
#define AF_RXRPC 33 /* RxRPC sockets 		*/
#define AF_ISDN 34 /* mISDN sockets 		*/
#define AF_PHONET 35 /* Phonet sockets		*/
#define AF_IEEE802154 36 /* IEEE802154 sockets		*/
#define AF_CAIF 37 /* CAIF sockets			*/
#define AF_ALG 38 /* Algorithm sockets		*/
#define AF_NFC 39 /* NFC sockets			*/
#define AF_VSOCK 40 /* vSockets			*/
#define AF_KCM 41 /* Kernel Connection Multiplexor*/
#define AF_QIPCRTR 42 /* Qualcomm IPC Router          */
#define AF_SMC 43 /* smc sockets: reserve number for \
                   * PF_SMC protocol family that     \
                   * reuses AF_INET address family   \
                   */
#define AF_XDP 44 /* XDP sockets			*/
#define AF_MCTP 45 /* Management component \
                    * transport protocol   \
                    */

/* Packet types */

#define PACKET_HOST 0 /* To us		*/
#define PACKET_BROADCAST 1 /* To all		*/
#define PACKET_MULTICAST 2 /* To group		*/
#define PACKET_OTHERHOST 3 /* To someone else 	*/
#define PACKET_OUTGOING 4 /* Outgoing of any type */
#define PACKET_LOOPBACK 5 /* MC/BRD frame looped back */
#define PACKET_USER 6 /* To user space	*/
#define PACKET_KERNEL 7 /* To kernel space	*/
/* Unused, PACKET_FASTROUTE and PACKET_LOOPBACK are invisible to user space */
#define PACKET_FASTROUTE 6 /* Fastrouted frame	*/

/* TC ACT */
#define TC_ACT_OK 0
#define TC_ACT_RECLASSIFY 1
#define TC_ACT_SHOT 2
#define TC_ACT_PIPE 3
#define TC_ACT_STOLEN 4
#define TC_ACT_QUEUED 5
#define TC_ACT_REPEAT 6
#define TC_ACT_REDIRECT 7
#define TC_ACT_TRAP 8

#endif