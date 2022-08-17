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
    VlWide<32>/*1023:0*/ __Vtemp_h72ab39f9__0;
    VlWide<32>/*1023:0*/ __Vtemp_hca088026__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6bb3fbe7__0;
    VlWide<32>/*1023:0*/ __Vtemp_h529c559b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6c7da4e8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h289ee4ea__0;
    VlWide<32>/*1023:0*/ __Vtemp_h327ef941__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9ca679d2__0;
    VlWide<4>/*127:0*/ __Vtemp_h5b59ca91__0;
    VlWide<4>/*127:0*/ __Vtemp_hb8bb06dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9d535a65__0;
    VlWide<4>/*127:0*/ __Vtemp_h32f52a8b__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0c0d54e__0;
    VlWide<3>/*95:0*/ __Vtemp_hfbd62a2a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc57a16a0__0;
    VlWide<16>/*511:0*/ __Vtemp_h5c328a0a__0;
    VlWide<16>/*511:0*/ __Vtemp_h7af7ad94__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst),32);
        bufp->chgCData(oldp+1,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199))))))))),2);
        bufp->chgBit(oldp+2,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6fU != (0x7fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x67U == (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       | ((0x63U != 
                                           (0x707fU 
                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x4063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x5063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & ((0x6063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_265))))))))))));
        bufp->chgBit(oldp+3,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x6fU != (0x7fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x67U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x63U != 
                                           (0x707fU 
                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x1063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x4063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x5063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & ((0x6063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                      & ((0x7063U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                         & ((3U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                            & ((0x1003U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                               & ((0x2003U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                  & ((0x4003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                     & ((0x5003U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                        & ((0x6003U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_326)))))))))))))))))));
        bufp->chgCData(oldp+4,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : 
                                                            ((0x4003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_396)))))))))))))))),2);
        bufp->chgCData(oldp+5,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
        bufp->chgCData(oldp+6,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 4U
                                                          : 0U))))))))))),3);
        bufp->chgCData(oldp+7,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_676)))))))),3);
        bufp->chgCData(oldp+8,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_748)))),3);
        bufp->chgCData(oldp+9,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 2U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810)))))))))),2);
        bufp->chgBit(oldp+10,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x6063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((0x7063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((3U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             | ((0x1003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                | ((0x2003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   | ((0x4003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      | ((0x5003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                         | ((0x6003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                            | ((0x3003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                               | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                                & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_868)))))))))))))))))))));
        bufp->chgCData(oldp+11,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0xbU : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (0xfU 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538))))))))))),4);
        bufp->chgBit(oldp+12,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                ? 0U : ((0x17U == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                         ? 0U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))));
        bufp->chgCData(oldp+13,(vlSelf->myCPU__DOT__control_io_csr_cmd),3);
        bufp->chgBit(oldp+14,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     & ((0x67U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x6063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((0x7063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((3U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x1003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x2003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & ((0x4003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1076)))))))))))))))));
        bufp->chgBit(oldp+15,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x6fU == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x67U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        | ((0x63U != 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x1063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x4063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x5063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x6063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((0x7063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((3U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x1003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x2003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & ((0x4003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      & ((0x5003U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                         & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1143))))))))))))))))));
        bufp->chgQData(oldp+16,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc),64);
        bufp->chgIData(oldp+18,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst),32);
        bufp->chgBit(oldp+19,(vlSelf->myCPU__DOT__datapath__DOT__started));
        bufp->chgBit(oldp+20,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  & ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     | ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           & ((5U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              & ((7U 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((0xaU 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & ((9U 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                       & (0xbU 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)))))))))))));
        bufp->chgIData(oldp+21,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                  : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                      : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                          : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__writeback_addr
                                                       : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg))))))))))),32);
        bufp->chgCData(oldp+22,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                  ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0xfU
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0U
                                                 : 0xfU)))),8);
        bufp->chgBit(oldp+23,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        & ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           | ((5U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              & ((7U 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((0xaU 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & ((9U 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                       & ((0xbU 
                                                           != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                          & (8U 
                                                             == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))))))))))))));
        bufp->chgCData(oldp+24,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                  ? 0xffU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0xffU
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0xffU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0xffU
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_mask)
                                                    : 0xffU)))))),8);
        bufp->chgBit(oldp+25,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                    ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                    : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                        ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                        : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                            : ((4U 
                                                == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                               | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last))))))));
        bufp->chgBit(oldp+26,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           & ((5U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              | ((7U 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((0xaU 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & ((9U 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                       & ((0xbU 
                                                           != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                          & ((8U 
                                                              != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                             & (0xcU 
                                                                == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)))))))))))))));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_ar_valid));
        bufp->chgIData(oldp+28,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                  : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                      : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                          : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr
                                                     : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg))))))))),32);
        bufp->chgCData(oldp+29,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                  ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0U : 0xfU))),8);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_r_ready));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_aw_valid));
        bufp->chgIData(oldp+32,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                  : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                      : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                          : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__writeback_addr
                                                       : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))))),32);
        bufp->chgCData(oldp+33,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                  ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0xfU
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0U
                                                 : 0xfU)))),8);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_valid));
        bufp->chgCData(oldp+35,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                  ? 0xffU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                              ? 0xffU
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0xffU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0xffU
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_mask)
                                                    : 0xffU)))))),8);
        bufp->chgBit(oldp+36,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                               & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                  & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                     & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                        & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                           & ((5U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                              | ((7U 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                 & ((0xaU 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                    & ((9U 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                       & ((0xbU 
                                                           != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                          & ((8U 
                                                              != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                             & (0xcU 
                                                                == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)))))))))))))));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_ar_valid));
        bufp->chgIData(oldp+38,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                  : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                      : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                          : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr
                                                     : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))),32);
        bufp->chgCData(oldp+39,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                  ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0U : 0xfU))),8);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_r_ready));
        bufp->chgBit(oldp+41,(((IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_aw_valid) 
                               & (6U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)))));
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_valid) 
                               & (3U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)))));
        bufp->chgBit(oldp+43,(vlSelf->myCPU__DOT__arb_io_axi_out_b_ready));
        bufp->chgBit(oldp+44,((((IData)(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_ar_valid) 
                                | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_ar_valid)) 
                               & ((4U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)) 
                                  | (5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))))));
        bufp->chgIData(oldp+45,(((5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))
                                  ? ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                      : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                          : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr
                                                      : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))
                                  : ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                      : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                          : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr
                                                      : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg)))))))))),32);
        bufp->chgCData(oldp+46,(((5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))
                                  ? ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                      ? 0xfU : ((1U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0U
                                                 : 0xfU))
                                  : ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                      ? 0xfU : ((1U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0U
                                                 : 0xfU)))),8);
        bufp->chgBit(oldp+47,(vlSelf->myCPU__DOT__arb_io_axi_out_r_ready));
        bufp->chgCData(oldp+48,(vlSelf->myCPU__DOT__arb__DOT__state),3);
        bufp->chgCData(oldp+49,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0xbU : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538)))))))))),5);
        bufp->chgCData(oldp+50,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                  ? 0U : ((0x17U == 
                                           (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                           ? 0U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))),2);
        bufp->chgCData(oldp+51,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type),2);
        bufp->chgCData(oldp+52,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op),4);
        bufp->chgQData(oldp+53,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                  ? (((QData)((IData)(
                                                      (0x3ffffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                                >> 0xfU)))) 
                                                                                >> 0x25U)))))))) 
                                      << 0x26U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                      >> 0xfU)))))
                                  : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                      ? (((QData)((IData)(
                                                          (0x7ffU 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm 
                                                                                >> 0x34U)))))))) 
                                          << 0x35U) 
                                         | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm)
                                      : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))
                                          : (((QData)((IData)(
                                                              (0x7ffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7 
                                                                                >> 0x2cU)))))))) 
                                              << 0x2dU) 
                                             | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7))))),64);
        bufp->chgCData(oldp+55,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type),3);
        bufp->chgCData(oldp+56,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest),5);
        bufp->chgQData(oldp+57,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata),64);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+60,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+61,(((0U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0xfU)))
                                  ? 0ULL : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27
                                                    : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_90))))))),64);
        bufp->chgQData(oldp+63,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_rdata_1),64);
        bufp->chgQData(oldp+65,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1),64);
        bufp->chgQData(oldp+67,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2),64);
        bufp->chgQData(oldp+69,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3),64);
        bufp->chgQData(oldp+71,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4),64);
        bufp->chgQData(oldp+73,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5),64);
        bufp->chgQData(oldp+75,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6),64);
        bufp->chgQData(oldp+77,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7),64);
        bufp->chgQData(oldp+79,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8),64);
        bufp->chgQData(oldp+81,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9),64);
        bufp->chgQData(oldp+83,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10),64);
        bufp->chgQData(oldp+85,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11),64);
        bufp->chgQData(oldp+87,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12),64);
        bufp->chgQData(oldp+89,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13),64);
        bufp->chgQData(oldp+91,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14),64);
        bufp->chgQData(oldp+93,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15),64);
        bufp->chgQData(oldp+95,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16),64);
        bufp->chgQData(oldp+97,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17),64);
        bufp->chgQData(oldp+99,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18),64);
        bufp->chgQData(oldp+101,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19),64);
        bufp->chgQData(oldp+103,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20),64);
        bufp->chgQData(oldp+105,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21),64);
        bufp->chgQData(oldp+107,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22),64);
        bufp->chgQData(oldp+109,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23),64);
        bufp->chgQData(oldp+111,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24),64);
        bufp->chgQData(oldp+113,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25),64);
        bufp->chgQData(oldp+115,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26),64);
        bufp->chgQData(oldp+117,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27),64);
        bufp->chgQData(oldp+119,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28),64);
        bufp->chgQData(oldp+121,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29),64);
        bufp->chgQData(oldp+123,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30),64);
        bufp->chgQData(oldp+125,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31),64);
        bufp->chgCData(oldp+127,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op),3);
        bufp->chgSData(oldp+128,((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+129,(((0xc00U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                              >> 0x14U))
                                   ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data
                                   : ((0xc02U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                  >> 0x14U))
                                       ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data
                                       : ((0x100U == 
                                           (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                            >> 0x14U))
                                           ? (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                           >> 0x12U))))) 
                                               << 0x12U) 
                                              | (QData)((IData)(
                                                                ((0x100U 
                                                                  & ((IData)(
                                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                              >> 8U)) 
                                                                     << 8U)) 
                                                                 | ((0x20U 
                                                                     & ((IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                                >> 5U)) 
                                                                        << 5U)) 
                                                                    | (2U 
                                                                       & ((IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                                >> 1U)) 
                                                                          << 1U)))))))
                                           : ((0x104U 
                                               == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U))
                                               ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_1
                                               : ((0x105U 
                                                   == 
                                                   (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                    >> 0x14U))
                                                   ? 
                                                  ((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                                    << 2U) 
                                                   | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode)))
                                                   : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_96)))))),64);
        bufp->chgCData(oldp+131,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+132,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+133,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data),64);
        bufp->chgBit(oldp+135,((0x13U != vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgIData(oldp+136,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst),32);
        bufp->chgCData(oldp+137,(((0x37U == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                   ? 0U : ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                            ? 0U : 
                                           ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))),2);
        bufp->chgBit(oldp+138,((0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))));
        bufp->chgQData(oldp+139,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_addr),64);
        bufp->chgBit(oldp+141,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_taken));
        bufp->chgBit(oldp+142,((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgBit(oldp+143,((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
        bufp->chgQData(oldp+144,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc),64);
        bufp->chgBit(oldp+146,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable));
        bufp->chgBit(oldp+147,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
        bufp->chgBit(oldp+148,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
        bufp->chgBit(oldp+149,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
        bufp->chgQData(oldp+150,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_pc),64);
        bufp->chgIData(oldp+152,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst),32);
        bufp->chgQData(oldp+153,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm),64);
        bufp->chgQData(oldp+155,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs1),64);
        bufp->chgQData(oldp+157,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr),64);
        bufp->chgQData(oldp+159,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs2),64);
        bufp->chgQData(oldp+161,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr),64);
        bufp->chgQData(oldp+163,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+165,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+166,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+167,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_data),64);
        bufp->chgCData(oldp+169,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_dest),5);
        bufp->chgBit(oldp+170,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel));
        bufp->chgBit(oldp+171,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel));
        bufp->chgCData(oldp+172,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel),2);
        bufp->chgCData(oldp+173,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type),3);
        bufp->chgCData(oldp+174,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type),3);
        bufp->chgCData(oldp+175,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+176,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_en));
        bufp->chgQData(oldp+177,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out),64);
        bufp->chgQData(oldp+179,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+181,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_op),3);
        bufp->chgSData(oldp+182,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_addr),12);
        bufp->chgQData(oldp+183,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_data),64);
        bufp->chgQData(oldp+185,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_jump_addr),64);
        bufp->chgBit(oldp+187,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_jump_taken));
        bufp->chgQData(oldp+188,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_data),64);
        bufp->chgCData(oldp+190,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type),3);
        bufp->chgCData(oldp+191,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type),3);
        bufp->chgCData(oldp+192,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+193,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en));
        bufp->chgCData(oldp+194,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest),5);
        bufp->chgQData(oldp+195,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc),64);
        bufp->chgIData(oldp+197,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_inst),32);
        bufp->chgQData(oldp+198,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_load_data),64);
        bufp->chgQData(oldp+200,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out),64);
        bufp->chgQData(oldp+202,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_read_data),64);
        bufp->chgCData(oldp+204,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel),2);
        bufp->chgBit(oldp+205,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en));
        bufp->chgCData(oldp+206,(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush),4);
        bufp->chgBit(oldp+207,(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur));
        bufp->chgBit(oldp+208,((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))));
        bufp->chgWData(oldp+209,(vlSelf->myCPU__DOT__datapath__DOT__pc),65);
        bufp->chgBit(oldp+212,(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst));
        bufp->chgCData(oldp+213,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+214,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+215,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+216,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+217,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+218,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+219,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+220,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+221,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
        bufp->chgQData(oldp+222,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data),64);
        bufp->chgQData(oldp+224,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data),64);
        bufp->chgBit(oldp+226,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+227,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+228,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+229,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+230,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+231,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie));
        bufp->chgQData(oldp+232,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base),62);
        bufp->chgCData(oldp+234,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgQData(oldp+235,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mscratch_data),64);
        bufp->chgQData(oldp+237,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data),64);
        bufp->chgBit(oldp+239,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
        bufp->chgQData(oldp+240,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code),63);
        bufp->chgQData(oldp+242,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data),64);
        bufp->chgBit(oldp+244,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_meip));
        bufp->chgBit(oldp+245,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip));
        bufp->chgBit(oldp+246,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip));
        bufp->chgBit(oldp+247,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip));
        bufp->chgBit(oldp+248,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip));
        bufp->chgQData(oldp+249,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+251,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data),64);
        bufp->chgCData(oldp+253,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                << 1U)))),6);
        bufp->chgIData(oldp+254,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp) 
                                   << 0xbU) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp) 
                                                << 8U) 
                                               | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                                         << 3U) 
                                                        | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                           << 1U))))))),17);
        bufp->chgBit(oldp+255,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+256,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 8U)))));
        bufp->chgBit(oldp+257,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 5U)))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                              >> 1U)))));
        bufp->chgCData(oldp+259,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie) 
                                                << 1U)))),6);
        bufp->chgCData(oldp+260,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                   << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip) 
                                              << 3U) 
                                             | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                                << 1U)))),6);
        bufp->chgQData(oldp+261,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base),62);
        bufp->chgCData(oldp+263,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode),2);
        bufp->chgQData(oldp+264,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sscratch_data),64);
        bufp->chgQData(oldp+266,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data),64);
        bufp->chgBit(oldp+268,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
        bufp->chgQData(oldp+269,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code),63);
        bufp->chgQData(oldp+271,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data),64);
        bufp->chgSData(oldp+273,(((0x100U & ((IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                      >> 8U)) 
                                             << 8U)) 
                                  | ((0x20U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                        >> 5U)) 
                                               << 5U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                       >> 1U)) 
                                              << 1U))))),13);
        bufp->chgBit(oldp+274,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+275,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 7U)))));
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                              >> 3U)))));
        bufp->chgCData(oldp+277,(((0x20U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                     >> 5U)) 
                                            << 5U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                       >> 1U)) 
                                              << 1U))))),6);
        bufp->chgBit(oldp+278,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 1U)))));
        bufp->chgBit(oldp+279,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 5U)))));
        bufp->chgBit(oldp+280,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                              >> 9U)))));
        bufp->chgBit(oldp+281,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+282,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+283,((1U & (((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                        ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                        : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                            ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                            : ((3U 
                                                == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                    ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable)
                                                    : 
                                                   ((1U 
                                                     != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)) 
                                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable)))))) 
                                      | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
        bufp->chgBit(oldp+284,((1U & (((((3U & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x1cU)) 
                                         <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                        | (0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))) 
                                       & (((0x37U == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                            ? 0U : 
                                           ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))) 
                                          <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode))) 
                                      | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
        bufp->chgBit(oldp+285,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid));
        bufp->chgBit(oldp+286,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeEn));
        bufp->chgQData(oldp+287,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData),64);
        bufp->chgQData(oldp+289,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS),64);
        bufp->chgQData(oldp+291,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM),64);
        bufp->chgBit(oldp+293,((((1U > (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                 | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                    & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie))) 
                                & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                          & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+294,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+295,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt));
        bufp->chgBit(oldp+296,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS));
        bufp->chgQData(oldp+297,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                 >> 9U)))
                                   ? 9ULL : ((1U & (IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                            >> 1U)))
                                              ? 1ULL
                                              : 5ULL))),63);
        bufp->chgQData(oldp+299,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                 >> 0xbU)))
                                   ? 0xbULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                           >> 3U)))
                                                ? 3ULL
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                               >> 7U)))
                                                    ? 7ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                                >> 9U)))
                                                     ? 9ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                                 >> 1U)))
                                                      ? 1ULL
                                                      : 5ULL)))))),63);
        bufp->chgCData(oldp+301,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                >> 8U)))),2);
        bufp->chgBit(oldp+302,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+303,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 8U)))));
        bufp->chgBit(oldp+304,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 5U)))));
        bufp->chgBit(oldp+305,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 1U)))));
        bufp->chgSData(oldp+306,(((0x100U & ((IData)(
                                                     (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                      >> 8U)) 
                                             << 8U)) 
                                  | ((0x20U & ((IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                        >> 5U)) 
                                               << 5U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                       >> 1U)) 
                                              << 1U))))),13);
        bufp->chgBit(oldp+307,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                              >> 9U)))));
        bufp->chgCData(oldp+308,(((0x20U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                     >> 5U)) 
                                            << 5U)) 
                                  | ((8U & ((IData)(
                                                    (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                     >> 3U)) 
                                            << 3U)) 
                                     | (2U & ((IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                       >> 1U)) 
                                              << 1U))))),6);
        bufp->chgBit(oldp+309,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                >> 0x1fU)));
        bufp->chgSData(oldp+310,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+311,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm),44);
        bufp->chgSData(oldp+313,(((0xfe0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 7U)))),12);
        bufp->chgQData(oldp+314,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0xcU) | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                     >> 7U))))))),44);
        bufp->chgSData(oldp+316,(((0x1000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 7U)))))),13);
        bufp->chgQData(oldp+317,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0xdU) | (QData)((IData)(
                                                              ((0x1000U 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   >> 0x13U)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                           >> 7U))))))))),45);
        bufp->chgIData(oldp+319,((0xfffff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)),32);
        bufp->chgQData(oldp+320,((((QData)((IData)(
                                                   ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))),64);
        bufp->chgIData(oldp+322,(((0x100000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                     | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 9U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 0x14U))))))),21);
        bufp->chgQData(oldp+323,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm),53);
        bufp->chgCData(oldp+325,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0xfU))),6);
        bufp->chgQData(oldp+326,((QData)((IData)((0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU))))),38);
        bufp->chgQData(oldp+328,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0),64);
        bufp->chgCData(oldp+330,((7U & (vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg 
                                        >> 7U))),3);
        bufp->chgBit(oldp+331,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_cache_req_we));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_valid));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_dirty));
        bufp->chgCData(oldp+334,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_visit),8);
        bufp->chgIData(oldp+335,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_tag),22);
        bufp->chgBit(oldp+336,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_valid));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_dirty));
        bufp->chgCData(oldp+338,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_visit),8);
        bufp->chgIData(oldp+339,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_tag),22);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_cache_req_we));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_valid));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_dirty));
        bufp->chgCData(oldp+343,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_visit),8);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_tag),22);
        bufp->chgBit(oldp+345,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_valid));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_dirty));
        bufp->chgCData(oldp+347,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_visit),8);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_tag),22);
        bufp->chgBit(oldp+349,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_cache_req_we));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_valid));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_dirty));
        bufp->chgCData(oldp+352,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_visit),8);
        bufp->chgIData(oldp+353,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_tag),22);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_valid));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_dirty));
        bufp->chgCData(oldp+356,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_visit),8);
        bufp->chgIData(oldp+357,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_tag),22);
        bufp->chgBit(oldp+358,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_cache_req_we));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_valid));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_dirty));
        bufp->chgCData(oldp+361,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_visit),8);
        bufp->chgIData(oldp+362,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_tag),22);
        bufp->chgBit(oldp+363,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_valid));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_dirty));
        bufp->chgCData(oldp+365,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_visit),8);
        bufp->chgIData(oldp+366,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_tag),22);
        bufp->chgWData(oldp+367,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_data_read_data),1024);
        bufp->chgWData(oldp+399,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_data_read_data),1024);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_data_read_data),1024);
        bufp->chgWData(oldp+463,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_data_read_data),1024);
        bufp->chgCData(oldp+495,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state),4);
        bufp->chgCData(oldp+496,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__index),4);
        bufp->chgBit(oldp+497,((0xfU == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__index))));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__fill_block_en));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace),2);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr),32);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__writeback_addr),32);
        bufp->chgIData(oldp+503,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg),32);
        bufp->chgQData(oldp+504,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_data),64);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_mask),8);
        bufp->chgBit(oldp+507,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw));
        bufp->chgIData(oldp+508,((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg 
                                  >> 0xaU)),22);
        bufp->chgBit(oldp+509,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3));
        bufp->chgWData(oldp+513,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__response_data),1024);
        bufp->chgQData(oldp+545,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+547,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+549,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+551,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+553,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+555,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+557,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+559,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0ULL
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                            : 0ULL))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
        bufp->chgQData(oldp+561,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__result),64);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_1),8);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_0),8);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_3),8);
        bufp->chgCData(oldp+566,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_2),8);
        bufp->chgBit(oldp+567,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__compare_2_3));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__compare_1_0));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__max_01_or_23));
        bufp->chgCData(oldp+570,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__max),2);
        bufp->chgWData(oldp+571,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+603,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+635,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+667,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+699,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+731,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+763,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+795,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+827,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+828,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h72ab39f9__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h72ab39f9__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h72ab39f9__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h72ab39f9__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h72ab39f9__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h72ab39f9__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h72ab39f9__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h72ab39f9__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h72ab39f9__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h72ab39f9__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h72ab39f9__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h72ab39f9__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h72ab39f9__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h72ab39f9__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h72ab39f9__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h72ab39f9__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h72ab39f9__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h72ab39f9__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h72ab39f9__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h72ab39f9__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h72ab39f9__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h72ab39f9__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h72ab39f9__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h72ab39f9__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h72ab39f9__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h72ab39f9__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h72ab39f9__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h72ab39f9__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h72ab39f9__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h72ab39f9__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h72ab39f9__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h72ab39f9__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+829,(__Vtemp_h72ab39f9__0),1024);
        bufp->chgWData(oldp+861,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+893,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__doForwardReg));
        bufp->chgWData(oldp+894,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+926,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+958,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+990,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+1022,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+1054,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+1086,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+1118,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+1151,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_hca088026__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_hca088026__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_hca088026__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_hca088026__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_hca088026__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_hca088026__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_hca088026__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_hca088026__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_hca088026__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_hca088026__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_hca088026__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_hca088026__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_hca088026__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_hca088026__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_hca088026__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_hca088026__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_hca088026__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_hca088026__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_hca088026__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_hca088026__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_hca088026__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_hca088026__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_hca088026__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_hca088026__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_hca088026__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_hca088026__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_hca088026__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_hca088026__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_hca088026__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_hca088026__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_hca088026__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_hca088026__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+1152,(__Vtemp_hca088026__0),1024);
        bufp->chgWData(oldp+1184,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+1216,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__doForwardReg));
        bufp->chgWData(oldp+1217,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+1249,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+1281,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+1313,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+1345,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+1377,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+1409,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+1441,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+1473,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h6bb3fbe7__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h6bb3fbe7__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h6bb3fbe7__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h6bb3fbe7__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h6bb3fbe7__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h6bb3fbe7__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h6bb3fbe7__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h6bb3fbe7__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h6bb3fbe7__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h6bb3fbe7__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h6bb3fbe7__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h6bb3fbe7__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h6bb3fbe7__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h6bb3fbe7__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h6bb3fbe7__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h6bb3fbe7__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h6bb3fbe7__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h6bb3fbe7__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h6bb3fbe7__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h6bb3fbe7__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h6bb3fbe7__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h6bb3fbe7__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h6bb3fbe7__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h6bb3fbe7__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h6bb3fbe7__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h6bb3fbe7__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h6bb3fbe7__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h6bb3fbe7__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h6bb3fbe7__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h6bb3fbe7__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h6bb3fbe7__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h6bb3fbe7__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+1475,(__Vtemp_h6bb3fbe7__0),1024);
        bufp->chgWData(oldp+1507,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__doForwardReg));
        bufp->chgWData(oldp+1540,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+1572,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+1604,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+1636,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+1668,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+1700,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+1732,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+1764,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+1797,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h529c559b__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h529c559b__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h529c559b__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h529c559b__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h529c559b__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h529c559b__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h529c559b__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h529c559b__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h529c559b__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h529c559b__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h529c559b__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h529c559b__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h529c559b__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h529c559b__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h529c559b__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h529c559b__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h529c559b__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h529c559b__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h529c559b__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h529c559b__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h529c559b__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h529c559b__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h529c559b__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h529c559b__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h529c559b__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h529c559b__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h529c559b__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h529c559b__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h529c559b__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h529c559b__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h529c559b__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h529c559b__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+1798,(__Vtemp_h529c559b__0),1024);
        bufp->chgWData(oldp+1830,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__doForwardReg));
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+1865,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+1866,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+1869,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+1870,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+1871,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+1872,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+1873,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+1874,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+1875,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+1876,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+1877,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+1878,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+1881,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+1882,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+1883,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+1884,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+1885,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+1886,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+1887,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+1889,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+1890,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+1891,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+1894,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+1895,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+1897,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+1898,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+1899,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+1901,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+1902,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+1903,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+1905,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+1906,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+1907,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+1908,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+1909,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+1910,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+1911,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+1912,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+1914,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+1915,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+1917,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+1918,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+1919,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+1920,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+1921,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+1922,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+1923,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+1924,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+1925,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+1926,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+1927,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+1928,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+1929,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+1930,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+1931,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+1932,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+1934,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+1935,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+1936,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+1937,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+1938,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+1940,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+1941,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+1942,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+1943,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+1945,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+1946,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+1947,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+1949,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+1950,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+1951,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+1952,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+1953,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+1954,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+1955,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+1956,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+1957,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+1958,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+1959,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+1961,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+1962,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+1963,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+1964,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+1965,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+1966,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+1968,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+1969,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+1970,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+1972,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+1973,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+1974,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+1977,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+1978,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+1979,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+1980,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+1981,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+1982,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+1983,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+1985,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+1986,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+1987,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+1988,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+1990,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_tag),22);
        bufp->chgCData(oldp+1991,((7U & (vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg 
                                         >> 7U))),3);
        bufp->chgBit(oldp+1992,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_cache_req_we));
        bufp->chgBit(oldp+1993,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_valid));
        bufp->chgBit(oldp+1994,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_dirty));
        bufp->chgCData(oldp+1995,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_visit),8);
        bufp->chgIData(oldp+1996,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_tag),22);
        bufp->chgBit(oldp+1997,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_valid));
        bufp->chgBit(oldp+1998,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_dirty));
        bufp->chgCData(oldp+1999,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_visit),8);
        bufp->chgIData(oldp+2000,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_tag),22);
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_cache_req_we));
        bufp->chgBit(oldp+2002,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_valid));
        bufp->chgBit(oldp+2003,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_dirty));
        bufp->chgCData(oldp+2004,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_visit),8);
        bufp->chgIData(oldp+2005,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_tag),22);
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_valid));
        bufp->chgBit(oldp+2007,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_dirty));
        bufp->chgCData(oldp+2008,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_visit),8);
        bufp->chgIData(oldp+2009,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_tag),22);
        bufp->chgBit(oldp+2010,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_cache_req_we));
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_valid));
        bufp->chgBit(oldp+2012,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_dirty));
        bufp->chgCData(oldp+2013,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_visit),8);
        bufp->chgIData(oldp+2014,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_tag),22);
        bufp->chgBit(oldp+2015,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_valid));
        bufp->chgBit(oldp+2016,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_dirty));
        bufp->chgCData(oldp+2017,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_visit),8);
        bufp->chgIData(oldp+2018,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_tag),22);
        bufp->chgBit(oldp+2019,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_cache_req_we));
        bufp->chgBit(oldp+2020,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_valid));
        bufp->chgBit(oldp+2021,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_dirty));
        bufp->chgCData(oldp+2022,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_visit),8);
        bufp->chgIData(oldp+2023,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_tag),22);
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_valid));
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_dirty));
        bufp->chgCData(oldp+2026,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_visit),8);
        bufp->chgIData(oldp+2027,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_tag),22);
        bufp->chgWData(oldp+2028,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_data_read_data),1024);
        bufp->chgWData(oldp+2060,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_data_read_data),1024);
        bufp->chgWData(oldp+2092,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_data_read_data),1024);
        bufp->chgWData(oldp+2124,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_data_read_data),1024);
        bufp->chgCData(oldp+2156,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state),4);
        bufp->chgCData(oldp+2157,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__index),4);
        bufp->chgBit(oldp+2158,((0xfU == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__index))));
        bufp->chgCData(oldp+2159,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace),2);
        bufp->chgIData(oldp+2160,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr),32);
        bufp->chgIData(oldp+2161,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__writeback_addr),32);
        bufp->chgIData(oldp+2162,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg),32);
        bufp->chgQData(oldp+2163,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_data),64);
        bufp->chgCData(oldp+2165,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_mask),8);
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw));
        bufp->chgIData(oldp+2167,((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg 
                                   >> 0xaU)),22);
        bufp->chgBit(oldp+2168,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0));
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1));
        bufp->chgBit(oldp+2170,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2));
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3));
        bufp->chgWData(oldp+2172,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__response_data),1024);
        bufp->chgQData(oldp+2204,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2206,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2208,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2210,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2212,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2214,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2216,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2218,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                          | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                         | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                          : 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                           : 
                                                          ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                            : 
                                                           ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                             ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))),64);
        bufp->chgQData(oldp+2220,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__result),64);
        bufp->chgCData(oldp+2222,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_1),8);
        bufp->chgCData(oldp+2223,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_0),8);
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_3),8);
        bufp->chgCData(oldp+2225,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_2),8);
        bufp->chgBit(oldp+2226,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__compare_2_3));
        bufp->chgBit(oldp+2227,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__compare_1_0));
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__max_01_or_23));
        bufp->chgCData(oldp+2229,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__max),2);
        bufp->chgWData(oldp+2230,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+2262,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+2294,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+2326,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+2358,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+2390,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+2422,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+2454,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+2487,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h6c7da4e8__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h6c7da4e8__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h6c7da4e8__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h6c7da4e8__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h6c7da4e8__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h6c7da4e8__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h6c7da4e8__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h6c7da4e8__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h6c7da4e8__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h6c7da4e8__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h6c7da4e8__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h6c7da4e8__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h6c7da4e8__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h6c7da4e8__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h6c7da4e8__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h6c7da4e8__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h6c7da4e8__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h6c7da4e8__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h6c7da4e8__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h6c7da4e8__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h6c7da4e8__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h6c7da4e8__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h6c7da4e8__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h6c7da4e8__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h6c7da4e8__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h6c7da4e8__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h6c7da4e8__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h6c7da4e8__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h6c7da4e8__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h6c7da4e8__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h6c7da4e8__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h6c7da4e8__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+2488,(__Vtemp_h6c7da4e8__0),1024);
        bufp->chgWData(oldp+2520,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__doForwardReg));
        bufp->chgWData(oldp+2553,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+2585,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+2617,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+2649,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+2681,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+2713,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+2745,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+2777,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+2809,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+2810,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h289ee4ea__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h289ee4ea__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h289ee4ea__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h289ee4ea__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h289ee4ea__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h289ee4ea__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h289ee4ea__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h289ee4ea__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h289ee4ea__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h289ee4ea__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h289ee4ea__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h289ee4ea__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h289ee4ea__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h289ee4ea__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h289ee4ea__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h289ee4ea__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h289ee4ea__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h289ee4ea__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h289ee4ea__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h289ee4ea__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h289ee4ea__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h289ee4ea__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h289ee4ea__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h289ee4ea__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h289ee4ea__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h289ee4ea__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h289ee4ea__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h289ee4ea__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h289ee4ea__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h289ee4ea__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h289ee4ea__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h289ee4ea__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+2811,(__Vtemp_h289ee4ea__0),1024);
        bufp->chgWData(oldp+2843,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+2875,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__doForwardReg));
        bufp->chgWData(oldp+2876,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+2908,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+2940,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+2972,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+3004,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+3036,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+3068,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+3100,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+3132,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+3133,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h327ef941__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h327ef941__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h327ef941__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h327ef941__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h327ef941__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h327ef941__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h327ef941__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h327ef941__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h327ef941__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h327ef941__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h327ef941__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h327ef941__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h327ef941__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h327ef941__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h327ef941__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h327ef941__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h327ef941__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h327ef941__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h327ef941__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h327ef941__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h327ef941__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h327ef941__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h327ef941__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h327ef941__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h327ef941__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h327ef941__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h327ef941__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h327ef941__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h327ef941__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h327ef941__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h327ef941__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h327ef941__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+3134,(__Vtemp_h327ef941__0),1024);
        bufp->chgWData(oldp+3166,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+3198,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__doForwardReg));
        bufp->chgWData(oldp+3199,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[0]),1024);
        bufp->chgWData(oldp+3231,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[1]),1024);
        bufp->chgWData(oldp+3263,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[2]),1024);
        bufp->chgWData(oldp+3295,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[3]),1024);
        bufp->chgWData(oldp+3327,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[4]),1024);
        bufp->chgWData(oldp+3359,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[5]),1024);
        bufp->chgWData(oldp+3391,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[6]),1024);
        bufp->chgWData(oldp+3423,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[7]),1024);
        bufp->chgBit(oldp+3455,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_en_pipe_0));
        bufp->chgCData(oldp+3456,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0),3);
        __Vtemp_h9ca679d2__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0U];
        __Vtemp_h9ca679d2__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][1U];
        __Vtemp_h9ca679d2__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][2U];
        __Vtemp_h9ca679d2__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][3U];
        __Vtemp_h9ca679d2__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][4U];
        __Vtemp_h9ca679d2__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][5U];
        __Vtemp_h9ca679d2__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][6U];
        __Vtemp_h9ca679d2__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][7U];
        __Vtemp_h9ca679d2__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][8U];
        __Vtemp_h9ca679d2__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][9U];
        __Vtemp_h9ca679d2__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
        __Vtemp_h9ca679d2__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
        __Vtemp_h9ca679d2__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
        __Vtemp_h9ca679d2__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
        __Vtemp_h9ca679d2__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
        __Vtemp_h9ca679d2__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
        __Vtemp_h9ca679d2__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
        __Vtemp_h9ca679d2__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
        __Vtemp_h9ca679d2__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
        __Vtemp_h9ca679d2__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
        __Vtemp_h9ca679d2__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
        __Vtemp_h9ca679d2__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
        __Vtemp_h9ca679d2__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
        __Vtemp_h9ca679d2__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
        __Vtemp_h9ca679d2__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
        __Vtemp_h9ca679d2__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
        __Vtemp_h9ca679d2__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
        __Vtemp_h9ca679d2__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
        __Vtemp_h9ca679d2__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
        __Vtemp_h9ca679d2__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
        __Vtemp_h9ca679d2__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
        __Vtemp_h9ca679d2__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
            [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
        bufp->chgWData(oldp+3457,(__Vtemp_h9ca679d2__0),1024);
        bufp->chgWData(oldp+3489,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__wDataReg_data),1024);
        bufp->chgBit(oldp+3521,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__doForwardReg));
        bufp->chgBit(oldp+3522,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+3523,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+3524,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+3525,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+3526,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+3527,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+3528,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+3529,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+3530,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+3531,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+3532,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+3533,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+3534,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+3535,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+3536,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+3537,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+3538,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+3539,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+3540,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+3541,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+3542,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+3543,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+3544,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+3545,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+3546,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+3547,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+3548,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+3549,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+3550,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+3551,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+3552,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+3553,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+3554,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+3555,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+3556,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+3557,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+3558,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+3559,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+3560,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+3561,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+3562,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+3563,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+3564,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+3565,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+3566,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+3567,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+3568,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+3569,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+3570,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+3571,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+3572,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+3573,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+3574,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+3575,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+3576,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+3577,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+3578,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+3579,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+3580,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+3581,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+3582,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+3583,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+3584,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+3585,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+3586,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+3587,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+3588,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+3589,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+3590,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+3591,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+3592,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+3593,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+3594,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+3595,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+3596,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+3597,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+3598,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+3599,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+3600,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+3601,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+3602,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+3603,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+3604,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+3605,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+3606,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+3607,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+3608,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+3609,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+3610,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+3611,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+3612,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+3613,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+3614,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+3615,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+3616,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+3617,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_tag),22);
        bufp->chgBit(oldp+3618,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_valid));
        bufp->chgBit(oldp+3619,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_dirty));
        bufp->chgCData(oldp+3620,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_visit),8);
        bufp->chgIData(oldp+3621,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_tag),22);
        bufp->chgBit(oldp+3622,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_valid));
        bufp->chgBit(oldp+3623,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_dirty));
        bufp->chgCData(oldp+3624,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_visit),8);
        bufp->chgIData(oldp+3625,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_tag),22);
        bufp->chgBit(oldp+3626,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_valid));
        bufp->chgBit(oldp+3627,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_dirty));
        bufp->chgCData(oldp+3628,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_visit),8);
        bufp->chgIData(oldp+3629,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_tag),22);
        bufp->chgBit(oldp+3630,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_valid));
        bufp->chgBit(oldp+3631,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_dirty));
        bufp->chgCData(oldp+3632,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_visit),8);
        bufp->chgIData(oldp+3633,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_tag),22);
        bufp->chgBit(oldp+3634,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_valid));
        bufp->chgBit(oldp+3635,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_dirty));
        bufp->chgCData(oldp+3636,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_visit),8);
        bufp->chgIData(oldp+3637,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_tag),22);
        bufp->chgBit(oldp+3638,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_valid));
        bufp->chgBit(oldp+3639,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_dirty));
        bufp->chgCData(oldp+3640,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_visit),8);
        bufp->chgIData(oldp+3641,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_tag),22);
        bufp->chgBit(oldp+3642,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_valid));
        bufp->chgBit(oldp+3643,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_dirty));
        bufp->chgCData(oldp+3644,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_visit),8);
        bufp->chgIData(oldp+3645,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_tag),22);
        bufp->chgBit(oldp+3646,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_valid));
        bufp->chgBit(oldp+3647,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_dirty));
        bufp->chgCData(oldp+3648,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_visit),8);
        bufp->chgIData(oldp+3649,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_tag),22);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        VL_EXTEND_WQ(127,64, __Vtemp_h5b59ca91__0, vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_data);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_hb8bb06dd__0, __Vtemp_h5b59ca91__0, 
                      (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                                << 3U)));
        VL_EXTEND_WQ(127,64, __Vtemp_h9d535a65__0, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h32f52a8b__0, __Vtemp_h9d535a65__0, 
                      (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out) 
                                << 3U)));
        bufp->chgQData(oldp+3650,((((QData)((IData)(
                                                    ((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                                      ? 
                                                     __Vtemp_hb8bb06dd__0[1U]
                                                      : 
                                                     __Vtemp_h32f52a8b__0[1U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                                                  ? 
                                                                 __Vtemp_hb8bb06dd__0[0U]
                                                                  : 
                                                                 __Vtemp_h32f52a8b__0[0U]))))),64);
        bufp->chgCData(oldp+3652,((0xffU & ((0xffU 
                                             == (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask))
                                             ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask)
                                             : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                                 ? 
                                                (0x7fffU 
                                                 & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out))))
                                                 : 
                                                (0x7fffU 
                                                 & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))))))),8);
        bufp->chgBit(oldp+3653,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                 & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                    & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                       & ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid)
                                           : ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                              & ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_b_valid)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                  & ((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)))))))))));
        bufp->chgQData(oldp+3654,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                        ? 0ULL
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                         ? 0ULL
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                           ? 
                                                          ((3U 
                                                            == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                             ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                              ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                              : 
                                                             ((0U 
                                                               == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                               : 0ULL))))
                                                           : 0ULL)))))))))))),64);
        bufp->chgQData(oldp+3656,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_data
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                        ? 0ULL
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                         ? 0ULL
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                           ? 
                                                          ((3U 
                                                            == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                             ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                              ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                              : 
                                                             ((0U 
                                                               == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                               : 0ULL))))
                                                           : 0ULL)))))))))))),64);
        bufp->chgBit(oldp+3658,((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                      & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)) 
                                     | ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                        & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))) 
                                    | ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt))) 
                                   | ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                      & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))) 
                                  | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))) 
                                 | ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                    & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))))));
        VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__0, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
        VL_EXTEND_WQ(65,64, __Vtemp_hfbd62a2a__0, (4ULL 
                                                   + vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc));
        if (vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap) {
            __Vtemp_hc57a16a0__0[0U] = __Vtemp_hf0c0d54e__0[0U];
            __Vtemp_hc57a16a0__0[1U] = __Vtemp_hf0c0d54e__0[1U];
            __Vtemp_hc57a16a0__0[2U] = __Vtemp_hf0c0d54e__0[2U];
        } else if ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))) {
            __Vtemp_hc57a16a0__0[0U] = __Vtemp_hfbd62a2a__0[0U];
            __Vtemp_hc57a16a0__0[1U] = __Vtemp_hfbd62a2a__0[1U];
            __Vtemp_hc57a16a0__0[2U] = __Vtemp_hfbd62a2a__0[2U];
        } else if (vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_5) {
            __Vtemp_hc57a16a0__0[0U] = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
            __Vtemp_hc57a16a0__0[1U] = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
            __Vtemp_hc57a16a0__0[2U] = vlSelf->myCPU__DOT__datapath__DOT__pc[2U];
        } else {
            __Vtemp_hc57a16a0__0[0U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[0U];
            __Vtemp_hc57a16a0__0[1U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[1U];
            __Vtemp_hc57a16a0__0[2U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[2U];
        }
        bufp->chgWData(oldp+3659,(__Vtemp_hc57a16a0__0),65);
        bufp->chgIData(oldp+3662,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                      | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                     | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                    ? 0x13U : vlSelf->myCPU__DOT__datapath__DOT___inst_T_7)),32);
        bufp->chgCData(oldp+3663,((0x1fU & ((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                                | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                               | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                              | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                              ? 0x13U
                                              : vlSelf->myCPU__DOT__datapath__DOT___inst_T_7) 
                                            >> 7U))),5);
        bufp->chgQData(oldp+3664,(((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                    ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                                    : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_34)),64);
        bufp->chgQData(oldp+3666,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                      & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                     & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                        == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                    & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                    ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                    : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)),64);
        bufp->chgBit(oldp+3668,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                                 & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)))))));
        bufp->chgQData(oldp+3669,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                     ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                        + (QData)((IData)(
                                                          (0x3fffffffU 
                                                           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                     : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
                                   << 2U)),64);
        bufp->chgQData(oldp+3671,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                     ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                                        + (QData)((IData)(
                                                          (0x3fffffffU 
                                                           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                     : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
                                   << 2U)),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3673,((1U & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache.io_cpu_response_ready)) 
                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall)))));
        bufp->chgIData(oldp+3674,(vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U]),32);
        bufp->chgBit(oldp+3675,(vlSymsp->TOP__myCPU__DOT__icache.io_cpu_response_ready));
        bufp->chgIData(oldp+3676,((IData)(vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T)),32);
        bufp->chgBit(oldp+3677,(vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_rw));
        bufp->chgBit(oldp+3678,(vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_valid));
        bufp->chgBit(oldp+3679,(vlSelf->myCPU__DOT__arb_io_icache_ar_ready));
        bufp->chgBit(oldp+3680,(vlSelf->myCPU__DOT__arb_io_icache_r_valid));
        bufp->chgBit(oldp+3681,(vlSelf->myCPU__DOT__arb_io_dcache_aw_ready));
        bufp->chgBit(oldp+3682,(vlSelf->myCPU__DOT__arb_io_dcache_w_ready));
        bufp->chgBit(oldp+3683,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_bits_last));
        bufp->chgBit(oldp+3684,(vlSelf->myCPU__DOT__arb_io_dcache_b_valid));
        bufp->chgBit(oldp+3685,(vlSelf->myCPU__DOT__arb_io_dcache_ar_ready));
        bufp->chgBit(oldp+3686,(vlSelf->myCPU__DOT__arb_io_dcache_r_valid));
        bufp->chgQData(oldp+3687,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A),64);
        bufp->chgQData(oldp+3689,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B),64);
        bufp->chgQData(oldp+3691,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out),64);
        bufp->chgQData(oldp+3693,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum),64);
        bufp->chgQData(oldp+3695,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1),64);
        bufp->chgQData(oldp+3697,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2),64);
        bufp->chgBit(oldp+3699,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen));
        bufp->chgCData(oldp+3700,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask),4);
        bufp->chgBit(oldp+3701,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign));
        bufp->chgBit(oldp+3702,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign));
        bufp->chgQData(oldp+3703,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue),64);
        bufp->chgQData(oldp+3705,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec),64);
        bufp->chgBit(oldp+3707,(vlSelf->myCPU__DOT__datapath__DOT__stall));
        bufp->chgBit(oldp+3708,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap));
        bufp->chgBit(oldp+3709,(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall));
        bufp->chgBit(oldp+3710,(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken));
        bufp->chgBit(oldp+3711,(vlSelf->myCPU__DOT__datapath__DOT__flush_fd));
        bufp->chgBit(oldp+3712,(vlSelf->myCPU__DOT__datapath__DOT__flush_de));
        bufp->chgBit(oldp+3713,(vlSelf->myCPU__DOT__datapath__DOT__flush_em));
        bufp->chgBit(oldp+3714,(vlSelf->myCPU__DOT__datapath__DOT__flush_mw));
        bufp->chgQData(oldp+3715,(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard),64);
        bufp->chgQData(oldp+3717,(vlSelf->myCPU__DOT__datapath__DOT__A_data),64);
        bufp->chgQData(oldp+3719,(vlSelf->myCPU__DOT__datapath__DOT__B_data),64);
        bufp->chgCData(oldp+3721,(vlSelf->myCPU__DOT__datapath__DOT__st_mask),8);
        bufp->chgCData(oldp+3722,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt),6);
        bufp->chgQData(oldp+3723,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum),64);
        bufp->chgQData(oldp+3725,((((QData)((IData)(
                                                    vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))),64);
        bufp->chgBit(oldp+3727,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq));
        bufp->chgBit(oldp+3728,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))));
        bufp->chgBit(oldp+3729,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt));
        bufp->chgBit(oldp+3730,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))));
        bufp->chgBit(oldp+3731,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu));
        bufp->chgBit(oldp+3732,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))));
        bufp->chgBit(oldp+3733,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc));
        bufp->chgQData(oldp+3734,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause),63);
        bufp->chgBit(oldp+3736,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS));
        bufp->chgQData(oldp+3737,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause),64);
        bufp->chgCData(oldp+3739,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS)
                                    ? 1U : 3U)),2);
        bufp->chgCData(oldp+3740,((7U & (vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
                                         >> 7U))),3);
        bufp->chgBit(oldp+3741,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_cache_req_we));
        bufp->chgWData(oldp+3742,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_data_write_data),1024);
        bufp->chgBit(oldp+3774,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_cache_req_we));
        bufp->chgWData(oldp+3775,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_data_write_data),1024);
        bufp->chgBit(oldp+3807,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_cache_req_we));
        bufp->chgWData(oldp+3808,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_data_write_data),1024);
        bufp->chgBit(oldp+3840,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_cache_req_we));
        bufp->chgWData(oldp+3841,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_data_write_data),1024);
        bufp->chgQData(oldp+3873,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1),64);
        bufp->chgQData(oldp+3875,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0),64);
        bufp->chgQData(oldp+3877,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3),64);
        bufp->chgQData(oldp+3879,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2),64);
        bufp->chgQData(oldp+3881,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5),64);
        bufp->chgQData(oldp+3883,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4),64);
        bufp->chgQData(oldp+3885,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7),64);
        bufp->chgQData(oldp+3887,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6),64);
        __Vtemp_h5c328a0a__0[0U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0);
        __Vtemp_h5c328a0a__0[1U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0 
                                            >> 0x20U));
        __Vtemp_h5c328a0a__0[2U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1);
        __Vtemp_h5c328a0a__0[3U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1 
                                            >> 0x20U));
        __Vtemp_h5c328a0a__0[4U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2);
        __Vtemp_h5c328a0a__0[5U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2 
                                            >> 0x20U));
        __Vtemp_h5c328a0a__0[6U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3);
        __Vtemp_h5c328a0a__0[7U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3 
                                            >> 0x20U));
        __Vtemp_h5c328a0a__0[8U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4);
        __Vtemp_h5c328a0a__0[9U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4 
                                            >> 0x20U));
        __Vtemp_h5c328a0a__0[0xaU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5);
        __Vtemp_h5c328a0a__0[0xbU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5 
                                              >> 0x20U));
        __Vtemp_h5c328a0a__0[0xcU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6);
        __Vtemp_h5c328a0a__0[0xdU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6 
                                              >> 0x20U));
        __Vtemp_h5c328a0a__0[0xeU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7);
        __Vtemp_h5c328a0a__0[0xfU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7 
                                              >> 0x20U));
        bufp->chgWData(oldp+3889,(__Vtemp_h5c328a0a__0),512);
        bufp->chgQData(oldp+3905,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_9),64);
        bufp->chgQData(oldp+3907,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_8),64);
        bufp->chgQData(oldp+3909,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_11),64);
        bufp->chgQData(oldp+3911,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_10),64);
        bufp->chgQData(oldp+3913,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_13),64);
        bufp->chgQData(oldp+3915,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_12),64);
        bufp->chgQData(oldp+3917,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_15),64);
        bufp->chgQData(oldp+3919,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_14),64);
        bufp->chgCData(oldp+3921,((7U & (IData)((vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T 
                                                 >> 7U)))),3);
        bufp->chgBit(oldp+3922,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_cache_req_we));
        bufp->chgWData(oldp+3923,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_data_write_data),1024);
        bufp->chgBit(oldp+3955,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_cache_req_we));
        bufp->chgWData(oldp+3956,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_data_write_data),1024);
        bufp->chgBit(oldp+3988,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_cache_req_we));
        bufp->chgWData(oldp+3989,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_data_write_data),1024);
        bufp->chgBit(oldp+4021,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_cache_req_we));
        bufp->chgWData(oldp+4022,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_data_write_data),1024);
        bufp->chgBit(oldp+4054,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__fill_block_en));
        bufp->chgBit(oldp+4055,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__last));
        bufp->chgQData(oldp+4056,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1),64);
        bufp->chgQData(oldp+4058,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0),64);
        bufp->chgQData(oldp+4060,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3),64);
        bufp->chgQData(oldp+4062,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2),64);
        bufp->chgQData(oldp+4064,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5),64);
        bufp->chgQData(oldp+4066,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4),64);
        bufp->chgQData(oldp+4068,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7),64);
        bufp->chgQData(oldp+4070,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6),64);
        __Vtemp_h7af7ad94__0[0U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0);
        __Vtemp_h7af7ad94__0[1U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0 
                                            >> 0x20U));
        __Vtemp_h7af7ad94__0[2U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1);
        __Vtemp_h7af7ad94__0[3U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1 
                                            >> 0x20U));
        __Vtemp_h7af7ad94__0[4U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2);
        __Vtemp_h7af7ad94__0[5U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2 
                                            >> 0x20U));
        __Vtemp_h7af7ad94__0[6U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3);
        __Vtemp_h7af7ad94__0[7U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3 
                                            >> 0x20U));
        __Vtemp_h7af7ad94__0[8U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4);
        __Vtemp_h7af7ad94__0[9U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4 
                                            >> 0x20U));
        __Vtemp_h7af7ad94__0[0xaU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5);
        __Vtemp_h7af7ad94__0[0xbU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5 
                                              >> 0x20U));
        __Vtemp_h7af7ad94__0[0xcU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6);
        __Vtemp_h7af7ad94__0[0xdU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6 
                                              >> 0x20U));
        __Vtemp_h7af7ad94__0[0xeU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7);
        __Vtemp_h7af7ad94__0[0xfU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7 
                                              >> 0x20U));
        bufp->chgWData(oldp+4072,(__Vtemp_h7af7ad94__0),512);
        bufp->chgQData(oldp+4088,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_9),64);
        bufp->chgQData(oldp+4090,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_8),64);
        bufp->chgQData(oldp+4092,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_11),64);
        bufp->chgQData(oldp+4094,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_10),64);
        bufp->chgQData(oldp+4096,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_13),64);
        bufp->chgQData(oldp+4098,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_12),64);
        bufp->chgQData(oldp+4100,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_15),64);
        bufp->chgQData(oldp+4102,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_14),64);
    }
    bufp->chgBit(oldp+4104,(vlSelf->clock));
    bufp->chgBit(oldp+4105,(vlSelf->reset));
    bufp->chgQData(oldp+4106,(vlSelf->io_pc_debug),64);
    bufp->chgIData(oldp+4108,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+4109,(vlSelf->io_start));
    bufp->chgBit(oldp+4110,(vlSelf->io_stall));
    bufp->chgBit(oldp+4111,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+4112,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+4113,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+4114,(vlSelf->io_master_awid),4);
    bufp->chgCData(oldp+4115,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+4116,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+4117,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+4118,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+4119,(vlSelf->io_master_wvalid));
    bufp->chgQData(oldp+4120,(vlSelf->io_master_wdata),64);
    bufp->chgCData(oldp+4122,(vlSelf->io_master_wstrb),8);
    bufp->chgBit(oldp+4123,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+4124,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+4125,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+4126,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+4127,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+4128,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+4129,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+4130,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+4131,(vlSelf->io_master_arid),4);
    bufp->chgCData(oldp+4132,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+4133,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+4134,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+4135,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+4136,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+4137,(vlSelf->io_master_rresp),2);
    bufp->chgQData(oldp+4138,(vlSelf->io_master_rdata),64);
    bufp->chgBit(oldp+4140,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+4141,(vlSelf->io_master_rid),4);
    bufp->chgQData(oldp+4142,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? vlSelf->io_master_rdata
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___io_cpu_response_data_T_70
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->chgQData(oldp+4144,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? vlSelf->io_master_rdata
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___io_cpu_response_data_T_70
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
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
