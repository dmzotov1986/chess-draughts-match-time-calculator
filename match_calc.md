# match_calc
Calculator for match time with base time and addings for done moves for chess and draughts.
## Help message produced by this program in response to `help` user entered command
>It's a program for calculating many different parameters of chess/draughts match time: `p` - maximum match (of given count of moves played) time for both players (in minutes), `t` - maximum time for match given to only one player (in minutes), `n` - number of moves played in match by one winner player, `v` - time in seconds of same by duration move of one winner player for somewhat ideal situation when players play moves exactly after certain period of time elapses, `m` - time in minutes given for each player not including addings for each completed move, `s` - seconds which added for each completed move. Parameters allowed to be real decimal values not only integers. Type commands and hit <kbd>Enter</kbd> (not legal recognized command - for exit from program): `help` - repeat this help message, parameter name (`p`, `t`, `n`, `v`, `m`, `s`) - recalculate named parameter from values of other parameters, parameter name followed by `=` and value (decimal, real or integer) - reset this parameter to this new value. Examples: `p`<kbd>Enter</kbd>, `v=15`<kbd>Enter</kbd>, `help`<kbd>Enter</kbd>, <kbd>Enter</kbd>.
## Commands in terminal shell inside this directory (for POSIX, Clang, Make)
### Building
```shell
make match_calc
```
### Running if successfully builded
```shell
./match_calc
```
