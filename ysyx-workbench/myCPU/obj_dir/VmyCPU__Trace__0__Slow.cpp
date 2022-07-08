// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmyCPU__Syms.h"


VL_ATTR_COLD void VmyCPU___024root__trace_init_sub__TOP__0(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declQuad(c+93,"io_dat_addr", false,-1, 63,0);
    tracep->declQuad(c+95,"io_pc_addr", false,-1, 63,0);
    tracep->declBit(c+97,"io_wen", false,-1);
    tracep->declQuad(c+98,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+100,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+102,"io_instr", false,-1, 31,0);
    tracep->declQuad(c+103,"io_pc_debug", false,-1, 63,0);
    tracep->pushNamePrefix("myCPU ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declQuad(c+93,"io_dat_addr", false,-1, 63,0);
    tracep->declQuad(c+95,"io_pc_addr", false,-1, 63,0);
    tracep->declBit(c+97,"io_wen", false,-1);
    tracep->declQuad(c+98,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+100,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+102,"io_instr", false,-1, 31,0);
    tracep->declQuad(c+103,"io_pc_debug", false,-1, 63,0);
    tracep->declBit(c+91,"regFile_clock", false,-1);
    tracep->declBit(c+92,"regFile_reset", false,-1);
    tracep->declBit(c+1,"regFile_io_wen", false,-1);
    tracep->declBus(c+2,"regFile_io_waddr", false,-1, 4,0);
    tracep->declQuad(c+3,"regFile_io_wdata", false,-1, 63,0);
    tracep->declBus(c+5,"regFile_io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+6,"regFile_io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+7,"regFile_io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+9,"regFile_io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+11,"regFile_io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+13,"regFile_io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+15,"regFile_io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+17,"regFile_io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+19,"regFile_io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+21,"regFile_io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+23,"regFile_io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+25,"regFile_io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+27,"regFile_io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+29,"regFile_io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+31,"regFile_io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+33,"regFile_io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+35,"regFile_io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+37,"regFile_io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+39,"regFile_io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+41,"regFile_io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+43,"regFile_io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+45,"regFile_io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+47,"regFile_io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+49,"regFile_io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+51,"regFile_io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+53,"regFile_io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+55,"regFile_io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+57,"regFile_io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+59,"regFile_io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+61,"regFile_io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+63,"regFile_io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+65,"regFile_io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+67,"regFile_io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+69,"regFile_io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+71,"regFile_io_rdata_34", false,-1, 63,0);
    tracep->declBit(c+91,"reg_debug_clock", false,-1);
    tracep->declBit(c+92,"reg_debug_reset", false,-1);
    tracep->declQuad(c+105,"reg_debug_regfile_0", false,-1, 63,0);
    tracep->declQuad(c+11,"reg_debug_regfile_1", false,-1, 63,0);
    tracep->declQuad(c+13,"reg_debug_regfile_2", false,-1, 63,0);
    tracep->declQuad(c+15,"reg_debug_regfile_3", false,-1, 63,0);
    tracep->declQuad(c+17,"reg_debug_regfile_4", false,-1, 63,0);
    tracep->declQuad(c+19,"reg_debug_regfile_5", false,-1, 63,0);
    tracep->declQuad(c+21,"reg_debug_regfile_6", false,-1, 63,0);
    tracep->declQuad(c+23,"reg_debug_regfile_7", false,-1, 63,0);
    tracep->declQuad(c+25,"reg_debug_regfile_8", false,-1, 63,0);
    tracep->declQuad(c+27,"reg_debug_regfile_9", false,-1, 63,0);
    tracep->declQuad(c+29,"reg_debug_regfile_10", false,-1, 63,0);
    tracep->declQuad(c+31,"reg_debug_regfile_11", false,-1, 63,0);
    tracep->declQuad(c+33,"reg_debug_regfile_12", false,-1, 63,0);
    tracep->declQuad(c+35,"reg_debug_regfile_13", false,-1, 63,0);
    tracep->declQuad(c+37,"reg_debug_regfile_14", false,-1, 63,0);
    tracep->declQuad(c+39,"reg_debug_regfile_15", false,-1, 63,0);
    tracep->declQuad(c+41,"reg_debug_regfile_16", false,-1, 63,0);
    tracep->declQuad(c+43,"reg_debug_regfile_17", false,-1, 63,0);
    tracep->declQuad(c+45,"reg_debug_regfile_18", false,-1, 63,0);
    tracep->declQuad(c+47,"reg_debug_regfile_19", false,-1, 63,0);
    tracep->declQuad(c+49,"reg_debug_regfile_20", false,-1, 63,0);
    tracep->declQuad(c+51,"reg_debug_regfile_21", false,-1, 63,0);
    tracep->declQuad(c+53,"reg_debug_regfile_22", false,-1, 63,0);
    tracep->declQuad(c+55,"reg_debug_regfile_23", false,-1, 63,0);
    tracep->declQuad(c+57,"reg_debug_regfile_24", false,-1, 63,0);
    tracep->declQuad(c+59,"reg_debug_regfile_25", false,-1, 63,0);
    tracep->declQuad(c+61,"reg_debug_regfile_26", false,-1, 63,0);
    tracep->declQuad(c+63,"reg_debug_regfile_27", false,-1, 63,0);
    tracep->declQuad(c+65,"reg_debug_regfile_28", false,-1, 63,0);
    tracep->declQuad(c+67,"reg_debug_regfile_29", false,-1, 63,0);
    tracep->declQuad(c+69,"reg_debug_regfile_30", false,-1, 63,0);
    tracep->declQuad(c+71,"reg_debug_regfile_31", false,-1, 63,0);
    tracep->declBit(c+73,"ebreak_enable", false,-1);
    tracep->declQuad(c+74,"pc", false,-1, 63,0);
    tracep->declBus(c+76,"instr", false,-1, 31,0);
    tracep->declBus(c+77,"op", false,-1, 31,0);
    tracep->declBit(c+78,"is_4", false,-1);
    tracep->declBus(c+79,"imm_tmp", false,-1, 31,0);
    tracep->declBus(c+80,"imm", false,-1, 31,0);
    tracep->declQuad(c+81,"src1", false,-1, 63,0);
    tracep->declQuad(c+83,"src2", false,-1, 63,0);
    tracep->declQuad(c+85,"dest", false,-1, 63,0);
    tracep->declQuad(c+87,"pc_tmp", false,-1, 63,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+73,"enable", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBit(c+1,"io_wen", false,-1);
    tracep->declBus(c+2,"io_waddr", false,-1, 4,0);
    tracep->declQuad(c+3,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+5,"io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+6,"io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+7,"io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+9,"io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+11,"io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+13,"io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+15,"io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+17,"io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+19,"io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+21,"io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+23,"io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+25,"io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+27,"io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+29,"io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+31,"io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+33,"io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+35,"io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+37,"io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+39,"io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+41,"io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+43,"io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+45,"io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+47,"io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+49,"io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+51,"io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+53,"io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+55,"io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+57,"io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+59,"io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+61,"io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+63,"io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+65,"io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+67,"io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+69,"io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+71,"io_rdata_34", false,-1, 63,0);
    tracep->declQuad(c+89,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+11,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+13,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+15,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+17,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+19,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+21,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+23,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+25,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+27,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+29,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+31,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+33,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+35,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+37,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+39,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+41,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+43,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+45,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+47,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+49,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+51,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+53,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+55,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+57,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+59,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+61,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+63,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+65,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+67,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+69,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+71,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_debug ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declQuad(c+105,"regfile_0", false,-1, 63,0);
    tracep->declQuad(c+11,"regfile_1", false,-1, 63,0);
    tracep->declQuad(c+13,"regfile_2", false,-1, 63,0);
    tracep->declQuad(c+15,"regfile_3", false,-1, 63,0);
    tracep->declQuad(c+17,"regfile_4", false,-1, 63,0);
    tracep->declQuad(c+19,"regfile_5", false,-1, 63,0);
    tracep->declQuad(c+21,"regfile_6", false,-1, 63,0);
    tracep->declQuad(c+23,"regfile_7", false,-1, 63,0);
    tracep->declQuad(c+25,"regfile_8", false,-1, 63,0);
    tracep->declQuad(c+27,"regfile_9", false,-1, 63,0);
    tracep->declQuad(c+29,"regfile_10", false,-1, 63,0);
    tracep->declQuad(c+31,"regfile_11", false,-1, 63,0);
    tracep->declQuad(c+33,"regfile_12", false,-1, 63,0);
    tracep->declQuad(c+35,"regfile_13", false,-1, 63,0);
    tracep->declQuad(c+37,"regfile_14", false,-1, 63,0);
    tracep->declQuad(c+39,"regfile_15", false,-1, 63,0);
    tracep->declQuad(c+41,"regfile_16", false,-1, 63,0);
    tracep->declQuad(c+43,"regfile_17", false,-1, 63,0);
    tracep->declQuad(c+45,"regfile_18", false,-1, 63,0);
    tracep->declQuad(c+47,"regfile_19", false,-1, 63,0);
    tracep->declQuad(c+49,"regfile_20", false,-1, 63,0);
    tracep->declQuad(c+51,"regfile_21", false,-1, 63,0);
    tracep->declQuad(c+53,"regfile_22", false,-1, 63,0);
    tracep->declQuad(c+55,"regfile_23", false,-1, 63,0);
    tracep->declQuad(c+57,"regfile_24", false,-1, 63,0);
    tracep->declQuad(c+59,"regfile_25", false,-1, 63,0);
    tracep->declQuad(c+61,"regfile_26", false,-1, 63,0);
    tracep->declQuad(c+63,"regfile_27", false,-1, 63,0);
    tracep->declQuad(c+65,"regfile_28", false,-1, 63,0);
    tracep->declQuad(c+67,"regfile_29", false,-1, 63,0);
    tracep->declQuad(c+69,"regfile_30", false,-1, 63,0);
    tracep->declQuad(c+71,"regfile_31", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_top(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_top\n"); );
    // Body
    VmyCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VmyCPU___024root__trace_register(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VmyCPU___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&VmyCPU___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&VmyCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_top_0\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VmyCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->myCPU__DOT__regFile_io_wen));
    bufp->fullCData(oldp+2,((0x1fU & vlSelf->myCPU__DOT___GEN_72)),5);
    bufp->fullQData(oldp+3,(vlSelf->myCPU__DOT__regFile_io_wdata),64);
    bufp->fullCData(oldp+5,((0x1fU & vlSelf->myCPU__DOT___GEN_67)),5);
    bufp->fullCData(oldp+6,((0x1fU & vlSelf->myCPU__DOT___GEN_78)),5);
    bufp->fullQData(oldp+7,(vlSelf->myCPU__DOT__regFile_io_rdata_0),64);
    bufp->fullQData(oldp+9,(((0U == (0x1fU & vlSelf->myCPU__DOT___GEN_78))
                              ? 0ULL : ((0x1fU == (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_78))
                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & vlSelf->myCPU__DOT___GEN_78))
                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->myCPU__DOT___GEN_78))
                                                 ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_78))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_78))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                   : vlSelf->myCPU__DOT__regFile__DOT___GEN_123))))))),64);
    bufp->fullQData(oldp+11,(vlSelf->myCPU__DOT__regFile__DOT__reg_1),64);
    bufp->fullQData(oldp+13,(vlSelf->myCPU__DOT__regFile__DOT__reg_2),64);
    bufp->fullQData(oldp+15,(vlSelf->myCPU__DOT__regFile__DOT__reg_3),64);
    bufp->fullQData(oldp+17,(vlSelf->myCPU__DOT__regFile__DOT__reg_4),64);
    bufp->fullQData(oldp+19,(vlSelf->myCPU__DOT__regFile__DOT__reg_5),64);
    bufp->fullQData(oldp+21,(vlSelf->myCPU__DOT__regFile__DOT__reg_6),64);
    bufp->fullQData(oldp+23,(vlSelf->myCPU__DOT__regFile__DOT__reg_7),64);
    bufp->fullQData(oldp+25,(vlSelf->myCPU__DOT__regFile__DOT__reg_8),64);
    bufp->fullQData(oldp+27,(vlSelf->myCPU__DOT__regFile__DOT__reg_9),64);
    bufp->fullQData(oldp+29,(vlSelf->myCPU__DOT__regFile__DOT__reg_10),64);
    bufp->fullQData(oldp+31,(vlSelf->myCPU__DOT__regFile__DOT__reg_11),64);
    bufp->fullQData(oldp+33,(vlSelf->myCPU__DOT__regFile__DOT__reg_12),64);
    bufp->fullQData(oldp+35,(vlSelf->myCPU__DOT__regFile__DOT__reg_13),64);
    bufp->fullQData(oldp+37,(vlSelf->myCPU__DOT__regFile__DOT__reg_14),64);
    bufp->fullQData(oldp+39,(vlSelf->myCPU__DOT__regFile__DOT__reg_15),64);
    bufp->fullQData(oldp+41,(vlSelf->myCPU__DOT__regFile__DOT__reg_16),64);
    bufp->fullQData(oldp+43,(vlSelf->myCPU__DOT__regFile__DOT__reg_17),64);
    bufp->fullQData(oldp+45,(vlSelf->myCPU__DOT__regFile__DOT__reg_18),64);
    bufp->fullQData(oldp+47,(vlSelf->myCPU__DOT__regFile__DOT__reg_19),64);
    bufp->fullQData(oldp+49,(vlSelf->myCPU__DOT__regFile__DOT__reg_20),64);
    bufp->fullQData(oldp+51,(vlSelf->myCPU__DOT__regFile__DOT__reg_21),64);
    bufp->fullQData(oldp+53,(vlSelf->myCPU__DOT__regFile__DOT__reg_22),64);
    bufp->fullQData(oldp+55,(vlSelf->myCPU__DOT__regFile__DOT__reg_23),64);
    bufp->fullQData(oldp+57,(vlSelf->myCPU__DOT__regFile__DOT__reg_24),64);
    bufp->fullQData(oldp+59,(vlSelf->myCPU__DOT__regFile__DOT__reg_25),64);
    bufp->fullQData(oldp+61,(vlSelf->myCPU__DOT__regFile__DOT__reg_26),64);
    bufp->fullQData(oldp+63,(vlSelf->myCPU__DOT__regFile__DOT__reg_27),64);
    bufp->fullQData(oldp+65,(vlSelf->myCPU__DOT__regFile__DOT__reg_28),64);
    bufp->fullQData(oldp+67,(vlSelf->myCPU__DOT__regFile__DOT__reg_29),64);
    bufp->fullQData(oldp+69,(vlSelf->myCPU__DOT__regFile__DOT__reg_30),64);
    bufp->fullQData(oldp+71,(vlSelf->myCPU__DOT__regFile__DOT__reg_31),64);
    bufp->fullBit(oldp+73,(((0x13U != (0x707fU & vlSelf->myCPU__DOT__instr)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__instr)) 
                               & ((0x37U != (0x7fU 
                                             & vlSelf->myCPU__DOT__instr)) 
                                  & ((0x3023U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__instr)) 
                                     & ((0x6fU != (0x7fU 
                                                   & vlSelf->myCPU__DOT__instr)) 
                                        & ((0x67U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__instr)) 
                                           & (0x100073U 
                                              == vlSelf->myCPU__DOT__instr)))))))));
    bufp->fullQData(oldp+74,(vlSelf->myCPU__DOT__pc),64);
    bufp->fullIData(oldp+76,(vlSelf->myCPU__DOT__instr),32);
    bufp->fullIData(oldp+77,((0x7fU & vlSelf->myCPU__DOT__instr)),32);
    bufp->fullBit(oldp+78,(((0x6fU != (0x7fU & vlSelf->myCPU__DOT__instr)) 
                            & (0x67U != (0x707fU & vlSelf->myCPU__DOT__instr)))));
    bufp->fullIData(oldp+79,(vlSelf->myCPU__DOT__imm_tmp),32);
    bufp->fullIData(oldp+80,((IData)(vlSelf->myCPU__DOT___GEN_69)),32);
    bufp->fullQData(oldp+81,((((QData)((IData)(vlSelf->myCPU__DOT___GEN_68[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->myCPU__DOT___GEN_68[0U])))),64);
    bufp->fullQData(oldp+83,(vlSelf->myCPU__DOT__src2),64);
    bufp->fullQData(oldp+85,(vlSelf->myCPU__DOT__dest),64);
    bufp->fullQData(oldp+87,(vlSelf->myCPU__DOT__pc_tmp),64);
    bufp->fullQData(oldp+89,(vlSelf->myCPU__DOT__regFile__DOT__reg_0),64);
    bufp->fullBit(oldp+91,(vlSelf->clock));
    bufp->fullBit(oldp+92,(vlSelf->reset));
    bufp->fullQData(oldp+93,(vlSelf->io_dat_addr),64);
    bufp->fullQData(oldp+95,(vlSelf->io_pc_addr),64);
    bufp->fullBit(oldp+97,(vlSelf->io_wen));
    bufp->fullQData(oldp+98,(vlSelf->io_wdata),64);
    bufp->fullQData(oldp+100,(vlSelf->io_rdata),64);
    bufp->fullIData(oldp+102,(vlSelf->io_instr),32);
    bufp->fullQData(oldp+103,(vlSelf->io_pc_debug),64);
    bufp->fullQData(oldp+105,(0ULL),64);
}
