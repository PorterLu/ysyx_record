#ifndef __REG_H__
#define __REG_H__
#include <stdint.h>
#include <common.h>
#include "svdpi.h"
#include "verilated_dpi.h"

#define Reg(i) (* ((uint64_t *)(reg ## i)))

typedef struct {
	word_t gpr[32];
	vaddr_t pc;
} CPU_state;

typedef struct {
	union{
		uint32_t val;
	} inst;
} DecodeInfo;

extern CPU_state cpu;
extern const char *regs[];

extern "C" void set_gpr_ptr(const svLogicVecVal* reg0, const svLogicVecVal* reg1,const svLogicVecVal* reg2,const svLogicVecVal* reg3,const svLogicVecVal* reg4,const svLogicVecVal* reg5,const svLogicVecVal* reg6,const svLogicVecVal* reg7,const svLogicVecVal* reg8,const svLogicVecVal* reg9,const svLogicVecVal* reg10,const svLogicVecVal* reg11,const svLogicVecVal* reg12,const svLogicVecVal*reg13,const svLogicVecVal* reg14,const svLogicVecVal* reg15,const svLogicVecVal* reg16,const svLogicVecVal* reg17,const svLogicVecVal* reg18,const svLogicVecVal* reg19,const svLogicVecVal* reg20,const svLogicVecVal* reg21,const svLogicVecVal* reg22,const svLogicVecVal* reg23,const svLogicVecVal*reg24,const svLogicVecVal*reg25,const svLogicVecVal*reg26,const svLogicVecVal* reg27, const svLogicVecVal* reg28, const svLogicVecVal* reg29, const svLogicVecVal* reg30, const svLogicVecVal* reg31);
void dump_gpr();
void reg_display();
word_t reg_str2val(const char *s, bool *success);

#endif
