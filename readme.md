# chess-draughts-match-time-calculator
Calculator for match time with base time and addings for done moves for chess and draughts.
## Help message produced by this program in response to
```command
help
```
## user entered command
> It's a program for calculating many different parameters of chess/draughts match time: ```shell p``` - maximum match (of given count of moves played) time for both players (in minutes), ```shell t``` - maximum time for match given to only one player (in minutes), ```shell n``` - number of moves played in match by one winner player, ```shell v``` - time in seconds of same by duration move of one winner player for somewhat ideal situation when players play moves exactly after certain period of time elapses, ```shell m``` - time in minutes given for each player not including addings for each completed move, ```shell s``` - seconds which added for each completed move. Parameters allowed to be a real decimal values not only integers. Type commands and hit <kbd>Enter</kbd> (not legal recognized command - for exit from program): ```shell help``` - repeat this help message, parameter name (```shell p```, ```shell t```, ```shell n```, ```shell v```, ```shell m```, ```shell s```) - recalculate named parameter from values of others parameters, parameter name followed by ```shell =``` and value (decimal, real or integer) - reset this parameter to this new value. Examples: ```shell p```, ```shell v=15```, ```shell help```, ```shell ```.
## Commands in terminal shell inside this directory (for POSIX, Clang, Make)
### Building
```shell
make match_calc
```
### Running if successfully builded
```shell
./match_calc
```