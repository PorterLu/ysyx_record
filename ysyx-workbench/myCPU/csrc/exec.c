#include <exec.h>
#include <state.h>
#include <sim.h>
#include <vmem.h>
#include <log.h>
#include <watchpoint.h>
#include <reg.h>
#include <elftl.h>
#include <difftest.h>

//#include <disasm.h>
static bool g_print_step;
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);		 
char log_buf[128];
static uint64_t old_pc = 0x80000000;
static int first = 1;

static void exec_once()
{
	old_pc = top->io_pc_addr;
	top->io_instr = vaddr_ifetch((unsigned int)top->io_pc_addr, 4);

	int dest = (top->io_instr & 0xf80) >> 7;
	int src1 = (top->io_instr & 0xf8000) >> 15; 

	step_and_dump_wave();
	cpu.pc = top->io_pc_addr;
	
	if(((top->io_instr & 0x7f) == 0x06f) && (dest==1 || dest==5)) //jal指令，只要目的寄存器为1或者5就认为是call
		add_ftrace(top->io_pc_addr, true);
	
	if((((top->io_instr) & 0x7f) == 0x067) && (((top->io_instr) & 0x07000) == 0))	//jalr指令
	{
		if(dest == 0 && src1 == 1) 					//目的寄存器为0，源寄存器为1，则为return
			add_ftrace(top->io_pc_addr,false); 
		else if(dest==1 || dest ==5)				//目的寄存器为1或者5，则是call
			add_ftrace(top->io_pc_addr, true);
	}


	sprintf(log_buf, "%016lx:    ", old_pc);
	int i;
	for(i = 0; i < 4; i++)
		sprintf(log_buf + 21 + 3*i, "%02x ",*((uint8_t*) (&(top->io_instr)) + 3 - i));
	sprintf(log_buf + 33, "   ");
	disassemble(log_buf + 36, 70, old_pc , (uint8_t *)(&(top->io_instr)) , 4);
	printf("%s\n", log_buf);
	log_write("%s\n", log_buf);
	// p is the ouput array, the next is the remaining length of the array, the third

	difftest_step(cpu.pc, top->io_pc_addr);
}
 
void exec(uint64_t n)
{
	g_print_step = (n < MAX_INST_TO_PRINT);
	switch (state){
		case NEMU_END: case NEMU_ABORT:
			Log("Program execution has ended.\n");
			return ;
		default: state = NEMU_RUNNING;
	}

	for(;n > 0;n--){
		exec_once();
		if(check_wp())
			state = NEMU_STOP;
		if(state != NEMU_RUNNING) break;
	}

	switch(state){
		case NEMU_ABORT:
		 	if(status())
				printf(ANSI_FMT("HIT GOOG TRAP\n",ANSI_FG_GREEN));
			else
				printf(ANSI_FMT("HIT BAD TRAP\n",ANSI_FG_RED));
	}
}