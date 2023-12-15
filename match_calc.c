#include<stdio.h>
#include<stdlib.h>
#include"settings.h"
void print_help(){
	fputs(MESSAGE_HELP,stdout);
}
void run_command_processor(){
	print_help();
}
int _tmain(const int argc,const _tchar*const*const args,const _tchar*const*const env){
	run_command_processor();
	return EXIT_SUCCESS;
}