#include <exec.h>
#include <state.h>
#include <sim.h>
#include <vmem.h>
#include <log.h>
#include <watchpoint.h>
static bool g_print_step;

static void exec_once()
{
	top->io_instr = vaddr_ifetch((unsigned int)top->io_pc_addr, 4);
	step_and_dump_wave();
	if(check_wp())
		state = NEMU_STOP;
}

void exec(uint64_t n)
{
	g_print_step = (n < MAX_INST_TO_PRINT);
	switch (state){
		case NEMU_END: case NEMU_ABORT:
			Log("Program execution has ended.\n");
			return ;
		break;
		default: state = NEMU_RUNNING;
	}

	for(;n > 0;n--){
		exec_once();
		if(state != NEMU_RUNNING) break;
	}
}