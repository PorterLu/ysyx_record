// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU___024root.h"

VL_ATTR_COLD void VmyCPU___024root___eval_initial(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VmyCPU___024root___settle__TOP__0(VmyCPU___024root* vlSelf);

VL_ATTR_COLD void VmyCPU___024root___eval_settle(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval_settle\n"); );
    // Body
    VmyCPU___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VmyCPU___024root___final(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___final\n"); );
}

VL_ATTR_COLD void VmyCPU___024root___ctor_var_reset(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc_debug = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__alu_io_A = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__alu_io_B = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__alu_io_out = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__immGen_io_inst = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT__control_io_inst = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT__control_io_pc_sel = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control_io_wd_type = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control_io_imm_sel = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control_io_br_type = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control_io_st_type = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control_io_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control_io_alu_op = VL_RAND_RESET_I(4);
    vlSelf->myCPU__DOT__brCond_io_taken = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__regFile_io_wen = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__regFile_io_wdata = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile_io_rdata_0 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile_io_rdata_1 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__mem___05Fpc_data = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__mem___05Frdata = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT__A_data = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__B_data = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___st_mask_T_5 = VL_RAND_RESET_I(8);
    vlSelf->myCPU__DOT__load_data = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__alu__DOT__shamt = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->myCPU__DOT__alu__DOT___out_T_46);
    VL_RAND_RESET_W(128, vlSelf->myCPU__DOT__alu__DOT___out_T_50);
    vlSelf->myCPU__DOT__immGen__DOT__Iimm = VL_RAND_RESET_Q(44);
    vlSelf->myCPU__DOT__immGen__DOT__Jimm = VL_RAND_RESET_Q(53);
    vlSelf->myCPU__DOT__immGen__DOT___io_out_T_5 = VL_RAND_RESET_Q(44);
    vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7 = VL_RAND_RESET_Q(45);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_198 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_215 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_244 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_261 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_292 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_307 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_322 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = VL_RAND_RESET_I(4);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = VL_RAND_RESET_I(4);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = VL_RAND_RESET_I(4);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_546 = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_605 = VL_RAND_RESET_I(3);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = VL_RAND_RESET_I(2);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_692 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_709 = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__brCond__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__brCond__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__brCond__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__regFile__DOT__reg_0 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT__reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT___GEN_77 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT___GEN_90 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT___GEN_110 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile__DOT___GEN_123 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__1__rdata = 0;
    vlSelf->__Vtask_pc_read__2__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
