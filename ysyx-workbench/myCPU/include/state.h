#ifndef __STATE_H__
#define __STATE_H__

#include <common.h>
typedef uint32_t nemu_state;
extern nemu_state state;

enum {NEMU_RUNNING, NEMU_STOP, NEMU_ABORT, NEMU_END, NEMU_QUIT};

void set_bad();
bool status();

#endif