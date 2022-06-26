#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
#define NR_REG ((sizeof(regs))/(sizeof(regs[0])))

void isa_reg_display() {
    extern riscv64_CPU_state cpu;
    int i;
    printf("now pc is %lx\n",cpu.pc);
    for(i = 0; i < NR_REG; i++)
    {
        printf("%4s:%-8lx",regs[i], cpu.gpr[i]);
        if(i%8 == 7)
          printf("\n");
    }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  for(i=0;i < NR_REG;i++)
  {
    if(!strcmp(s,regs[i]))
    {
      *success = true;
      return cpu.gpr[i];
    }
  }
  
  if(!strcmp(s, "pc"))
  { 
    *success = true;
    return cpu.pc;
  }

  *success = false;
  return 0;
}