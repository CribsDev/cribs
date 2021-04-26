

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *cribs_strings[] = {
QT_TRANSLATE_NOOP("cribs-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("cribs-core", " mints updated, "),
QT_TRANSLATE_NOOP("cribs-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("cribs-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Accept connections from outside (default: 1 if no -proxy or -connect/-"
"noconnect)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Cannot obtain a lock on data directory %s. CRIBS Core is probably already "
"running."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Connect only to the specified node(s); -noconnect or -connect=0 alone to "
"disable automatic connections"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Disable all CRIBS specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Do not accept transactions if any ancestor would have <n> or more in-mempool "
"descendants (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Do not accept transactions if any ancestor would have more than <n> "
"kilobytes of in-mempool descendants (default: %u)."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Do not accept transactions if number of in-mempool ancestors is <n> or more "
"(default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Do not accept transactions whose size with all in-mempool ancestors exceeds "
"<n> kilobytes (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Enable cold staking functionality (0-1, default: %u). Disabled if staking=0"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Fees (in %s/Kb) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Fees (in %s/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("cribs-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Maximum average size of an index occurrence in the block spam filter "
"(default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Maximum size of the list of indexes in the block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Minimum positive amount (in CRIB) allowed by GUI and RPC for the stake split "
"threshold (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong CRIBS Core will not work properly."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect/-noconnect)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Specify location of debug log file: this can be an absolute path or a path "
"relative to the data directory (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("cribs-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("cribs-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("cribs-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Unable to bind to %s on this computer. CRIBS Core is probably already running."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"WARNING: The transaction has been signed and recorded, so the wallet will "
"try to re-send it. Use 'abandontransaction' to cancel it. (txid: %s)"),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong CRIBS Core will not work properly."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("cribs-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("cribs-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("cribs-core", "(default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "(default: 1)"),
QT_TRANSLATE_NOOP("cribs-core", "(must be %d for %s-net)"),
QT_TRANSLATE_NOOP("cribs-core", "<category> can be:"),
QT_TRANSLATE_NOOP("cribs-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("cribs-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Active Masternode not initialized."),
QT_TRANSLATE_NOOP("cribs-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("cribs-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("cribs-core", "Allows deprecated RPC method(s) to be used"),
QT_TRANSLATE_NOOP("cribs-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("cribs-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("cribs-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("cribs-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "Block creation options:"),
QT_TRANSLATE_NOOP("cribs-core", "Can't generate a change-address key. Please call keypoolrefill first."),
QT_TRANSLATE_NOOP("cribs-core", "Cannot create public spend input"),
QT_TRANSLATE_NOOP("cribs-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("cribs-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "Cannot upgrade to HD wallet (already running HD support). Version: %d"),
QT_TRANSLATE_NOOP("cribs-core", "Change index out of range"),
QT_TRANSLATE_NOOP("cribs-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("cribs-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("cribs-core", "Connection options:"),
QT_TRANSLATE_NOOP("cribs-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("cribs-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("cribs-core", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("cribs-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("cribs-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("cribs-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("cribs-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("cribs-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("cribs-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("cribs-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("cribs-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("cribs-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("cribs-core", "Done loading"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("cribs-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("cribs-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("cribs-core", "Error loading block database"),
QT_TRANSLATE_NOOP("cribs-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("cribs-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("cribs-core", "Error loading wallet.dat: Wallet requires newer version of CRIBS Core"),
QT_TRANSLATE_NOOP("cribs-core", "Error opening block database"),
QT_TRANSLATE_NOOP("cribs-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("cribs-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("cribs-core", "Error"),
QT_TRANSLATE_NOOP("cribs-core", "Error: "),
QT_TRANSLATE_NOOP("cribs-core", "Error: -listen must be true if -masternode is set."),
QT_TRANSLATE_NOOP("cribs-core", "Error: -maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("cribs-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("cribs-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("cribs-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("cribs-core", "Error: Invalid port %d for running a masternode."),
QT_TRANSLATE_NOOP("cribs-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("cribs-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("cribs-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to accept tx in the memory pool (reason: %s)\n"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("cribs-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to parse public spend"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("cribs-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("cribs-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("cribs-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("cribs-core", "Importing..."),
QT_TRANSLATE_NOOP("cribs-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("cribs-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("cribs-core", "Information"),
QT_TRANSLATE_NOOP("cribs-core", "Initialization sanity check failed. CRIBS Core is shutting down."),
QT_TRANSLATE_NOOP("cribs-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("cribs-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("cribs-core", "Invalid -masternodeaddr address: %s"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid -masternodeaddr port %d, only %d is supported on %s-net."),
QT_TRANSLATE_NOOP("cribs-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid amount"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("cribs-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid port %d detected in masternode.conf"),
QT_TRANSLATE_NOOP("cribs-core", "Invalid status error."),
QT_TRANSLATE_NOOP("cribs-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Keypool ran out, please call keypoolrefill first, or unlock the wallet."),
QT_TRANSLATE_NOOP("cribs-core", "Limit size of signature cache to <n> MiB (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Line: %d"),
QT_TRANSLATE_NOOP("cribs-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading block index..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("cribs-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("cribs-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("cribs-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("cribs-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Masternode options:"),
QT_TRANSLATE_NOOP("cribs-core", "Masternodes are required to run on port %d for %s-net"),
QT_TRANSLATE_NOOP("cribs-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("cribs-core", "Need destination or change address because change is not exact"),
QT_TRANSLATE_NOOP("cribs-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "No error"),
QT_TRANSLATE_NOOP("cribs-core", "Node relay options:"),
QT_TRANSLATE_NOOP("cribs-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("cribs-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("cribs-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "On first run, create a legacy wallet instead of a HD wallet"),
QT_TRANSLATE_NOOP("cribs-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("cribs-core", "Options:"),
QT_TRANSLATE_NOOP("cribs-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("cribs-core", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("cribs-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("cribs-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Print version and exit"),
QT_TRANSLATE_NOOP("cribs-core", "Pubcoin not found in mint tx"),
QT_TRANSLATE_NOOP("cribs-core", "RPC server options:"),
QT_TRANSLATE_NOOP("cribs-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("cribs-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("cribs-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("cribs-core", "Recalculating CRIB supply..."),
QT_TRANSLATE_NOOP("cribs-core", "Reindex the %s and z%s money supply statistics"),
QT_TRANSLATE_NOOP("cribs-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("cribs-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("cribs-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("cribs-core", "Rescanning..."),
QT_TRANSLATE_NOOP("cribs-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("cribs-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("cribs-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("cribs-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("cribs-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("cribs-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("cribs-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("cribs-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("cribs-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("cribs-core", "Specify data directory"),
QT_TRANSLATE_NOOP("cribs-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("cribs-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("cribs-core", "Spend Valid"),
QT_TRANSLATE_NOOP("cribs-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Staking options:"),
QT_TRANSLATE_NOOP("cribs-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("cribs-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("cribs-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("cribs-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("cribs-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("cribs-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("cribs-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("cribs-core", "Syncing zCRIB wallet..."),
QT_TRANSLATE_NOOP("cribs-core", "The threshold value cannot be less than %s"),
QT_TRANSLATE_NOOP("cribs-core", "This help message"),
QT_TRANSLATE_NOOP("cribs-core", "This is experimental software."),
QT_TRANSLATE_NOOP("cribs-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("cribs-core", "This is not a masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("cribs-core", "This is not a masternode."),
QT_TRANSLATE_NOOP("cribs-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("cribs-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("cribs-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction Created"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction canceled."),
QT_TRANSLATE_NOOP("cribs-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("cribs-core", "Transaction too large"),
QT_TRANSLATE_NOOP("cribs-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("cribs-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to find transaction containing mint %s"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to find transaction containing mint, txHash: %s"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to generate initial key"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("cribs-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("cribs-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("cribs-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("cribs-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("cribs-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Use block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("cribs-core", "Use the test network"),
QT_TRANSLATE_NOOP("cribs-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("cribs-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("cribs-core", "Value is below the smallest available denomination (= 1) of zCRIB"),
QT_TRANSLATE_NOOP("cribs-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("cribs-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("cribs-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("cribs-core", "Wallet needed to be rewritten: restart CRIBS Core to complete"),
QT_TRANSLATE_NOOP("cribs-core", "Wallet options:"),
QT_TRANSLATE_NOOP("cribs-core", "Wallet window title"),
QT_TRANSLATE_NOOP("cribs-core", "Warning"),
QT_TRANSLATE_NOOP("cribs-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("cribs-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("cribs-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("cribs-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("cribs-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("cribs-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("cribs-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("cribs-core", "Zerocoin minting available only on regtest"),
QT_TRANSLATE_NOOP("cribs-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("cribs-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("cribs-core", "on startup"),
QT_TRANSLATE_NOOP("cribs-core", "wallet.dat corrupt, salvage failed"),
};
