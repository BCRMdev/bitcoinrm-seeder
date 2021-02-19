// Comment out to disable debugging. Setting DEBUG to 0 will not disable debugging
//#define DEBUG 1

#define MY_PROTOCOL_VERSION 94000
#define MY_REQUIRE_VERSION 94000

// pchMessageStart[4] values for MAINNET
#define MAINNET_MAGIC0 0x42
#define MAINNET_MAGIC1 0x43
#define MAINNET_MAGIC2 0x52
#define MAINNET_MAGIC3 0x4d

// pchMessageStart[4] values for TESTNET
#define TESTNET_MAGIC0 0x43
#define TESTNET_MAGIC1 0x44
#define TESTNET_MAGIC2 0x53
#define TESTNET_MAGIC3 0x4e

// Ports
#define MAINNET 2094
#define TESTNET 3094

// Minumum block height required for a node to be considered good
// We premine 20 blocks
#define MAIN_MINHEIGHT 20
#define TEST_MINHEIGHT 20

#define PROGNAME "BitcoinRM-seeder"
#define VERNAME "/bitcoinrm-seeder:0.02/"

// Add actual hostnames of IPs of nodes running the coin daemon
// Minimum 2 nodes recommended. Otherwise, seeder will wait till it discovers at least 2 nodes
// Last entry must be ""
// If no seeds specified here, the seeder will search Internet and then give results if it finds any nodes
// If you specify seeds here, the seeder will use these seeds and then search Internet
// Therefore, you should specify at least 2 nodes for each of mainnet and testnet

#define MAINNET_SEEDS {"node1.bitcoinrm.org", "node2.bitcoinrm.org", "node3.bitcoinrm.org", "node4.bitcoinrm.org", "node5.bitcoinrm.org", "node6.bitcoinrm.org", "node7.bitcoinrm.org", "node8.bitcoinrm.org", "node9.bitcoinrm.org", "node10.bitcoinrm.org", ""}

#define TESTNET_SEEDS {"node-test1.bitcoinrm.org", "node-test2.bitcoinrm.org", ""}
