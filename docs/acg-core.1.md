% acg-core(1)
% Stellar Development Foundation
%

# NAME

acg-core - Core daemon for Stellar payment network

# SYNOPSYS

acg-core [OPTIONS]

# DESCRIPTION

Stellar is a decentralized, federated peer-to-peer network that allows
people to send payments in any asset anywhere in the world
instantaneously, and with minimal fee. `Stellar-core` is the core
component of this network. `Stellar-core` is a C++ implementation of
the Stellar Consensus Protocol configured to construct a chain of
ledgers that are guaranteed to be in agreement across all the
participating nodes at all times.

## Configuration file

In most modes of operation, acg-core requires a configuration
file.  By default, it looks for a file called `acg-core.cfg` in
the current working directory, but this default can be changed by the
`--conf` command-line option.  The configuration file is in TOML
syntax.  The full set of supported directives can be found in
`%prefix%/share/doc/acg-core_example.cfg`.

%commands%

# EXAMPLES

See `%prefix%/share/doc/*.cfg` for some example acg-core
configuration files

# FILES

acg-core.cfg
:   Configuration file (in current working directory by default)

# SEE ALSO

<https://www.acg.org/developers/acg-core/software/admin.html>
:   acg-core administration guide

<https://www.acg.org>
:   Home page of Stellar development foundation

# BUGS

Please report bugs using the github issue tracker:\
<https://github.com/acg/acg-core/issues>
