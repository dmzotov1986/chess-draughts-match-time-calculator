#include<stdio.h>
#include<stdlib.h>
void print_help(){
	printf("It's program for calculating many different parameters of chess/draughts match time: p - maximum match (of given count of moves played) time for both players (in minutes), t - maximum time for match given to only one player (in minutes), n - number of moves played in match by one winner player, v - time in seconds of same by duration move of one winner player for somewhat ideal situation when players play moves exactly after certain period of time elapses, m - time in minutes given for each player not including addings for each completed move, s - seconds which added for each completed move. Parameters allowed to be a real decimal values not only integers. Type commands and hit enter: not legal recognized command - for exit from program");
}
void run_command_processor(){}
int main(int argc,char**args,char**env){
	print_help();
	run_command_processor();
	return EXIT_SUCCESS;
}