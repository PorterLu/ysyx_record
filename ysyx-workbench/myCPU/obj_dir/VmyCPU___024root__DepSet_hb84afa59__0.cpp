// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

void VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(QData/*63:0*/ regfile_0, QData/*63:0*/ regfile_1, QData/*63:0*/ regfile_2, QData/*63:0*/ regfile_3, QData/*63:0*/ regfile_4, QData/*63:0*/ regfile_5, QData/*63:0*/ regfile_6, QData/*63:0*/ regfile_7, QData/*63:0*/ regfile_8, QData/*63:0*/ regfile_9, QData/*63:0*/ regfile_10, QData/*63:0*/ regfile_11, QData/*63:0*/ regfile_12, QData/*63:0*/ regfile_13, QData/*63:0*/ regfile_14, QData/*63:0*/ regfile_15, QData/*63:0*/ regfile_16, QData/*63:0*/ regfile_17, QData/*63:0*/ regfile_18, QData/*63:0*/ regfile_19, QData/*63:0*/ regfile_20, QData/*63:0*/ regfile_21, QData/*63:0*/ regfile_22, QData/*63:0*/ regfile_23, QData/*63:0*/ regfile_24, QData/*63:0*/ regfile_25, QData/*63:0*/ regfile_26, QData/*63:0*/ regfile_27, QData/*63:0*/ regfile_28, QData/*63:0*/ regfile_29, QData/*63:0*/ regfile_30, QData/*63:0*/ regfile_31);
void VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit();

VL_INLINE_OPT void VmyCPU___024root___sequent__TOP__0(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h04ca6241__0;
    VlWide<3>/*95:0*/ __Vtemp_h9befa4df__0;
    VlWide<3>/*95:0*/ __Vtemp_ha3a11d82__0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(0ULL, vlSelf->myCPU__DOT__regFile__DOT__reg_1, vlSelf->myCPU__DOT__regFile__DOT__reg_2, vlSelf->myCPU__DOT__regFile__DOT__reg_3, vlSelf->myCPU__DOT__regFile__DOT__reg_4, vlSelf->myCPU__DOT__regFile__DOT__reg_5, vlSelf->myCPU__DOT__regFile__DOT__reg_6, vlSelf->myCPU__DOT__regFile__DOT__reg_7, vlSelf->myCPU__DOT__regFile__DOT__reg_8, vlSelf->myCPU__DOT__regFile__DOT__reg_9, vlSelf->myCPU__DOT__regFile__DOT__reg_10, vlSelf->myCPU__DOT__regFile__DOT__reg_11, vlSelf->myCPU__DOT__regFile__DOT__reg_12, vlSelf->myCPU__DOT__regFile__DOT__reg_13, vlSelf->myCPU__DOT__regFile__DOT__reg_14, vlSelf->myCPU__DOT__regFile__DOT__reg_15, vlSelf->myCPU__DOT__regFile__DOT__reg_16, vlSelf->myCPU__DOT__regFile__DOT__reg_17, vlSelf->myCPU__DOT__regFile__DOT__reg_18, vlSelf->myCPU__DOT__regFile__DOT__reg_19, vlSelf->myCPU__DOT__regFile__DOT__reg_20, vlSelf->myCPU__DOT__regFile__DOT__reg_21, vlSelf->myCPU__DOT__regFile__DOT__reg_22, vlSelf->myCPU__DOT__regFile__DOT__reg_23, vlSelf->myCPU__DOT__regFile__DOT__reg_24, vlSelf->myCPU__DOT__regFile__DOT__reg_25, vlSelf->myCPU__DOT__regFile__DOT__reg_26, vlSelf->myCPU__DOT__regFile__DOT__reg_27, vlSelf->myCPU__DOT__regFile__DOT__reg_28, vlSelf->myCPU__DOT__regFile__DOT__reg_29, vlSelf->myCPU__DOT__regFile__DOT__reg_30, vlSelf->myCPU__DOT__regFile__DOT__reg_31);
    }
    vlSelf->myCPU__DOT__pc_tmp = vlSelf->myCPU__DOT__pc;
    if (vlSelf->reset) {
        vlSelf->myCPU__DOT__regFile__DOT__reg_0 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_27 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_28 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_29 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_30 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_31 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_14 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_15 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_16 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_17 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_18 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_19 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_20 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_21 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_22 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_23 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_24 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_25 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_26 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_1 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_2 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_3 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_4 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_5 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_6 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_7 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_8 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_9 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_10 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_11 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_12 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_13 = 0ULL;
        vlSelf->myCPU__DOT__pc = 0x80000000ULL;
        vlSelf->myCPU__DOT__instr = 0U;
    } else {
        if (vlSelf->myCPU__DOT__regFile_io_wen) {
            if ((0U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_0 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1bU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_27 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1cU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_28 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1dU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_29 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1eU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_30 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1fU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_31 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xeU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_14 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xfU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_15 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x10U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_16 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x11U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_17 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x12U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_18 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x13U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_19 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x14U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_20 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x15U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_21 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x16U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_22 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x17U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_23 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x18U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_24 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x19U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_25 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0x1aU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_26 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((1U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_1 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((2U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_2 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((3U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_3 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((4U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_4 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((5U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_5 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((6U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_6 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((7U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_7 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((8U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_8 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((9U == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_9 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xaU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_10 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xbU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_11 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xcU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_12 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
            if ((0xdU == (0x1fU & vlSelf->myCPU__DOT___GEN_72))) {
                vlSelf->myCPU__DOT__regFile__DOT__reg_13 
                    = vlSelf->myCPU__DOT__regFile_io_wdata;
            }
        }
        vlSelf->myCPU__DOT__pc = (((0x6fU != (0x7fU 
                                              & vlSelf->myCPU__DOT__instr)) 
                                   & (0x67U != (0x707fU 
                                                & vlSelf->myCPU__DOT__instr)))
                                   ? vlSelf->myCPU__DOT___pc_T_1
                                   : ((0x13U == (0x707fU 
                                                 & vlSelf->myCPU__DOT__instr))
                                       ? 0x80000000ULL
                                       : ((0x17U == 
                                           (0x7fU & vlSelf->myCPU__DOT__instr))
                                           ? vlSelf->myCPU__DOT___pc_remote_T_1
                                           : vlSelf->myCPU__DOT___GEN_50)));
        vlSelf->myCPU__DOT__instr = vlSelf->io_instr;
    }
    vlSelf->io_pc_debug = vlSelf->myCPU__DOT__pc_tmp;
    vlSelf->myCPU__DOT___pc_T_1 = (4ULL + vlSelf->myCPU__DOT__pc);
    vlSelf->io_pc_addr = vlSelf->myCPU__DOT__pc;
    if (((0x13U != (0x707fU & vlSelf->myCPU__DOT__instr)) 
         & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__instr)) 
            & ((0x37U != (0x7fU & vlSelf->myCPU__DOT__instr)) 
               & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__instr)) 
                  & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__instr)) 
                     & ((0x67U != (0x707fU & vlSelf->myCPU__DOT__instr)) 
                        & (0x100073U == vlSelf->myCPU__DOT__instr)))))))) {
        VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit();
    }
    vlSelf->io_wen = ((0x13U != (0x707fU & vlSelf->myCPU__DOT__instr)) 
                      & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__instr)) 
                         & ((0x37U != (0x7fU & vlSelf->myCPU__DOT__instr)) 
                            & (0x3023U == (0x707fU 
                                           & vlSelf->myCPU__DOT__instr)))));
    vlSelf->myCPU__DOT__regFile_io_wen = ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->myCPU__DOT__instr)) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__instr)) 
                                             | ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__instr)) 
                                                | ((0x3023U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__instr)) 
                                                   & ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->myCPU__DOT__instr)) 
                                                      | (0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__instr)))))));
    if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT___GEN_72 = (0x1fU & (vlSelf->myCPU__DOT__instr 
                                                >> 7U));
        vlSelf->myCPU__DOT___GEN_78 = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT___GEN_72 = (0x1fU & (vlSelf->myCPU__DOT__instr 
                                                >> 7U));
        vlSelf->myCPU__DOT___GEN_78 = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT___GEN_72 = (0x1fU & (vlSelf->myCPU__DOT__instr 
                                                >> 7U));
        vlSelf->myCPU__DOT___GEN_78 = 0U;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT___GEN_72 = 0U;
        vlSelf->myCPU__DOT___GEN_78 = (7U & (vlSelf->myCPU__DOT__instr 
                                             >> 0x16U));
    } else {
        vlSelf->myCPU__DOT___GEN_72 = ((0x6fU == (0x7fU 
                                                  & vlSelf->myCPU__DOT__instr))
                                        ? (0x1fU & 
                                           (vlSelf->myCPU__DOT__instr 
                                            >> 7U))
                                        : ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->myCPU__DOT__instr))
                                            ? (0x1fU 
                                               & (vlSelf->myCPU__DOT__instr 
                                                  >> 7U))
                                            : 0U));
        vlSelf->myCPU__DOT___GEN_78 = 0U;
    }
    vlSelf->myCPU__DOT__regFile__DOT___GEN_110 = ((0xdU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_78))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_78))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_78))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_78))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_78))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_78))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_78))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_78))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_78))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_78))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_78))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_78))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->myCPU__DOT___GEN_78))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                               : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_67 = (0x1fU & (vlSelf->myCPU__DOT__instr 
                                                >> 0xfU));
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_67 = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_67 = 0U;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__imm_tmp = (0xfe0U & (vlSelf->myCPU__DOT__instr 
                                                 >> 0x14U));
        vlSelf->myCPU__DOT___GEN_67 = (0x1fU & (vlSelf->myCPU__DOT__instr 
                                                >> 0xfU));
    } else if ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__imm_tmp = (0xfffff000U 
                                       & vlSelf->myCPU__DOT__instr);
        vlSelf->myCPU__DOT___GEN_67 = 0U;
    } else {
        vlSelf->myCPU__DOT__imm_tmp = 0U;
        vlSelf->myCPU__DOT___GEN_67 = ((0x67U == (0x707fU 
                                                  & vlSelf->myCPU__DOT__instr))
                                        ? (0x1fU & 
                                           (vlSelf->myCPU__DOT__instr 
                                            >> 0xfU))
                                        : 0U);
    }
    vlSelf->myCPU__DOT__regFile__DOT___GEN_77 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_67))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_67))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_67))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_67))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_67))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_67))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_67))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_67))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_67))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_67))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_67))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_67))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_67))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                              : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_123 = ((0x1aU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_78))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                   : 
                                                  ((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_78))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_78))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_78))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                      : 
                                                     ((0x16U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_78))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                       : 
                                                      ((0x15U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_78))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                        : 
                                                       ((0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_78))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_78))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                          : 
                                                         ((0x12U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_78))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                           : 
                                                          ((0x11U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_78))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                            : 
                                                           ((0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_78))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                             : 
                                                            ((0xfU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_78))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                              : 
                                                             ((0xeU 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->myCPU__DOT___GEN_78))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                               : vlSelf->myCPU__DOT__regFile__DOT___GEN_110)))))))))))));
    vlSelf->myCPU__DOT___GEN_69 = ((0x13U == (0x707fU 
                                              & vlSelf->myCPU__DOT__instr))
                                    ? (QData)((IData)(
                                                      (vlSelf->myCPU__DOT__instr 
                                                       >> 0x14U)))
                                    : ((0x17U == (0x7fU 
                                                  & vlSelf->myCPU__DOT__instr))
                                        ? (QData)((IData)(
                                                          (vlSelf->myCPU__DOT__instr 
                                                           >> 0xcU)))
                                        : ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__instr))
                                            ? (QData)((IData)(
                                                              (vlSelf->myCPU__DOT__instr 
                                                               >> 0xcU)))
                                            : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__instr))
                                                ? (
                                                   (vlSelf->myCPU__DOT__instr 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0x3ffffffffff000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & vlSelf->myCPU__DOT__imm_tmp))))
                                                    : (QData)((IData)(
                                                                      (0xfffU 
                                                                       & vlSelf->myCPU__DOT__imm_tmp))))
                                                : (QData)((IData)(
                                                                  ((0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->myCPU__DOT__instr))
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
                                                                      & vlSelf->myCPU__DOT__instr))
                                                                     ? 
                                                                    (vlSelf->myCPU__DOT__instr 
                                                                     >> 0x14U)
                                                                     : 0U))))))));
    vlSelf->myCPU__DOT___src2_T_8 = ((1U & (IData)(
                                                   (vlSelf->myCPU__DOT___GEN_69 
                                                    >> 0xbU)))
                                      ? (0xfffffffffffff000ULL 
                                         | (QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->myCPU__DOT___GEN_69)))))
                                      : (QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(vlSelf->myCPU__DOT___GEN_69)))));
    VL_EXTEND_WQ(79,44, __Vtemp_h04ca6241__0, ((QData)((IData)(vlSelf->myCPU__DOT___GEN_69)) 
                                               << 0xcU));
    if ((vlSelf->myCPU__DOT__instr >> 0x1fU)) {
        vlSelf->myCPU__DOT___src1_T_8[0U] = (IData)(
                                                    ((QData)((IData)(vlSelf->myCPU__DOT___GEN_69)) 
                                                     << 0xcU));
        vlSelf->myCPU__DOT___src1_T_8[1U] = (0xffff8000U 
                                             | (IData)(
                                                       (((QData)((IData)(vlSelf->myCPU__DOT___GEN_69)) 
                                                         << 0xcU) 
                                                        >> 0x20U)));
        vlSelf->myCPU__DOT___src1_T_8[2U] = 0x7fffU;
    } else {
        vlSelf->myCPU__DOT___src1_T_8[0U] = __Vtemp_h04ca6241__0[0U];
        vlSelf->myCPU__DOT___src1_T_8[1U] = __Vtemp_h04ca6241__0[1U];
        vlSelf->myCPU__DOT___src1_T_8[2U] = __Vtemp_h04ca6241__0[2U];
    }
    vlSelf->myCPU__DOT__regFile__DOT___GEN_90 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->myCPU__DOT___GEN_67))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_67))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_67))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_67))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_67))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_67))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->myCPU__DOT___GEN_67))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->myCPU__DOT___GEN_67))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->myCPU__DOT___GEN_67))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->myCPU__DOT___GEN_67))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->myCPU__DOT___GEN_67))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->myCPU__DOT___GEN_67))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->myCPU__DOT___GEN_67))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                              : vlSelf->myCPU__DOT__regFile__DOT___GEN_77)))))))))))));
    vlSelf->myCPU__DOT__regFile_io_rdata_0 = ((0U == 
                                               (0x1fU 
                                                & vlSelf->myCPU__DOT___GEN_67))
                                               ? 0ULL
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->myCPU__DOT___GEN_67))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_67))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_67))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->myCPU__DOT___GEN_67))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->myCPU__DOT___GEN_67))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                       : vlSelf->myCPU__DOT__regFile__DOT___GEN_90))))));
    VL_EXTEND_WQ(79,64, __Vtemp_h9befa4df__0, vlSelf->myCPU__DOT__regFile_io_rdata_0);
    VL_EXTEND_WQ(79,64, __Vtemp_ha3a11d82__0, ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__instr))
                                                ? vlSelf->myCPU__DOT__regFile_io_rdata_0
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->myCPU__DOT__instr))
                                                    ? 
                                                   ((vlSelf->myCPU__DOT__instr 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xffffffffffe00000ULL 
                                                     | (QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(vlSelf->myCPU__DOT___GEN_69)))))
                                                     : (QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(vlSelf->myCPU__DOT___GEN_69)))))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__instr))
                                                     ? vlSelf->myCPU__DOT__regFile_io_rdata_0
                                                     : 0ULL))));
    if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__src2 = vlSelf->myCPU__DOT___src2_T_8;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_68[0U] = __Vtemp_h9befa4df__0[0U];
        vlSelf->myCPU__DOT___GEN_68[1U] = __Vtemp_h9befa4df__0[1U];
        vlSelf->myCPU__DOT___GEN_68[2U] = __Vtemp_h9befa4df__0[2U];
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__src2 = 0ULL;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_68[0U] = vlSelf->myCPU__DOT___src1_T_8[0U];
        vlSelf->myCPU__DOT___GEN_68[1U] = vlSelf->myCPU__DOT___src1_T_8[1U];
        vlSelf->myCPU__DOT___GEN_68[2U] = vlSelf->myCPU__DOT___src1_T_8[2U];
    } else if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->myCPU__DOT__src2 = 0ULL;
        vlSelf->io_wdata = 0ULL;
        vlSelf->myCPU__DOT___GEN_68[0U] = vlSelf->myCPU__DOT___src1_T_8[0U];
        vlSelf->myCPU__DOT___GEN_68[1U] = vlSelf->myCPU__DOT___src1_T_8[1U];
        vlSelf->myCPU__DOT___GEN_68[2U] = vlSelf->myCPU__DOT___src1_T_8[2U];
    } else {
        if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
            vlSelf->myCPU__DOT__src2 = ((0U == (0x1fU 
                                                & vlSelf->myCPU__DOT___GEN_78))
                                         ? 0ULL : (
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->myCPU__DOT___GEN_78))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->myCPU__DOT___GEN_78))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                     : 
                                                    ((0x1dU 
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
                                                        : vlSelf->myCPU__DOT__regFile__DOT___GEN_123))))));
            vlSelf->io_wdata = vlSelf->myCPU__DOT__src2;
        } else {
            vlSelf->myCPU__DOT__src2 = ((0x6fU == (0x7fU 
                                                   & vlSelf->myCPU__DOT__instr))
                                         ? 0ULL : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__instr))
                                                    ? vlSelf->myCPU__DOT___src2_T_8
                                                    : 0ULL));
            vlSelf->io_wdata = 0ULL;
        }
        vlSelf->myCPU__DOT___GEN_68[0U] = __Vtemp_ha3a11d82__0[0U];
        vlSelf->myCPU__DOT___GEN_68[1U] = __Vtemp_ha3a11d82__0[1U];
        vlSelf->myCPU__DOT___GEN_68[2U] = __Vtemp_ha3a11d82__0[2U];
    }
    vlSelf->myCPU__DOT___pc_remote_T_1 = (vlSelf->myCPU__DOT__pc 
                                          + (((QData)((IData)(
                                                              vlSelf->myCPU__DOT___GEN_68[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT___GEN_68[0U]))));
    vlSelf->myCPU__DOT___pc_remote_T_5 = ((((QData)((IData)(
                                                            vlSelf->myCPU__DOT___GEN_68[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->myCPU__DOT___GEN_68[0U]))) 
                                          + vlSelf->myCPU__DOT__src2);
    if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = vlSelf->myCPU__DOT___pc_remote_T_5;
        vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = (4ULL + vlSelf->myCPU__DOT__pc);
        vlSelf->myCPU__DOT__regFile_io_wdata = 0ULL;
    } else if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->io_dat_addr = 0ULL;
        vlSelf->myCPU__DOT__dest = (((QData)((IData)(
                                                     vlSelf->myCPU__DOT___GEN_68[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->myCPU__DOT___GEN_68[0U])));
        vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
        vlSelf->io_dat_addr = ((((QData)((IData)(vlSelf->myCPU__DOT___GEN_68[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->myCPU__DOT___GEN_68[0U]))) 
                               + (QData)((IData)(vlSelf->myCPU__DOT___GEN_69)));
        vlSelf->myCPU__DOT__dest = 0ULL;
        vlSelf->myCPU__DOT__regFile_io_wdata = 0ULL;
    } else {
        vlSelf->io_dat_addr = 0ULL;
        if ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__instr))) {
            vlSelf->myCPU__DOT__dest = (4ULL + vlSelf->myCPU__DOT__pc);
            vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
        } else if ((0x67U == (0x707fU & vlSelf->myCPU__DOT__instr))) {
            vlSelf->myCPU__DOT__dest = (4ULL + vlSelf->myCPU__DOT__pc);
            vlSelf->myCPU__DOT__regFile_io_wdata = vlSelf->myCPU__DOT__dest;
        } else {
            vlSelf->myCPU__DOT__dest = 0ULL;
            vlSelf->myCPU__DOT__regFile_io_wdata = 0ULL;
        }
    }
    vlSelf->myCPU__DOT___GEN_50 = ((0x37U == (0x7fU 
                                              & vlSelf->myCPU__DOT__instr))
                                    ? 0x80000000ULL
                                    : ((0x3023U == 
                                        (0x707fU & vlSelf->myCPU__DOT__instr))
                                        ? 0x80000000ULL
                                        : ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->myCPU__DOT__instr))
                                            ? ((((QData)((IData)(
                                                                 vlSelf->myCPU__DOT___GEN_68[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->myCPU__DOT___GEN_68[0U]))) 
                                               + vlSelf->myCPU__DOT__pc)
                                            : ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__instr))
                                                ? (2ULL 
                                                   & vlSelf->myCPU__DOT___pc_remote_T_5)
                                                : 0x80000000ULL))));
}