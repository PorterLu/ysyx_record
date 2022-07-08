#include <state.h>
#include <stdint.h>

nemu_state state;
static bool is_good = true;

void set_bad(){
	is_good = false;
}

bool status(){
	return  is_good;
}