// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMYCPU__DPI_H_
#define VERILATED_VMYCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/ebreak.v:1:30
    extern void halt();
    // DPI import at /home/porterlu/ysyx-workbench/myCPU/vsrc/gpr_ptr.v:1:30
    extern void set_gpr_ptr(const svLogicVecVal* regfile_0, const svLogicVecVal* regfile_1, const svLogicVecVal* regfile_2, const svLogicVecVal* regfile_3, const svLogicVecVal* regfile_4, const svLogicVecVal* regfile_5, const svLogicVecVal* regfile_6, const svLogicVecVal* regfile_7, const svLogicVecVal* regfile_8, const svLogicVecVal* regfile_9, const svLogicVecVal* regfile_10, const svLogicVecVal* regfile_11, const svLogicVecVal* regfile_12, const svLogicVecVal* regfile_13, const svLogicVecVal* regfile_14, const svLogicVecVal* regfile_15, const svLogicVecVal* regfile_16, const svLogicVecVal* regfile_17, const svLogicVecVal* regfile_18, const svLogicVecVal* regfile_19, const svLogicVecVal* regfile_20, const svLogicVecVal* regfile_21, const svLogicVecVal* regfile_22, const svLogicVecVal* regfile_23, const svLogicVecVal* regfile_24, const svLogicVecVal* regfile_25, const svLogicVecVal* regfile_26, const svLogicVecVal* regfile_27, const svLogicVecVal* regfile_28, const svLogicVecVal* regfile_29, const svLogicVecVal* regfile_30, const svLogicVecVal* regfile_31);

#ifdef __cplusplus
}
#endif

#endif  // guard
