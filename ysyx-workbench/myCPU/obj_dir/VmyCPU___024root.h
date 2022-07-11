// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmyCPU.h for the primary calling header

#ifndef VERILATED_VMYCPU___024ROOT_H_
#define VERILATED_VMYCPU___024ROOT_H_  // guard

#include "verilated.h"

class VmyCPU__Syms;
class VmyCPU___024unit;

VL_MODULE(VmyCPU___024root) {
  public:
    // CELLS
    VmyCPU___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_wen,0,0);
    CData/*0:0*/ myCPU__DOT__regFile_io_wen;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_instr,31,0);
    IData/*31:0*/ myCPU__DOT__imm_tmp;
    VlWide<3>/*78:0*/ myCPU__DOT___src1_T_8;
    VlWide<3>/*78:0*/ myCPU__DOT___GEN_62;
    IData/*31:0*/ myCPU__DOT___GEN_61;
    IData/*31:0*/ myCPU__DOT___GEN_66;
    IData/*31:0*/ myCPU__DOT___GEN_71;
    VL_OUT64(io_dat_addr,63,0);
    VL_OUT64(io_pc_addr,63,0);
    VL_OUT64(io_wdata,63,0);
    VL_IN64(io_rdata,63,0);
    VL_OUT64(io_pc_debug,63,0);
    QData/*63:0*/ myCPU__DOT__regFile_io_wdata;
    QData/*63:0*/ myCPU__DOT__regFile_io_rdata_0;
    QData/*63:0*/ myCPU__DOT__pc;
    QData/*63:0*/ myCPU__DOT___pc_T_1;
    QData/*53:0*/ myCPU__DOT___GEN_63;
    QData/*63:0*/ myCPU__DOT___src2_T_8;
    QData/*63:0*/ myCPU__DOT__src2;
    QData/*63:0*/ myCPU__DOT___pc_remote_T_3;
    QData/*63:0*/ myCPU__DOT___GEN_46;
    QData/*63:0*/ myCPU__DOT__dest;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_0;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_1;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_2;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_3;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_4;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_5;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_6;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_7;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_8;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_9;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_10;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_11;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_12;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_13;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_14;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_15;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_16;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_17;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_18;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_19;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_20;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_21;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_22;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_23;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_24;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_25;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_26;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_27;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_28;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_29;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_30;
    QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_31;
    QData/*63:0*/ myCPU__DOT__regFile__DOT___GEN_77;
    QData/*63:0*/ myCPU__DOT__regFile__DOT___GEN_90;
    QData/*63:0*/ myCPU__DOT__regFile__DOT___GEN_110;
    QData/*63:0*/ myCPU__DOT__regFile__DOT___GEN_123;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VmyCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmyCPU___024root(VmyCPU__Syms* symsp, const char* name);
    ~VmyCPU___024root();
    VL_UNCOPYABLE(VmyCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
