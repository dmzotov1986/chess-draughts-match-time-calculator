#include<stdio.h>
#include<stdlib.h>
#include"settings.h"
void print_help(void){
	fputs(HELP_MESSAGE,stdout);
}
void run_command_processor(void){
	print_help();
}
int main(void){
	run_command_processor();
	return EXIT_SUCCESS;
}