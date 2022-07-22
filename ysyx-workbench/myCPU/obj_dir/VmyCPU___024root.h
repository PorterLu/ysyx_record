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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ myCPU__DOT__control_io_pc_sel;
        CData/*1:0*/ myCPU__DOT__control_io_wd_type;
        CData/*2:0*/ myCPU__DOT__control_io_imm_sel;
        CData/*2:0*/ myCPU__DOT__control_io_br_type;
        CData/*2:0*/ myCPU__DOT__control_io_st_type;
        CData/*2:0*/ myCPU__DOT__control_io_ld_type;
        CData/*1:0*/ myCPU__DOT__control_io_wb_sel;
        CData/*0:0*/ myCPU__DOT__brCond_io_taken;
        CData/*0:0*/ myCPU__DOT__regFile_io_wen;
        CData/*7:0*/ myCPU__DOT___st_mask_T_5;
        CData/*5:0*/ myCPU__DOT__alu__DOT__shamt;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_210;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_229;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_264;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_281;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_312;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_327;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_342;
        CData/*2:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_370;
        CData/*2:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_385;
        CData/*2:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_400;
        CData/*4:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_429;
        CData/*4:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_444;
        CData/*4:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_459;
        CData/*4:0*/ myCPU__DOT__control__DOT__ctrlSignals_5;
        CData/*2:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_586;
        CData/*2:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_649;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_665;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_680;
        CData/*1:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_695;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_740;
        CData/*0:0*/ myCPU__DOT__control__DOT___ctrlSignals_T_760;
        CData/*0:0*/ myCPU__DOT__brCond__DOT__eq;
        CData/*0:0*/ myCPU__DOT__brCond__DOT__lt;
        CData/*0:0*/ myCPU__DOT__brCond__DOT__ltu;
        CData/*0:0*/ __Vclklast__TOP__clock;
        IData/*31:0*/ myCPU__DOT__immGen_io_inst;
        IData/*31:0*/ myCPU__DOT__control_io_inst;
        IData/*31:0*/ myCPU__DOT__pc;
        IData/*31:0*/ myCPU__DOT__instr;
        VlWide<4>/*126:0*/ myCPU__DOT__alu__DOT___out_T_74;
        VlWide<4>/*127:0*/ myCPU__DOT__alu__DOT___out_T_84;
        VlWide<4>/*127:0*/ myCPU__DOT__alu__DOT___out_T_88;
        VL_OUT64(io_pc_debug,63,0);
        QData/*63:0*/ myCPU__DOT__alu_io_A;
        QData/*63:0*/ myCPU__DOT__alu_io_B;
        QData/*63:0*/ myCPU__DOT__alu_io_out;
        QData/*63:0*/ myCPU__DOT__regFile_io_wdata;
        QData/*63:0*/ myCPU__DOT__regFile_io_rdata_0;
        QData/*63:0*/ myCPU__DOT__regFile_io_rdata_1;
        QData/*63:0*/ myCPU__DOT__mem___05Fpc_data;
        QData/*63:0*/ myCPU__DOT__mem___05Frdata;
        QData/*63:0*/ myCPU__DOT__A_data;
        QData/*63:0*/ myCPU__DOT__B_data;
        QData/*63:0*/ myCPU__DOT__load_data;
        QData/*63:0*/ myCPU__DOT___GEN_0;
        QData/*43:0*/ myCPU__DOT__immGen__DOT__Iimm;
        QData/*52:0*/ myCPU__DOT__immGen__DOT__Jimm;
        QData/*43:0*/ myCPU__DOT__immGen__DOT___io_out_T_5;
        QData/*44:0*/ myCPU__DOT__immGen__DOT___io_out_T_7;
        QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_0;
        QData/*63:0*/ myCPU__DOT__regFile__DOT__reg_1;
    };
    struct {
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
        QData/*63:0*/ __Vtask_pmem_read__1__rdata;
        QData/*63:0*/ __Vtask_pc_read__2__rdata;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
