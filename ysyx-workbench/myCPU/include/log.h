#ifndef __LOG_H__
#define __LOG_H__
#include <cstdio>
#include <debug.h>

extern char *log_file ;
extern FILE *log_fp ;

void init_log(char *log_file);

#define log_write(...) do{ \
		extern FILE* log_fp;   \
		fprintf(log_fp, __VA_ARGS__ );\
		fflush(log_fp); \
	}while(0);


#define _Log(...)\
	do{	\
		printf(__VA_ARGS__);\
		log_write(__VA_ARGS__); \
	}while(0);

#define Log(format, ...)\
	_Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE)"\n",\
	 __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#endif