# chess-draughts-match-time-calculator
Calculator for match time with base time and addings for done moves for chess and draughts.
## Help message produced by this program in response to
```command
help
```
user entered command
> It's a program for calculating many different parameters of chess/draughts match time: ```parameter p``` - maximum match (of given count of moves played) time for both players (in minutes), ```parameter t``` - maximum time for match given to only one player (in minutes), ```parameter n``` - number of moves played in match by one winner player, ```parameter v``` - time in seconds of same by duration move of one winner player for somewhat ideal situation when players play moves exactly after certain period of time elapses, ```parameter m``` - time in minutes given for each player not including addings for each completed move, ```parameter s``` - seconds which added for each completed move. Parameters allowed to be a real decimal values not only integers. Type commands and hit ```key Enter``` (not legal recognized command - for exit from program): ```command help``` - repeat this help message, parameter name (```parameter p```, ```parameter t```, ```parameter n```, ```parameter v```, ```parameter m```, ```parameter s```) - recalculate named parameter from values of others parameters, parameter name followed by ```command =``` and value (decimal, real or integer) - reset this parameter to this new value. Examples: ```command p```, ```command v=15```, ```command help```, ```command ```.
## Commands in terminal shell inside this directory (for POSIX)
### Building
```shell
make match_calc
```
### Running if successfully builded
```shell
./match_calc
```
## Commands for command prompt inside this directory (for Windows, not tested)
### Building
```cmd
make match_calc.exe
```
### Running if successfully builded
```cmd
match_calc
```