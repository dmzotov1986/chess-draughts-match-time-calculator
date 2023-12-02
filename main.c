#include<stdio.h>
#include<stdlib.h>
#include"settings.h"
void print_help(){
	fputs(MESSAGE_HELP,stdout);
}
void run_command_processor(){
	print_help();
}
int main(int argc,char**args,char**env){
	run_command_processor();
	return EXIT_SUCCESS;
}