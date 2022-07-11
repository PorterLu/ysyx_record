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
    vlSelf->io_dat_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_pc_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_wen = VL_RAND_RESET_I(1);
    vlSelf->io_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_instr = VL_RAND_RESET_I(32);
    vlSelf->io_pc_debug = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile_io_wen = VL_RAND_RESET_I(1);
    vlSelf->myCPU__DOT__regFile_io_wdata = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__regFile_io_rdata_0 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___pc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__imm_tmp = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT___GEN_63 = VL_RAND_RESET_Q(54);
    VL_RAND_RESET_W(79, vlSelf->myCPU__DOT___src1_T_8);
    VL_RAND_RESET_W(79, vlSelf->myCPU__DOT___GEN_62);
    vlSelf->myCPU__DOT___src2_T_8 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___pc_remote_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___GEN_46 = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->myCPU__DOT___GEN_61 = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT___GEN_66 = VL_RAND_RESET_I(32);
    vlSelf->myCPU__DOT___GEN_71 = VL_RAND_RESET_I(32);
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
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
