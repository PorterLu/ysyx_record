// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU___024root.h"

VL_INLINE_OPT void VmyCPU___024root___combo__TOP__0(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_haddca1cb__0;
    // Body
    vlSelf->io_wen = ((0x13U != (0x707fU & vlSelf->io_instr)) 
                      & ((0x17U != (0x7fU & vlSelf->io_instr)) 
                         & ((0x37U != (0x7fU & vlSelf->io_instr)) 
                            & (0x3023U == (0x707fU 
                                           & vlSelf->io_instr)))));
    if ((0x13U == (0x707fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_71 = 0U;
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_61 = (0x1fU & (vlSelf->io_instr 
                                                >> 0xfU));
        vlSelf->myCPU__DOT___GEN_63 = (QData)((IData)(
                                                      (vlSelf->io_instr 
                                                       >> 0x14U)));
    } else if ((0x17U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_71 = 0U;
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_61 = 0U;
        vlSelf->myCPU__DOT___GEN_63 = (QData)((IData)(
                                                      (vlSelf->io_instr 
                                                       >> 0xcU)));
    } else if ((0x37U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_71 = 0U;
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_61 = 0U;
        vlSelf->myCPU__DOT___GEN_63 = (QData)((IData)(
                                                      (vlSelf->io_instr 
                                                       >> 0xcU)));
    } else if ((0x3023U == (0x707fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_71 = (7U & (vlSelf->io_instr 
                                             >> 0x16U));
        vlSelf->myCPU__DOT__imm_tmp = (0xfe0U & (vlSelf->io_instr 
                                                 >> 0x14U));
        vlSelf->myCPU__DOT___GEN_61 = (0x1fU & (vlSelf->io_instr 
                                                >> 0xfU));
        vlSelf->myCPU__DOT___GEN_63 = ((vlSelf->io_instr 
                                        >> 0x1fU) ? 
                                       (0x3ffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (0xfffU 
                                                           & vlSelf->myCPU__DOT__imm_tmp))))
                                        : (QData)((IData)(
                                                          (0xfffU 
                                                           & vlSelf->myCPU__DOT__imm_tmp))));
    } else {
        vlSelf->myCPU__DOT___GEN_71 = 0U;
        if ((0x6fU == (0x7fU & vlSelf->io_instr))) {
            vlSelf->myCPU__DOT__imm_tmp = (0xfffff000U 
                                           & vlSelf->io_instr);
            vlSelf->myCPU__DOT___GEN_61 = 0U;
        } else {
            vlSelf->myCPU__DOT__imm_tmp = 0U;
            vlSelf->myCPU__DOT___GEN_61 = ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->io_instr))
                                            ? (0x1fU 
                                               & (vlSelf->io_instr 
                                                  >> 0xfU))
                                            : 0U);
        }
        vlSelf->myCPU__DOT___GEN_63 = (QData)((IData)(
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->io_instr))
                                                        ? 
                                                       ((0x100000U 
                                                         & (vlSelf->myCPU__DOT__imm_tmp 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->myCPU__DOT__imm_tmp) 
                                                           | ((0x800U 
                                                               & (vlSelf->myCPU__DOT__imm_tmp 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->myCPU__DOT__imm_tmp 
                                                                    >> 0x14U)))))
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_instr))
                                                         ? 
                                                        (vlSelf->io_instr 
                                                         >> 0x14U)
                                                         : 0U))));
    }
    vlSelf->myCPU__DOT___src2_T_8 = ((1U & (IData)(
                                                   (vlSelf->myCPU__DOT___GEN_63 
                                                    >> 0xbU)))
                                      ? (0xfffffffffffff000ULL 
                                         | (QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->myCPU__DOT___GEN_63)))))
                                      : (QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(vlSelf->myCPU__DOT___GEN_63)))));
    VL_EXTEND_WQ(79,44, __Vtemp_haddca1cb__0, ((QData)((IData)(vlSelf->myCPU__DOT___GEN_63)) 
                                               << 0xcU));
    if ((vlSelf->io_instr >> 0x1fU)) {
        vlSelf->myCPU__DOT___src1_T_8[0U] = (IData)(
                                                    ((QData)((IData)(vlSelf->myCPU__DOT___GEN_63)) 
                                                     << 0xcU));
        vlSelf->myCPU__DOT___src1_T_8[1U] = (0xffff8000U 
                                             | (IData)(
                                                       (((QData)((IData)(vlSelf->myCPU__DOT___GEN_63)) 
                                                         << 0xcU) 
                                                        >> 0x20U)));
        vlSelf->myCPU__DOT___src1_T_8[2U] = 0x7fffU;
    } else {
        vlSelf->myCPU__DOT___src1_T_8[0U] = __Vtemp_haddca1cb__0[0U];
        vlSelf->myCPU__DOT___src1_T_8[1U] = __Vtemp_haddca1cb__0[1U];
        vlSelf->myCPU__DOT___src1_T_8[2U] = __Vtemp_haddca1cb__0[2U];
    }
}

VL_INLINE_OPT void VmyCPU___024root___combo__TOP__1(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___combo__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9befa4df__0;
    VlWide<3>/*95:0*/ __Vtemp_hd2aa5648__0;
    // Body
    vlSelf->myCPU__DOT__regFile_io_wen = ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->io_instr)) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->io_instr)) 
                                             | ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->io_instr)) 
                                                | ((0x3023U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->io_instr)) 
                                                   & ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_instr)) 
                                                      | (0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_instr)))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_110 = ((0xdU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_71))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_71))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_71))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_71))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_71))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_71))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_71))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_71))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_71))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_71))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_71))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_71))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->myCPU__DOT___GEN_71))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                               : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_77 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_61))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_61))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_61))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_61))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_61))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_61))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_61))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_61))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_61))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_61))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_61))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_61))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_61))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                              : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_123 = ((0x1aU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_71))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                   : 
                                                  ((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_71))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_71))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_71))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                      : 
                                                     ((0x16U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_71))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                       : 
                                                      ((0x15U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_71))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                        : 
                                                       ((0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_71))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_71))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                          : 
                                                         ((0x12U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_71))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                           : 
                                                          ((0x11U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_71))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                            : 
                                                           ((0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_71))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                             : 
                                                            ((0xfU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_71))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                              : 
                                                             ((0xeU 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->myCPU__DOT___GEN_71))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                               : vlSelf->myCPU__DOT__regFile__DOT___GEN_110)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_90 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_61))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_61))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_61))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_61))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_61))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_61))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_61))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_61))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_61))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_61))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_61))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_61))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_61))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                              : vlSelf->myCPU__DOT__regFile__DOT___GEN_77)))))))))))));
    vlSelf->myCPU__DOT__regFile_io_rdata_0 = ((0U == 
                                               (0x1fU 
                                                & vlSelf->myCPU__DOT___GEN_61))
                                               ? 0ULL
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_61))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_61))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_61))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_61))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_61))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                       : vlSelf->myCPU__DOT__regFile__DOT___GEN_90))))));
    VL_EXTEND_WQ(79,64, __Vtemp_h9befa4df__0, vlSelf->myCPU__DOT__regFile_io_rdata_0);
    VL_EXTEND_WQ(79,64, __Vtemp_hd2aa5648__0, ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_instr))
                                                ? vlSelf->myCPU__DOT__regFile_io_rdata_0
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_instr))
                                                    ? 
                                                   ((vlSelf->io_instr 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xffffffffffe00000ULL 
                                                     | (QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(vlSelf->myCPU__DOT___GEN_63)))))
                                                     : (QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(vlSelf->myCPU__DOT___GEN_63)))))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_instr))
                                                     ? vlSelf->myCPU__DOT__regFile_io_rdata_0
                                                     : 0ULL))));
    if ((0x13U == (0x707fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_66 = (0x1fU & (vlSelf->io_instr 
                                                >> 7U));
        vlSelf->myCPU__DOT__src2 = vlSelf->myCPU__DOT___src2_T_8;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_62[0U] = __Vtemp_h9befa4df__0[0U];
        vlSelf->myCPU__DOT___GEN_62[1U] = __Vtemp_h9befa4df__0[1U];
        vlSelf->myCPU__DOT___GEN_62[2U] = __Vtemp_h9befa4df__0[2U];
    } else if ((0x17U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_66 = (0x1fU & (vlSelf->io_instr 
                                                >> 7U));
        vlSelf->myCPU__DOT__src2 = 0ULL;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_62[0U] = vlSelf->myCPU__DOT___src1_T_8[0U];
        vlSelf->myCPU__DOT___GEN_62[1U] = vlSelf->myCPU__DOT___src1_T_8[1U];
        vlSelf->myCPU__DOT___GEN_62[2U] = vlSelf->myCPU__DOT___src1_T_8[2U];
    } else if ((0x37U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->myCPU__DOT___GEN_66 = (0x1fU & (vlSelf->io_instr 
                                                >> 7U));
        vlSelf->myCPU__DOT__src2 = 0ULL;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_62[0U] = vlSelf->myCPU__DOT___src1_T_8[0U];
        vlSelf->myCPU__DOT___GEN_62[1U] = vlSelf->myCPU__DOT___src1_T_8[1U];
        vlSelf->myCPU__DOT___GEN_62[2U] = vlSelf->myCPU__DOT___src1_T_8[2U];
    } else {
        if ((0x3023U == (0x707fU & vlSelf->io_instr))) {
            vlSelf->myCPU__DOT___GEN_66 = 0U;
            vlSelf->myCPU__DOT__src2 = ((0U == (0x1fU 
                                                & vlSelf->myCPU__DOT___GEN_71))
                                         ? 0ULL : (
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_71))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_71))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                     : 
                                                    ((0x1dU 
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
                                                        : vlSelf->myCPU__DOT__regFile__DOT___GEN_123))))));
            vlSelf->io_wdata = vlSelf->myCPU__DOT__src2;
        } else {
            if ((0x6fU == (0x7fU & vlSelf->io_instr))) {
                vlSelf->myCPU__DOT___GEN_66 = (0x1fU 
                                               & (vlSelf->io_instr 
                                                  >> 7U));
                vlSelf->myCPU__DOT__src2 = 0ULL;
            } else if ((0x67U == (0x707fU & vlSelf->io_instr))) {
                vlSelf->myCPU__DOT___GEN_66 = (0x1fU 
                                               & (vlSelf->io_instr 
                                                  >> 7U));
                vlSelf->myCPU__DOT__src2 = vlSelf->myCPU__DOT___src2_T_8;
            } else {
                vlSelf->myCPU__DOT___GEN_66 = 0U;
                vlSelf->myCPU__DOT__src2 = 0ULL;
            }
            vlSelf->io_wdata = 0ULL;
        }
        vlSelf->myCPU__DOT___GEN_62[0U] = __Vtemp_hd2aa5648__0[0U];
        vlSelf->myCPU__DOT___GEN_62[1U] = __Vtemp_hd2aa5648__0[1U];
        vlSelf->myCPU__DOT___GEN_62[2U] = __Vtemp_hd2aa5648__0[2U];
    }
    vlSelf->myCPU__DOT___pc_remote_T_3 = ((((QData)((IData)(
                                                            vlSelf->myCPU__DOT___GEN_62[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->myCPU__DOT___GEN_62[0U]))) 
                                          + vlSelf->myCPU__DOT__src2);
    if ((0x13U == (0x707fU & vlSelf->io_instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = vlSelf->myCPU__DOT___pc_remote_T_3;
        vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
    } else if ((0x17U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = 0ULL;
        vlSelf->myCPU__DOT__regFile_io_wdata = (vlSelf->myCPU__DOT__pc 
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->myCPU__DOT___GEN_62[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->myCPU__DOT___GEN_62[0U]))));
    } else if ((0x37U == (0x7fU & vlSelf->io_instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = (((QData)((IData)(
                                                     vlSelf->myCPU__DOT___GEN_62[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->myCPU__DOT___GEN_62[0U])));
        vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
    } else if ((0x3023U == (0x707fU & vlSelf->io_instr))) {
        vlSelf->io_dat_addr = ((((QData)((IData)(vlSelf->myCPU__DOT___GEN_62[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->myCPU__DOT___GEN_62[0U]))) 
                               + (QData)((IData)(vlSelf->myCPU__DOT___GEN_63)));
        vlSelf->myCPU__DOT__dest = 0ULL;
        vlSelf->myCPU__DOT__regFile_io_wdata = 0ULL;
    } else {
        vlSelf->io_dat_addr = 0ULL;
        if ((0x6fU == (0x7fU & vlSelf->io_instr))) {
            vlSelf->myCPU__DOT__dest = (4ULL + vlSelf->myCPU__DOT__pc);
            vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
        } else if ((0x67U == (0x707fU & vlSelf->io_instr))) {
            vlSelf->myCPU__DOT__dest = (4ULL + vlSelf->myCPU__DOT__pc);
            vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
        } else {
            vlSelf->myCPU__DOT__dest = 0ULL;
            vlSelf->myCPU__DOT__regFile_io_wdata = 0ULL;
        }
    }
    vlSelf->myCPU__DOT___GEN_46 = ((0x37U == (0x7fU 
                                              & vlSelf->io_instr))
                                    ? 0x80000000ULL
                                    : ((0x3023U == 
                                        (0x707fU & vlSelf->io_instr))
                                        ? 0x80000000ULL
                                        : ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->io_instr))
                                            ? ((((QData)((IData)(
                                                                 vlSelf->myCPU__DOT___GEN_62[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->myCPU__DOT___GEN_62[0U]))) 
                                               + vlSelf->myCPU__DOT__pc)
                                            : ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_instr))
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->myCPU__DOT___pc_remote_T_3)
                                                : 0x80000000ULL))));
}

void VmyCPU___024root___sequent__TOP__0(VmyCPU___024root* vlSelf);

void VmyCPU___024root___eval(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval\n"); );
    // Body
    VmyCPU___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VmyCPU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VmyCPU___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VmyCPU___024root___eval_debug_assertions(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
