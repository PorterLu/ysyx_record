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
    VlWide<4>/*127:0*/ __Vtemp_he7104f08__0;
    VlWide<4>/*127:0*/ __Vtemp_heaea44b1__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->myCPU__DOT__regFile__DOT__reg_1),64);
        bufp->chgQData(oldp+2,(vlSelf->myCPU__DOT__regFile__DOT__reg_2),64);
        bufp->chgQData(oldp+4,(vlSelf->myCPU__DOT__regFile__DOT__reg_3),64);
        bufp->chgQData(oldp+6,(vlSelf->myCPU__DOT__regFile__DOT__reg_4),64);
        bufp->chgQData(oldp+8,(vlSelf->myCPU__DOT__regFile__DOT__reg_5),64);
        bufp->chgQData(oldp+10,(vlSelf->myCPU__DOT__regFile__DOT__reg_6),64);
        bufp->chgQData(oldp+12,(vlSelf->myCPU__DOT__regFile__DOT__reg_7),64);
        bufp->chgQData(oldp+14,(vlSelf->myCPU__DOT__regFile__DOT__reg_8),64);
        bufp->chgQData(oldp+16,(vlSelf->myCPU__DOT__regFile__DOT__reg_9),64);
        bufp->chgQData(oldp+18,(vlSelf->myCPU__DOT__regFile__DOT__reg_10),64);
        bufp->chgQData(oldp+20,(vlSelf->myCPU__DOT__regFile__DOT__reg_11),64);
        bufp->chgQData(oldp+22,(vlSelf->myCPU__DOT__regFile__DOT__reg_12),64);
        bufp->chgQData(oldp+24,(vlSelf->myCPU__DOT__regFile__DOT__reg_13),64);
        bufp->chgQData(oldp+26,(vlSelf->myCPU__DOT__regFile__DOT__reg_14),64);
        bufp->chgQData(oldp+28,(vlSelf->myCPU__DOT__regFile__DOT__reg_15),64);
        bufp->chgQData(oldp+30,(vlSelf->myCPU__DOT__regFile__DOT__reg_16),64);
        bufp->chgQData(oldp+32,(vlSelf->myCPU__DOT__regFile__DOT__reg_17),64);
        bufp->chgQData(oldp+34,(vlSelf->myCPU__DOT__regFile__DOT__reg_18),64);
        bufp->chgQData(oldp+36,(vlSelf->myCPU__DOT__regFile__DOT__reg_19),64);
        bufp->chgQData(oldp+38,(vlSelf->myCPU__DOT__regFile__DOT__reg_20),64);
        bufp->chgQData(oldp+40,(vlSelf->myCPU__DOT__regFile__DOT__reg_21),64);
        bufp->chgQData(oldp+42,(vlSelf->myCPU__DOT__regFile__DOT__reg_22),64);
        bufp->chgQData(oldp+44,(vlSelf->myCPU__DOT__regFile__DOT__reg_23),64);
        bufp->chgQData(oldp+46,(vlSelf->myCPU__DOT__regFile__DOT__reg_24),64);
        bufp->chgQData(oldp+48,(vlSelf->myCPU__DOT__regFile__DOT__reg_25),64);
        bufp->chgQData(oldp+50,(vlSelf->myCPU__DOT__regFile__DOT__reg_26),64);
        bufp->chgQData(oldp+52,(vlSelf->myCPU__DOT__regFile__DOT__reg_27),64);
        bufp->chgQData(oldp+54,(vlSelf->myCPU__DOT__regFile__DOT__reg_28),64);
        bufp->chgQData(oldp+56,(vlSelf->myCPU__DOT__regFile__DOT__reg_29),64);
        bufp->chgQData(oldp+58,(vlSelf->myCPU__DOT__regFile__DOT__reg_30),64);
        bufp->chgQData(oldp+60,(vlSelf->myCPU__DOT__regFile__DOT__reg_31),64);
        bufp->chgQData(oldp+62,((QData)((IData)(vlSelf->myCPU__DOT__pc))),64);
        bufp->chgIData(oldp+64,(vlSelf->myCPU__DOT__pc),32);
        bufp->chgQData(oldp+65,((QData)((IData)(((IData)(4U) 
                                                 + vlSelf->myCPU__DOT__pc)))),64);
        bufp->chgQData(oldp+67,(vlSelf->myCPU__DOT__regFile__DOT__reg_0),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+69,(vlSelf->myCPU__DOT__alu_io_A),64);
        bufp->chgQData(oldp+71,(vlSelf->myCPU__DOT__alu_io_B),64);
        bufp->chgCData(oldp+73,(vlSelf->myCPU__DOT__control_io_wd_type),2);
        bufp->chgCData(oldp+74,(vlSelf->myCPU__DOT__control_io_alu_op),4);
        bufp->chgQData(oldp+75,(vlSelf->myCPU__DOT__alu_io_out),64);
        bufp->chgIData(oldp+77,(vlSelf->myCPU__DOT__immGen_io_inst),32);
        bufp->chgCData(oldp+78,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
        bufp->chgQData(oldp+79,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                  ? (((QData)((IData)(
                                                      (0x3ffffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                                >> 0xfU)))) 
                                                                                >> 0x25U)))))))) 
                                      << 0x26U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                      >> 0xfU)))))
                                  : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                      ? (((QData)((IData)(
                                                          (0x7ffU 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->myCPU__DOT__immGen__DOT__Jimm 
                                                                                >> 0x34U)))))))) 
                                          << 0x35U) 
                                         | vlSelf->myCPU__DOT__immGen__DOT__Jimm)
                                      : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->myCPU__DOT__immGen_io_inst))))
                                          : (((QData)((IData)(
                                                              (0x7ffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7 
                                                                                >> 0x2cU)))))))) 
                                              << 0x2dU) 
                                             | vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7))))),64);
        bufp->chgIData(oldp+81,(vlSelf->myCPU__DOT__control_io_inst),32);
        bufp->chgCData(oldp+82,(vlSelf->myCPU__DOT__control_io_pc_sel),2);
        bufp->chgBit(oldp+83,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     & ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                 & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_215))))))))));
        bufp->chgBit(oldp+84,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     & ((0x67U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        & ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                    & ((0x6063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst)) 
                                                       & ((0x7063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst)) 
                                                          & ((3U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__control_io_inst)) 
                                                             & ((0x1003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                & ((0x2003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                   & ((0x4003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                      & ((0x5003U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                         & ((0x6003U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                            & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_261)))))))))))))))))));
        bufp->chgCData(oldp+85,(vlSelf->myCPU__DOT__control_io_br_type),3);
        bufp->chgCData(oldp+86,(vlSelf->myCPU__DOT__control_io_st_type),3);
        bufp->chgCData(oldp+87,(vlSelf->myCPU__DOT__control_io_ld_type),3);
        bufp->chgCData(oldp+88,(vlSelf->myCPU__DOT__control_io_wb_sel),2);
        bufp->chgBit(oldp+89,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     | ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                    & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_709)))))))))));
        bufp->chgQData(oldp+90,(vlSelf->myCPU__DOT__regFile_io_rdata_0),64);
        bufp->chgQData(oldp+92,(vlSelf->myCPU__DOT__regFile_io_rdata_1),64);
        bufp->chgBit(oldp+94,(vlSelf->myCPU__DOT__brCond_io_taken));
        bufp->chgBit(oldp+95,(vlSelf->myCPU__DOT__regFile_io_wen));
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                          >> 7U))),5);
        bufp->chgQData(oldp+97,(vlSelf->myCPU__DOT__regFile_io_wdata),64);
        bufp->chgCData(oldp+99,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+101,(vlSelf->myCPU__DOT__mem___05Fpc_data),64);
        VL_EXTEND_WQ(127,64, __Vtemp_he7104f08__0, vlSelf->myCPU__DOT__regFile_io_rdata_1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_heaea44b1__0, __Vtemp_he7104f08__0, 
                      (0x38U & ((IData)(vlSelf->myCPU__DOT__alu_io_out) 
                                << 3U)));
        bufp->chgQData(oldp+103,((((QData)((IData)(
                                                   __Vtemp_heaea44b1__0[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp_heaea44b1__0[0U])))),64);
        bufp->chgCData(oldp+105,((0xffU & ((0xffU == (IData)(vlSelf->myCPU__DOT___st_mask_T_5))
                                            ? (IData)(vlSelf->myCPU__DOT___st_mask_T_5)
                                            : (0x7fffffU 
                                               & ((IData)(vlSelf->myCPU__DOT___st_mask_T_5) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->myCPU__DOT__alu_io_out))))))),8);
        bufp->chgQData(oldp+106,(vlSelf->myCPU__DOT__mem___05Frdata),64);
        bufp->chgBit(oldp+108,(((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type)) 
                                | (0U != (IData)(vlSelf->myCPU__DOT__control_io_ld_type)))));
        bufp->chgBit(oldp+109,((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type))));
        bufp->chgIData(oldp+110,(vlSelf->myCPU__DOT__instr),32);
        bufp->chgQData(oldp+111,(vlSelf->myCPU__DOT__A_data),64);
        bufp->chgQData(oldp+113,(vlSelf->myCPU__DOT__B_data),64);
        bufp->chgSData(oldp+115,(vlSelf->myCPU__DOT___st_mask_T_5),16);
        bufp->chgQData(oldp+116,(vlSelf->myCPU__DOT__load_data),64);
        bufp->chgQData(oldp+118,(((1U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                   ? (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->myCPU__DOT__load_data 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__load_data)))
                                   : ((6U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                       ? (QData)((IData)(vlSelf->myCPU__DOT__load_data))
                                       : ((2U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                           ? ((((1U 
                                                 & (IData)(
                                                           (vlSelf->myCPU__DOT__load_data 
                                                            >> 0xfU)))
                                                 ? 0xffffffffffffULL
                                                 : 0ULL) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->myCPU__DOT__load_data)))))
                                           : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->myCPU__DOT__load_data))))
                                               : ((3U 
                                                   == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->myCPU__DOT__load_data 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->myCPU__DOT__load_data)))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->myCPU__DOT__load_data))))
                                                    : vlSelf->myCPU__DOT__load_data))))))),64);
        bufp->chgCData(oldp+120,(vlSelf->myCPU__DOT__alu__DOT__shamt),6);
        bufp->chgQData(oldp+121,((((QData)((IData)(
                                                   vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U])))),64);
        bufp->chgBit(oldp+123,(vlSelf->myCPU__DOT__brCond__DOT__eq));
        bufp->chgBit(oldp+124,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__eq)))));
        bufp->chgBit(oldp+125,(vlSelf->myCPU__DOT__brCond__DOT__lt));
        bufp->chgBit(oldp+126,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__lt)))));
        bufp->chgBit(oldp+127,(vlSelf->myCPU__DOT__brCond__DOT__ltu));
        bufp->chgBit(oldp+128,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__ltu)))));
        bufp->chgBit(oldp+129,((vlSelf->myCPU__DOT__immGen_io_inst 
                                >> 0x1fU)));
        bufp->chgSData(oldp+130,((vlSelf->myCPU__DOT__immGen_io_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+131,(vlSelf->myCPU__DOT__immGen__DOT__Iimm),44);
        bufp->chgSData(oldp+133,(((0xfe0U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->myCPU__DOT__immGen_io_inst 
                                              >> 7U)))),12);
        bufp->chgQData(oldp+134,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0xcU) | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                     >> 7U))))))),44);
        bufp->chgSData(oldp+136,(((0x1000U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__immGen_io_inst 
                                            >> 7U)))))),13);
        bufp->chgQData(oldp+137,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0xdU) | (QData)((IData)(
                                                              ((0x1000U 
                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                   >> 0x13U)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                           >> 7U))))))))),45);
        bufp->chgIData(oldp+139,((0xfffff000U & vlSelf->myCPU__DOT__immGen_io_inst)),32);
        bufp->chgQData(oldp+140,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->myCPU__DOT__immGen_io_inst))))),64);
        bufp->chgIData(oldp+142,(((0x100000U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->myCPU__DOT__immGen_io_inst) 
                                     | ((0x800U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                   >> 9U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->myCPU__DOT__immGen_io_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                 >> 0x14U))))))),21);
        bufp->chgQData(oldp+143,(vlSelf->myCPU__DOT__immGen__DOT__Jimm),53);
        bufp->chgCData(oldp+145,((0x1fU & (vlSelf->myCPU__DOT__immGen_io_inst 
                                           >> 0xfU))),6);
        bufp->chgQData(oldp+146,((QData)((IData)((0x1fU 
                                                  & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                     >> 0xfU))))),38);
    }
    bufp->chgBit(oldp+148,(vlSelf->clock));
    bufp->chgBit(oldp+149,(vlSelf->reset));
    bufp->chgQData(oldp+150,(vlSelf->io_pc_debug),64);
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
