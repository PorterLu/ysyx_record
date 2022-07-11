// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmyCPU__Syms.h"


void VmyCPU___024root__trace_chg_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VmyCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_chg_top_0\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VmyCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VmyCPU___024root__trace_chg_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->myCPU__DOT__regFile_io_wen));
        bufp->chgCData(oldp+1,((0x1fU & vlSelf->myCPU__DOT___GEN_66)),5);
        bufp->chgQData(oldp+2,(vlSelf->myCPU__DOT__regFile_io_wdata),64);
        bufp->chgCData(oldp+4,((0x1fU & vlSelf->myCPU__DOT___GEN_61)),5);
        bufp->chgCData(oldp+5,((0x1fU & vlSelf->myCPU__DOT___GEN_71)),5);
        bufp->chgQData(oldp+6,(vlSelf->myCPU__DOT__regFile_io_rdata_0),64);
        bufp->chgIData(oldp+8,(vlSelf->myCPU__DOT__imm_tmp),32);
        bufp->chgIData(oldp+9,((IData)(vlSelf->myCPU__DOT___GEN_63)),32);
        bufp->chgQData(oldp+10,((((QData)((IData)(vlSelf->myCPU__DOT___GEN_62[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->myCPU__DOT___GEN_62[0U])))),64);
        bufp->chgQData(oldp+12,(vlSelf->myCPU__DOT__src2),64);
        bufp->chgQData(oldp+14,(vlSelf->myCPU__DOT__dest),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+16,(vlSelf->myCPU__DOT__regFile__DOT__reg_1),64);
        bufp->chgQData(oldp+18,(vlSelf->myCPU__DOT__regFile__DOT__reg_2),64);
        bufp->chgQData(oldp+20,(vlSelf->myCPU__DOT__regFile__DOT__reg_3),64);
        bufp->chgQData(oldp+22,(vlSelf->myCPU__DOT__regFile__DOT__reg_4),64);
        bufp->chgQData(oldp+24,(vlSelf->myCPU__DOT__regFile__DOT__reg_5),64);
        bufp->chgQData(oldp+26,(vlSelf->myCPU__DOT__regFile__DOT__reg_6),64);
        bufp->chgQData(oldp+28,(vlSelf->myCPU__DOT__regFile__DOT__reg_7),64);
        bufp->chgQData(oldp+30,(vlSelf->myCPU__DOT__regFile__DOT__reg_8),64);
        bufp->chgQData(oldp+32,(vlSelf->myCPU__DOT__regFile__DOT__reg_9),64);
        bufp->chgQData(oldp+34,(vlSelf->myCPU__DOT__regFile__DOT__reg_10),64);
        bufp->chgQData(oldp+36,(vlSelf->myCPU__DOT__regFile__DOT__reg_11),64);
        bufp->chgQData(oldp+38,(vlSelf->myCPU__DOT__regFile__DOT__reg_12),64);
        bufp->chgQData(oldp+40,(vlSelf->myCPU__DOT__regFile__DOT__reg_13),64);
        bufp->chgQData(oldp+42,(vlSelf->myCPU__DOT__regFile__DOT__reg_14),64);
        bufp->chgQData(oldp+44,(vlSelf->myCPU__DOT__regFile__DOT__reg_15),64);
        bufp->chgQData(oldp+46,(vlSelf->myCPU__DOT__regFile__DOT__reg_16),64);
        bufp->chgQData(oldp+48,(vlSelf->myCPU__DOT__regFile__DOT__reg_17),64);
        bufp->chgQData(oldp+50,(vlSelf->myCPU__DOT__regFile__DOT__reg_18),64);
        bufp->chgQData(oldp+52,(vlSelf->myCPU__DOT__regFile__DOT__reg_19),64);
        bufp->chgQData(oldp+54,(vlSelf->myCPU__DOT__regFile__DOT__reg_20),64);
        bufp->chgQData(oldp+56,(vlSelf->myCPU__DOT__regFile__DOT__reg_21),64);
        bufp->chgQData(oldp+58,(vlSelf->myCPU__DOT__regFile__DOT__reg_22),64);
        bufp->chgQData(oldp+60,(vlSelf->myCPU__DOT__regFile__DOT__reg_23),64);
        bufp->chgQData(oldp+62,(vlSelf->myCPU__DOT__regFile__DOT__reg_24),64);
        bufp->chgQData(oldp+64,(vlSelf->myCPU__DOT__regFile__DOT__reg_25),64);
        bufp->chgQData(oldp+66,(vlSelf->myCPU__DOT__regFile__DOT__reg_26),64);
        bufp->chgQData(oldp+68,(vlSelf->myCPU__DOT__regFile__DOT__reg_27),64);
        bufp->chgQData(oldp+70,(vlSelf->myCPU__DOT__regFile__DOT__reg_28),64);
        bufp->chgQData(oldp+72,(vlSelf->myCPU__DOT__regFile__DOT__reg_29),64);
        bufp->chgQData(oldp+74,(vlSelf->myCPU__DOT__regFile__DOT__reg_30),64);
        bufp->chgQData(oldp+76,(vlSelf->myCPU__DOT__regFile__DOT__reg_31),64);
        bufp->chgQData(oldp+78,(vlSelf->myCPU__DOT__pc),64);
        bufp->chgQData(oldp+80,(vlSelf->myCPU__DOT__regFile__DOT__reg_0),64);
    }
    bufp->chgBit(oldp+82,(vlSelf->clock));
    bufp->chgBit(oldp+83,(vlSelf->reset));
    bufp->chgQData(oldp+84,(vlSelf->io_dat_addr),64);
    bufp->chgQData(oldp+86,(vlSelf->io_pc_addr),64);
    bufp->chgBit(oldp+88,(vlSelf->io_wen));
    bufp->chgQData(oldp+89,(vlSelf->io_wdata),64);
    bufp->chgQData(oldp+91,(vlSelf->io_rdata),64);
    bufp->chgIData(oldp+93,(vlSelf->io_instr),32);
    bufp->chgQData(oldp+94,(vlSelf->io_pc_debug),64);
    bufp->chgQData(oldp+96,(((0U == (0x1fU & vlSelf->myCPU__DOT___GEN_71))
                              ? 0ULL : ((0x1fU == (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_71))
                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & vlSelf->myCPU__DOT___GEN_71))
                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->myCPU__DOT___GEN_71))
                                                 ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_71))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_71))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                   : vlSelf->myCPU__DOT__regFile__DOT___GEN_123))))))),64);
    bufp->chgBit(oldp+98,((0x100073U == vlSelf->io_instr)));
    bufp->chgIData(oldp+99,((0x7fU & vlSelf->io_instr)),32);
    bufp->chgBit(oldp+100,(((0x6fU != (0x7fU & vlSelf->io_instr)) 
                            & (0x67U != (0x707fU & vlSelf->io_instr)))));
}

void VmyCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_cleanup\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
