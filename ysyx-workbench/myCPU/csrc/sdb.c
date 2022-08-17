#include <readline/readline.h>
#include <readline/history.h>
#include <sdb.h>
#include <state.h>
#include <cstdlib>
#include <utils.h>
#include <common.h>
#include <log.h>
#include <exec.h>
#include <utils.h>
#include <cstring>
#include <reg.h>
#include <expr.h>
#include <vmem.h>
#include <watchpoint.h>
#include <elftl.h>

static bool is_batch_mode = false;

static char* rl_gets()
{
	static char* line_read = NULL;

	if(line_read)
	{
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("(nemu) ");

	if(line_read && *line_read)
	{
		add_history(line_read);
	}

	return line_read;
}


static int cmd_help(char *args);
static int cmd_c(char *args){
	exec(-1);
	return 0;
}

static int cmd_q(char *args){
	state = NEMU_QUIT;
	return 0;

}

static int cmd_si(char *args){
	char* arg = strtok(NULL, " ");
	uint64_t n;

	if(arg != NULL){
		sscanf(arg, "%ld", &n);
		exec(n);
	}else{
		exec(1);
	}
	return 0;
}

static int cmd_info(char *args){
	char *arg = strtok(NULL, " ");
	if(strcmp(arg, "r") == 0)
		reg_display();
	if(strcmp(arg, "w") == 0)
		print_wp();
	return 0;
}

static int cmd_x(char *args){
	int n;
	uint64_t i;
	vaddr_t addr_n;
	bool success = true;
	char *num = strtok(NULL, " ");
	char *addr = strtok(NULL, " ");
	if(num == NULL || addr == NULL){
		printf(ANSI_FMT("FORMAT: x n addr\n", ANSI_FG_BLUE));
		return 0;
	}

	sscanf(num, "%d", &n);
	addr_n = expr(addr, &success);

	if(success != false)
	{
		for(i = 0; i < n*4; i++)
		{
			if(i%4 == 0)
				printf("%016lx: ", addr_n + i);
			printf("%02lx ", vaddr_read(addr_n + i, 1));
			if(i%4 == 3)
				printf("\n");
		}
	}
	return 0;
}

static int cmd_p(char *args){
	char *expression = strtok(NULL, " ");
	bool success = true;
	uint64_t value = expr(expression, &success);
	printf("%s = 0x%lx\n", expression, value);
	return 0;
}

static int cmd_w(char *args){
	char *expression = strtok(NULL, " ");
	new_wp(expression);
	return 0;
}

static int cmd_d(char *args){
	char *num = strtok(NULL, " ");
	int NO;
	sscanf(num, "%d", &NO);
	free_wp(NO);
	return 0;
}

static int cmd_ft(char *args){
	print_ftrace();
	return 0;
}


static struct {
	const char *name;
	const char *description;
	int (*handler)(char *);
}cmd_table [] = {
	{"help", "Display informations about all supported commands", cmd_help},
	{ "c" , "Continue the execution of the program", cmd_c},
	{ "q", "Exit NEMU", cmd_q},
	{ "si", "Single step", cmd_si},
	{ "info", "information of register and watchpoint", cmd_info},
	{ "x", "scan memory", cmd_x},
	{ "p", "calculate the value", cmd_p},
	{ "w", "set watchpoint", cmd_w},
	{ "d", "delete watchpoint", cmd_d},
	{ "ft", "ftrace",cmd_ft}
};

#define NR_CMD sizeof(cmd_table)/sizeof(cmd_table[0])

void set_batch_mode(){
	is_batch_mode = true;
}

static int cmd_help(char *args){
	char *arg = strtok(NULL, " ");
	int i;

	if(arg == NULL){
		for(i = 0; i < NR_CMD; i++){
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}else{
		for(i = 0; i < NR_CMD; i++){
			if(strcmp(arg, cmd_table[i].name) == 0)
			{
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}

void sdbloop()
{	
	set_batch_mode();
	if(is_batch_mode){
		cmd_c(NULL);
		return ;
	}

	for(char *str; ((str = rl_gets()) != NULL); ){
		char *str_end = str + strlen(str);

		//comand is the first word of the string
		char *cmd = strtok(str, " ");

		if(cmd == NULL) { continue; }

		char *args = cmd + strlen(cmd) + 1;
		if(args >= str_end){
			args = NULL;
		}

		int i;
		for(i = 0; i < NR_CMD; i++){
			if(strcmp(cmd, cmd_table[i].name) ==0){
				if(cmd_table[i].handler(args) < 0) { return; }
				break;
			}

			if(i == NR_CMD) { Log("Unknown command '%s'\n", cmd);}
		}

		switch(state){
			case NEMU_QUIT:
				return;
		}
	}
}