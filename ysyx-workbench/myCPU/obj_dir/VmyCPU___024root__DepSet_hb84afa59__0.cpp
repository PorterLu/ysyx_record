// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

void VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(QData/*63:0*/ regfile_0, QData/*63:0*/ regfile_1, QData/*63:0*/ regfile_2, QData/*63:0*/ regfile_3, QData/*63:0*/ regfile_4, QData/*63:0*/ regfile_5, QData/*63:0*/ regfile_6, QData/*63:0*/ regfile_7, QData/*63:0*/ regfile_8, QData/*63:0*/ regfile_9, QData/*63:0*/ regfile_10, QData/*63:0*/ regfile_11, QData/*63:0*/ regfile_12, QData/*63:0*/ regfile_13, QData/*63:0*/ regfile_14, QData/*63:0*/ regfile_15, QData/*63:0*/ regfile_16, QData/*63:0*/ regfile_17, QData/*63:0*/ regfile_18, QData/*63:0*/ regfile_19, QData/*63:0*/ regfile_20, QData/*63:0*/ regfile_21, QData/*63:0*/ regfile_22, QData/*63:0*/ regfile_23, QData/*63:0*/ regfile_24, QData/*63:0*/ regfile_25, QData/*63:0*/ regfile_26, QData/*63:0*/ regfile_27, QData/*63:0*/ regfile_28, QData/*63:0*/ regfile_29, QData/*63:0*/ regfile_30, QData/*63:0*/ regfile_31);

VL_INLINE_OPT void VmyCPU___024root___sequent__TOP__0(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->myCPU__DOT__regFile__DOT__reg_31 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_30 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_29 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_28 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_27 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_26 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_25 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_24 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_23 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_22 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_21 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_20 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_14 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_15 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_16 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_17 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_18 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_19 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_0 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_8 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_7 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_6 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_5 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_4 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_1 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_2 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_3 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_9 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_10 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_11 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_12 = 0ULL;
        vlSelf->myCPU__DOT__regFile__DOT__reg_13 = 0ULL;
    } else if (vlSelf->myCPU__DOT__regFile_io_wen) {
        if ((0x1fU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_31 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x1eU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_30 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x1dU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_29 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x1cU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_28 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x1bU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_27 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x1aU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_26 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x19U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_25 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x18U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_24 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x17U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_23 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x16U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_22 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x15U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_21 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x14U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_20 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xeU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_14 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xfU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_15 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x10U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_16 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x11U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_17 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x12U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_18 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0x13U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                                >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_19 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_0 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((8U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_8 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((7U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_7 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((6U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_6 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((5U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_5 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((4U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_4 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((1U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_1 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((2U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_2 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((3U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_3 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((9U == (0x1fU & (vlSelf->myCPU__DOT__instr 
                             >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_9 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xaU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_10 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xbU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_11 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xcU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_12 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
        if ((0xdU == (0x1fU & (vlSelf->myCPU__DOT__instr 
                               >> 7U)))) {
            vlSelf->myCPU__DOT__regFile__DOT__reg_13 
                = vlSelf->myCPU__DOT__regFile_io_wdata;
        }
    }
    vlSelf->myCPU__DOT__pc = (IData)(vlSelf->myCPU__DOT___GEN_0);
    VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(0ULL, vlSelf->myCPU__DOT__regFile__DOT__reg_1, vlSelf->myCPU__DOT__regFile__DOT__reg_2, vlSelf->myCPU__DOT__regFile__DOT__reg_3, vlSelf->myCPU__DOT__regFile__DOT__reg_4, vlSelf->myCPU__DOT__regFile__DOT__reg_5, vlSelf->myCPU__DOT__regFile__DOT__reg_6, vlSelf->myCPU__DOT__regFile__DOT__reg_7, vlSelf->myCPU__DOT__regFile__DOT__reg_8, vlSelf->myCPU__DOT__regFile__DOT__reg_9, vlSelf->myCPU__DOT__regFile__DOT__reg_10, vlSelf->myCPU__DOT__regFile__DOT__reg_11, vlSelf->myCPU__DOT__regFile__DOT__reg_12, vlSelf->myCPU__DOT__regFile__DOT__reg_13, vlSelf->myCPU__DOT__regFile__DOT__reg_14, vlSelf->myCPU__DOT__regFile__DOT__reg_15, vlSelf->myCPU__DOT__regFile__DOT__reg_16, vlSelf->myCPU__DOT__regFile__DOT__reg_17, vlSelf->myCPU__DOT__regFile__DOT__reg_18, vlSelf->myCPU__DOT__regFile__DOT__reg_19, vlSelf->myCPU__DOT__regFile__DOT__reg_20, vlSelf->myCPU__DOT__regFile__DOT__reg_21, vlSelf->myCPU__DOT__regFile__DOT__reg_22, vlSelf->myCPU__DOT__regFile__DOT__reg_23, vlSelf->myCPU__DOT__regFile__DOT__reg_24, vlSelf->myCPU__DOT__regFile__DOT__reg_25, vlSelf->myCPU__DOT__regFile__DOT__reg_26, vlSelf->myCPU__DOT__regFile__DOT__reg_27, vlSelf->myCPU__DOT__regFile__DOT__reg_28, vlSelf->myCPU__DOT__regFile__DOT__reg_29, vlSelf->myCPU__DOT__regFile__DOT__reg_30, vlSelf->myCPU__DOT__regFile__DOT__reg_31);
    vlSelf->io_pc_debug = (QData)((IData)(vlSelf->myCPU__DOT__pc));
}

void VmyCPU___024unit____Vdpiimwrap_pc_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VmyCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask);
void VmyCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void VmyCPU___024root___combo__TOP__0(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___combo__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hcf153522__0;
    VlWide<4>/*127:0*/ __Vtemp_h000cdfec__0;
    VlWide<4>/*127:0*/ __Vtemp_h27b98097__0;
    VlWide<4>/*127:0*/ __Vtemp_h9e395d09__0;
    VlWide<4>/*127:0*/ __Vtemp_ha01e7241__0;
    VlWide<4>/*127:0*/ __Vtemp_ha00eb84c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha01eead0__0;
    VlWide<4>/*127:0*/ __Vtemp_hcfb81aa2__0;
    VlWide<4>/*127:0*/ __Vtemp_hcfe0c66f__0;
    VlWide<4>/*127:0*/ __Vtemp_h000cdfec__1;
    VlWide<4>/*127:0*/ __Vtemp_h9a82830e__0;
    VlWide<4>/*127:0*/ __Vtemp_he2e0e153__0;
    VlWide<4>/*127:0*/ __Vtemp_h003534c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h247610c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h000cdfec__2;
    VlWide<4>/*127:0*/ __Vtemp_hac6fddfe__0;
    VlWide<4>/*127:0*/ __Vtemp_he7104f08__0;
    VlWide<4>/*127:0*/ __Vtemp_heaea44b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h92845ed7__0;
    // Body
    if ((1U & ((~ (IData)(vlSelf->reset)) & (~ (IData)(vlSelf->clock))))) {
        VmyCPU___024unit____Vdpiimwrap_pc_read_TOP____024unit((QData)((IData)(vlSelf->myCPU__DOT__pc)), vlSelf->__Vtask_pc_read__2__rdata);
        vlSelf->myCPU__DOT__mem___05Fpc_data = vlSelf->__Vtask_pc_read__2__rdata;
    }
    if ((1U & (((vlSelf->myCPU__DOT__pc >> 2U) & (~ (IData)(vlSelf->clock))) 
               | ((~ (vlSelf->myCPU__DOT__pc >> 2U)) 
                  & (IData)(vlSelf->clock))))) {
        vlSelf->myCPU__DOT__immGen_io_inst = (IData)(
                                                     (vlSelf->myCPU__DOT__mem___05Fpc_data 
                                                      >> 0x20U));
        vlSelf->myCPU__DOT__instr = (IData)((vlSelf->myCPU__DOT__mem___05Fpc_data 
                                             >> 0x20U));
        vlSelf->myCPU__DOT__control_io_inst = (IData)(
                                                      (vlSelf->myCPU__DOT__mem___05Fpc_data 
                                                       >> 0x20U));
    } else {
        vlSelf->myCPU__DOT__immGen_io_inst = (IData)(vlSelf->myCPU__DOT__mem___05Fpc_data);
        vlSelf->myCPU__DOT__instr = (IData)(vlSelf->myCPU__DOT__mem___05Fpc_data);
        vlSelf->myCPU__DOT__control_io_inst = (IData)(vlSelf->myCPU__DOT__mem___05Fpc_data);
    }
    vlSelf->myCPU__DOT__immGen__DOT__Jimm = (((QData)((IData)(
                                                              ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->myCPU__DOT__immGen_io_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                          >> 9U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                               >> 0x14U)))))))));
    vlSelf->myCPU__DOT__immGen__DOT__Iimm = (((QData)((IData)(
                                                              ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x14U))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_77 = ((0xdU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->myCPU__DOT__instr 
                                                      >> 0xfU)))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0xfU)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0xfU)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0xfU)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->myCPU__DOT__instr 
                                                            >> 0xfU)))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->myCPU__DOT__instr 
                                                             >> 0xfU)))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->myCPU__DOT__instr 
                                                              >> 0xfU)))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->myCPU__DOT__instr 
                                                               >> 0xfU)))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->myCPU__DOT__instr 
                                                                >> 0xfU)))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->myCPU__DOT__instr 
                                                                 >> 0xfU)))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->myCPU__DOT__instr 
                                                                  >> 0xfU)))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                              : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_110 = ((0xdU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0x14U)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_13
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_12
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_11
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_10
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0x14U)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_9
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->myCPU__DOT__instr 
                                                            >> 0x14U)))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_8
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->myCPU__DOT__instr 
                                                             >> 0x14U)))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_7
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->myCPU__DOT__instr 
                                                              >> 0x14U)))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_6
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->myCPU__DOT__instr 
                                                               >> 0x14U)))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_5
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->myCPU__DOT__instr 
                                                                >> 0x14U)))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_4
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->myCPU__DOT__instr 
                                                                 >> 0x14U)))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_3
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->myCPU__DOT__instr 
                                                                  >> 0x14U)))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_2
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->myCPU__DOT__instr 
                                                                   >> 0x14U)))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_1
                                                               : vlSelf->myCPU__DOT__regFile__DOT__reg_0)))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_692 
        = ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           | ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              | ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 | ((0x1013U == (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    | ((0x101bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                       | ((0x5013U == (0xfc00707fU 
                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                          | ((0x501bU == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                             | ((0x40005013U == (0xfc00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                | ((0x4000501bU == 
                                    (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                                   | ((0x33U == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                      | ((0x3bU == 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         | ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            | ((0x4000003bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               | ((0x1033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  | ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     | ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        | ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                              | ((0x5033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                 | ((0x503bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                    | ((0x40005033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                       | ((0x4000503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                          | ((0x6033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                             | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | (0x100073U 
                                                                                != vlSelf->myCPU__DOT__control_io_inst)))))))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_605 
        = ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))
            ? 0U : ((0x67U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                     ? 0U : ((0x63U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                              ? 0U : ((0x1063U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst))
                                       ? 0U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst))
                                                ? 0U
                                                : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst))
                                                             ? 7U
                                                             : 0U)))))))))))))));
    if ((0x3033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 7U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 4U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x503bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x4000503bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xcU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x200003bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xcU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xdU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x200403bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xdU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xeU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x200603bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xeU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else if ((0x100073U == vlSelf->myCPU__DOT__control_io_inst)) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xfU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401 = 0xbU;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346 = 3U;
    }
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_546 
        = ((0x4063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
            ? 0U : ((0x5063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                     ? 0U : ((0x6063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                              ? 0U : ((0x7063U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst))
                                       ? 0U : ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst))
                                                ? 0U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst))
                                                             ? 4U
                                                             : 0U)))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_198 
        = ((0x3013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           | ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              | ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 | ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    | ((0x1013U == (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                       | ((0x101bU == (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                          | ((0x5013U == (0xfc00707fU 
                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                             | ((0x501bU == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                | ((0x40005013U == 
                                    (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                                   | ((0x4000501bU 
                                       == (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                      | ((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         | ((0x3bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            | ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  | ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     | ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        | ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           | ((0x3033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                              | ((0x4033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                 | ((0x5033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                    | ((0x503bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                       | ((0x40005033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                          | ((0x4000503bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                             | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                                | (0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->myCPU__DOT__control_io_inst))))))))))))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_244 
        = ((0x4000501bU != (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           & ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              | ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 | ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    | ((0x4000003bU == (0xfe00707fU 
                                        & vlSelf->myCPU__DOT__control_io_inst)) 
                       | ((0x1033U == (0xfe00707fU 
                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                          | ((0x103bU == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                             | ((0x2033U == (0xfe00707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                | ((0x3033U == (0xfe00707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                      | ((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         | ((0x503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            | ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               | ((0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  | ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     | ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        | ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           | ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                                              | ((0x2004033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                 | ((0x200403bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                    | ((0x2006033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                       | (0x200603bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->myCPU__DOT__control_io_inst)))))))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_292 
        = ((0x2033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))
            ? 0U : ((0x3033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))
                     ? 0U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->myCPU__DOT__control_io_inst))
                              ? 0U : ((0x5033U == (0xfe00707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst))
                                       ? 0U : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst))
                                                ? 1U
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2004033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2006033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_90 = ((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->myCPU__DOT__instr 
                                                      >> 0xfU)))
                                                  ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                  : 
                                                 ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0xfU)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0xfU)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0xfU)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->myCPU__DOT__instr 
                                                            >> 0xfU)))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->myCPU__DOT__instr 
                                                             >> 0xfU)))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->myCPU__DOT__instr 
                                                              >> 0xfU)))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->myCPU__DOT__instr 
                                                               >> 0xfU)))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->myCPU__DOT__instr 
                                                                >> 0xfU)))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->myCPU__DOT__instr 
                                                                 >> 0xfU)))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->myCPU__DOT__instr 
                                                                  >> 0xfU)))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                              : vlSelf->myCPU__DOT__regFile__DOT___GEN_77)))))))))))));
    vlSelf->myCPU__DOT__regFile__DOT___GEN_123 = ((0x1aU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0x14U)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_26
                                                   : 
                                                  ((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_25
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_24
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_23
                                                      : 
                                                     ((0x16U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0x14U)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_22
                                                       : 
                                                      ((0x15U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->myCPU__DOT__instr 
                                                            >> 0x14U)))
                                                        ? vlSelf->myCPU__DOT__regFile__DOT__reg_21
                                                        : 
                                                       ((0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->myCPU__DOT__instr 
                                                             >> 0x14U)))
                                                         ? vlSelf->myCPU__DOT__regFile__DOT__reg_20
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->myCPU__DOT__instr 
                                                              >> 0x14U)))
                                                          ? vlSelf->myCPU__DOT__regFile__DOT__reg_19
                                                          : 
                                                         ((0x12U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->myCPU__DOT__instr 
                                                               >> 0x14U)))
                                                           ? vlSelf->myCPU__DOT__regFile__DOT__reg_18
                                                           : 
                                                          ((0x11U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->myCPU__DOT__instr 
                                                                >> 0x14U)))
                                                            ? vlSelf->myCPU__DOT__regFile__DOT__reg_17
                                                            : 
                                                           ((0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->myCPU__DOT__instr 
                                                                 >> 0x14U)))
                                                             ? vlSelf->myCPU__DOT__regFile__DOT__reg_16
                                                             : 
                                                            ((0xfU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->myCPU__DOT__instr 
                                                                  >> 0x14U)))
                                                              ? vlSelf->myCPU__DOT__regFile__DOT__reg_15
                                                              : 
                                                             ((0xeU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->myCPU__DOT__instr 
                                                                   >> 0x14U)))
                                                               ? vlSelf->myCPU__DOT__regFile__DOT__reg_14
                                                               : vlSelf->myCPU__DOT__regFile__DOT___GEN_110)))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_709 
        = ((0x6063U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           & ((0x7063U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              & ((3U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 | ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    | ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                       | ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                          | ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                             | ((0x6003U == (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                | ((0x3003U == (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                   | ((0x23U != (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                      & ((0x1023U != 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         & ((0x2023U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            & ((0x3023U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               & ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  | ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     | ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        | ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           | (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_692))))))))))))))))));
    if ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 3U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 2U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x101bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x501bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 8U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x4000501bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 9U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 1U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x4000003bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x103bU == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 6U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 = 5U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 = 0U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_621;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_401;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_346;
    }
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_215 
        = ((0x5063U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           & ((0x6063U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              & ((0x7063U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 & ((3U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    | ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                       | ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                          | ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                             | ((0x5003U == (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                | ((0x6003U == (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                   | ((0x3003U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                      | ((0x23U == 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         | ((0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            | ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               | ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     | ((0x1bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        | ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           | (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_198))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_261 
        = ((0x3003U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
           & ((0x23U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
              & ((0x1023U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                 & ((0x2023U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                    & ((0x3023U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                       & ((0x13U != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                          & ((0x1bU != (0x707fU & vlSelf->myCPU__DOT__control_io_inst)) 
                             & ((0x2013U != (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                & ((0x3013U != (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                   & ((0x4013U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                      & ((0x6013U != 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                         & ((0x7013U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            & ((0x1013U 
                                                != 
                                                (0xfc00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               & ((0x101bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  & ((0x5013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     & ((0x501bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst)) 
                                                        & ((0x40005013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                                           & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_244))))))))))))))))));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_307 
        = ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
            ? 0U : ((0x6013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                     ? 0U : ((0x7013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                              ? 0U : ((0x1013U == (0xfc00707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst))
                                       ? 0U : ((0x101bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst))
                                                ? 1U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x103bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst))
                                                             ? 1U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_292))))))))))))))));
    vlSelf->myCPU__DOT__regFile_io_rdata_0 = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->myCPU__DOT__instr 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0xfU)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0xfU)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0xfU)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                       : vlSelf->myCPU__DOT__regFile__DOT___GEN_90))))));
    vlSelf->myCPU__DOT__regFile_io_rdata_1 = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->myCPU__DOT__instr 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__instr 
                                                       >> 0x14U)))
                                                   ? vlSelf->myCPU__DOT__regFile__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__instr 
                                                        >> 0x14U)))
                                                    ? vlSelf->myCPU__DOT__regFile__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->myCPU__DOT__instr 
                                                         >> 0x14U)))
                                                     ? vlSelf->myCPU__DOT__regFile__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->myCPU__DOT__instr 
                                                          >> 0x14U)))
                                                      ? vlSelf->myCPU__DOT__regFile__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->myCPU__DOT__instr 
                                                           >> 0x14U)))
                                                       ? vlSelf->myCPU__DOT__regFile__DOT__reg_27
                                                       : vlSelf->myCPU__DOT__regFile__DOT___GEN_123))))));
    if ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x4003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x5003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x6003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x3003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 1U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 2U;
    } else if ((0x1023U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 2U;
    } else if ((0x2023U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 2U;
    } else if ((0x3023U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 2U;
    } else if ((0x13U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x1bU == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x2013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 5U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x3013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 7U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else if ((0x4013U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 = 0U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 = 4U;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 = 1U;
    } else {
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_636;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_416;
        vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376 
            = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_361;
    }
    if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_pc_sel = 0U;
        vlSelf->myCPU__DOT__control_io_br_type = 0U;
        vlSelf->myCPU__DOT__control_io_ld_type = 0U;
        vlSelf->myCPU__DOT__control_io_st_type = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_pc_sel = 0U;
        vlSelf->myCPU__DOT__control_io_br_type = 0U;
        vlSelf->myCPU__DOT__control_io_ld_type = 0U;
        vlSelf->myCPU__DOT__control_io_st_type = 0U;
    } else {
        if ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
            vlSelf->myCPU__DOT__control_io_pc_sel = 1U;
            vlSelf->myCPU__DOT__control_io_br_type = 0U;
            vlSelf->myCPU__DOT__control_io_st_type = 0U;
        } else if ((0x67U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
            vlSelf->myCPU__DOT__control_io_pc_sel = 1U;
            vlSelf->myCPU__DOT__control_io_br_type = 0U;
            vlSelf->myCPU__DOT__control_io_st_type = 0U;
        } else {
            vlSelf->myCPU__DOT__control_io_pc_sel = 0U;
            if ((0x63U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
                vlSelf->myCPU__DOT__control_io_br_type = 3U;
                vlSelf->myCPU__DOT__control_io_st_type = 0U;
            } else if ((0x1063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
                vlSelf->myCPU__DOT__control_io_br_type = 6U;
                vlSelf->myCPU__DOT__control_io_st_type = 0U;
            } else {
                vlSelf->myCPU__DOT__control_io_br_type 
                    = ((0x4063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                        ? 2U : ((0x5063U == (0x707fU 
                                             & vlSelf->myCPU__DOT__control_io_inst))
                                 ? 5U : ((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->myCPU__DOT__control_io_inst))
                                          ? 1U : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst))
                                                   ? 4U
                                                   : 0U))));
                vlSelf->myCPU__DOT__control_io_st_type 
                    = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_546;
            }
        }
        vlSelf->myCPU__DOT__control_io_ld_type = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_605;
    }
    vlSelf->myCPU__DOT___st_mask_T_5 = ((1U == (IData)(vlSelf->myCPU__DOT__control_io_st_type))
                                         ? 0xfU : (
                                                   (2U 
                                                    == (IData)(vlSelf->myCPU__DOT__control_io_st_type))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->myCPU__DOT__control_io_st_type))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_322 
        = ((3U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
            ? 0U : ((0x1003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                     ? 0U : ((0x2003U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))
                              ? 0U : ((0x4003U == (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst))
                                       ? 0U : ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst))
                                                ? 0U
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__control_io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__control_io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_307))))))))))))))));
    if ((0x37U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0xbU;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 3U;
    } else if ((0x17U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 3U;
    } else if ((0x6fU == (0x7fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 2U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 4U;
    } else if ((0x67U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 2U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 1U;
    } else if ((0x63U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else if ((0x1063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else if ((0x4063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else if ((0x5063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else if ((0x6063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else if ((0x7063U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
        vlSelf->myCPU__DOT__control_io_wb_sel = 0U;
        vlSelf->myCPU__DOT__control_io_alu_op = 0U;
        vlSelf->myCPU__DOT__control_io_wd_type = 0U;
        vlSelf->myCPU__DOT__control_io_imm_sel = 5U;
    } else {
        if ((3U == (0x707fU & vlSelf->myCPU__DOT__control_io_inst))) {
            vlSelf->myCPU__DOT__control_io_wb_sel = 1U;
            vlSelf->myCPU__DOT__control_io_alu_op = 0U;
            vlSelf->myCPU__DOT__control_io_imm_sel = 1U;
        } else {
            vlSelf->myCPU__DOT__control_io_wb_sel = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_651;
            vlSelf->myCPU__DOT__control_io_alu_op = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_431;
            vlSelf->myCPU__DOT__control_io_imm_sel 
                = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_376;
        }
        vlSelf->myCPU__DOT__control_io_wd_type = vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_322;
    }
    vlSelf->myCPU__DOT__A_data = (((0x37U != (0x7fU 
                                              & vlSelf->myCPU__DOT__control_io_inst)) 
                                   & ((0x17U != (0x7fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                      & ((0x6fU != 
                                          (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                                         & ((0x67U 
                                             == (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            | ((0x63U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               & ((0x1063U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                  & ((0x4063U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__control_io_inst)) 
                                                     & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_215))))))))
                                   ? vlSelf->myCPU__DOT__regFile_io_rdata_0
                                   : (QData)((IData)(vlSelf->myCPU__DOT__pc)));
    vlSelf->myCPU__DOT__brCond__DOT__eq = (vlSelf->myCPU__DOT__regFile_io_rdata_0 
                                           == vlSelf->myCPU__DOT__regFile_io_rdata_1);
    vlSelf->myCPU__DOT__brCond__DOT__lt = VL_LTS_IQQ(64, vlSelf->myCPU__DOT__regFile_io_rdata_0, vlSelf->myCPU__DOT__regFile_io_rdata_1);
    vlSelf->myCPU__DOT__brCond__DOT__ltu = (vlSelf->myCPU__DOT__regFile_io_rdata_0 
                                            < vlSelf->myCPU__DOT__regFile_io_rdata_1);
    vlSelf->myCPU__DOT__brCond_io_taken = (((((((3U 
                                                 == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                                & (IData)(vlSelf->myCPU__DOT__brCond__DOT__eq)) 
                                               | ((6U 
                                                   == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                                  & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__eq)))) 
                                              | ((2U 
                                                  == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                                 & (IData)(vlSelf->myCPU__DOT__brCond__DOT__lt))) 
                                             | ((5U 
                                                 == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                                & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__lt)))) 
                                            | ((1U 
                                                == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                               & (IData)(vlSelf->myCPU__DOT__brCond__DOT__ltu))) 
                                           | ((4U == (IData)(vlSelf->myCPU__DOT__control_io_br_type)) 
                                              & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__ltu))));
    vlSelf->myCPU__DOT__regFile_io_wen = ((((0U == (IData)(vlSelf->myCPU__DOT__control_io_wb_sel)) 
                                            | (2U == (IData)(vlSelf->myCPU__DOT__control_io_wb_sel))) 
                                           | (1U == (IData)(vlSelf->myCPU__DOT__control_io_wb_sel))) 
                                          & ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->myCPU__DOT__control_io_inst)) 
                                             | ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__control_io_inst)) 
                                                | ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->myCPU__DOT__control_io_inst)) 
                                                   | ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__control_io_inst)) 
                                                      | ((0x63U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                                         & ((0x1063U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__control_io_inst)) 
                                                            & ((0x4063U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                                               & ((0x5063U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                  & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_709))))))))));
    vlSelf->myCPU__DOT__immGen__DOT___io_out_T_5 = 
        ((2U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
          ? (((QData)((IData)(((vlSelf->myCPU__DOT__immGen_io_inst 
                                >> 0x1fU) ? 0xffffffffU
                                : 0U))) << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                          >> 7U))))))
          : ((1U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
              ? vlSelf->myCPU__DOT__immGen__DOT__Iimm
              : (0xffffffffffeULL & vlSelf->myCPU__DOT__immGen__DOT__Iimm)));
    vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7 = 
        ((5U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
          ? (((QData)((IData)(((vlSelf->myCPU__DOT__immGen_io_inst 
                                >> 0x1fU) ? 0xffffffffU
                                : 0U))) << 0xdU) | (QData)((IData)(
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
                                                                                >> 7U))))))))
          : (((QData)((IData)((1U & (IData)((vlSelf->myCPU__DOT__immGen__DOT___io_out_T_5 
                                             >> 0x2bU))))) 
              << 0x2cU) | vlSelf->myCPU__DOT__immGen__DOT___io_out_T_5));
    vlSelf->myCPU__DOT__B_data = (((0x37U != (0x7fU 
                                              & vlSelf->myCPU__DOT__control_io_inst)) 
                                   & ((0x17U != (0x7fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                      & ((0x6fU != 
                                          (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                                         & ((0x67U 
                                             != (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                            & ((0x63U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->myCPU__DOT__control_io_inst)) 
                                               & ((0x1063U 
                                                   != 
                                                   (0x707fU 
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
                                                                                & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_261)))))))))))))))))
                                   ? vlSelf->myCPU__DOT__regFile_io_rdata_1
                                   : ((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
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
                                           << 0x26U) 
                                          | (QData)((IData)(
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
                                                  | vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7)))));
    if ((1U == (IData)(vlSelf->myCPU__DOT__control_io_wd_type))) {
        vlSelf->myCPU__DOT__alu_io_A = (QData)((IData)(vlSelf->myCPU__DOT__A_data));
        vlSelf->myCPU__DOT__alu_io_B = (QData)((IData)(vlSelf->myCPU__DOT__B_data));
    } else {
        vlSelf->myCPU__DOT__alu_io_A = vlSelf->myCPU__DOT__A_data;
        vlSelf->myCPU__DOT__alu_io_B = vlSelf->myCPU__DOT__B_data;
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hcf153522__0, VL_DIV_QQQ(64, vlSelf->myCPU__DOT__alu_io_A, vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WQ(128,64, __Vtemp_h000cdfec__0, vlSelf->myCPU__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_h27b98097__0, vlSelf->myCPU__DOT__alu_io_B);
    VL_MUL_W(4, __Vtemp_h9e395d09__0, __Vtemp_h000cdfec__0, __Vtemp_h27b98097__0);
    VL_EXTEND_WQ(127,64, __Vtemp_ha01e7241__0, (vlSelf->myCPU__DOT__alu_io_A 
                                                ^ vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_ha00eb84c__0, (vlSelf->myCPU__DOT__alu_io_A 
                                                | vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_ha01eead0__0, (vlSelf->myCPU__DOT__alu_io_A 
                                                & vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_hcfb81aa2__0, (vlSelf->myCPU__DOT__alu_io_A 
                                               < vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_hcfe0c66f__0, VL_LTS_IQQ(64, vlSelf->myCPU__DOT__alu_io_A, vlSelf->myCPU__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_h000cdfec__1, vlSelf->myCPU__DOT__alu_io_A);
    vlSelf->myCPU__DOT__alu__DOT__shamt = (0x3fU & 
                                           ((1U == (IData)(vlSelf->myCPU__DOT__control_io_wd_type))
                                             ? (0x1fU 
                                                & (IData)(vlSelf->myCPU__DOT__alu_io_B))
                                             : (IData)(vlSelf->myCPU__DOT__alu_io_B)));
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h9a82830e__0, __Vtemp_h000cdfec__1, (IData)(vlSelf->myCPU__DOT__alu__DOT__shamt));
    VL_EXTEND_WQ(127,64, __Vtemp_he2e0e153__0, ((8U 
                                                 == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))
                                                 ? 
                                                (vlSelf->myCPU__DOT__alu_io_A 
                                                 >> (IData)(vlSelf->myCPU__DOT__alu__DOT__shamt))
                                                 : 
                                                ((9U 
                                                  == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))
                                                  ? 
                                                 VL_SHIFTRS_QQI(64,64,6, 
                                                                ((1U 
                                                                  == (IData)(vlSelf->myCPU__DOT__control_io_wd_type))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->myCPU__DOT__alu_io_A 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->myCPU__DOT__alu_io_A)))
                                                                  : vlSelf->myCPU__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__alu__DOT__shamt))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))
                                                   ? 
                                                  (vlSelf->myCPU__DOT__alu_io_A 
                                                   - vlSelf->myCPU__DOT__alu_io_B)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))
                                                    ? 
                                                   (vlSelf->myCPU__DOT__alu_io_A 
                                                    + vlSelf->myCPU__DOT__alu_io_B)
                                                    : vlSelf->myCPU__DOT__alu_io_B)))));
    if ((4U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_ha01e7241__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_ha01e7241__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_ha01e7241__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_ha01e7241__0[3U]);
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_ha00eb84c__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_ha00eb84c__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_ha00eb84c__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_ha00eb84c__0[3U]);
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_ha01eead0__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_ha01eead0__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_ha01eead0__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_ha01eead0__0[3U]);
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_hcfb81aa2__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_hcfb81aa2__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_hcfb81aa2__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_hcfb81aa2__0[3U]);
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_hcfe0c66f__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_hcfe0c66f__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_hcfe0c66f__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_hcfe0c66f__0[3U]);
    } else if ((6U == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        __Vtemp_h003534c0__0[0U] = __Vtemp_h9a82830e__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_h9a82830e__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_h9a82830e__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_h9a82830e__0[3U]);
    } else {
        __Vtemp_h003534c0__0[0U] = __Vtemp_he2e0e153__0[0U];
        __Vtemp_h003534c0__0[1U] = __Vtemp_he2e0e153__0[1U];
        __Vtemp_h003534c0__0[2U] = __Vtemp_he2e0e153__0[2U];
        __Vtemp_h003534c0__0[3U] = (0x7fffffffU & __Vtemp_he2e0e153__0[3U]);
    }
    VL_EXTEND_WW(128,127, __Vtemp_h247610c0__0, __Vtemp_h003534c0__0);
    if ((0xdU == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[0U] 
            = __Vtemp_hcf153522__0[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[1U] 
            = __Vtemp_hcf153522__0[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[2U] 
            = __Vtemp_hcf153522__0[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[3U] 
            = __Vtemp_hcf153522__0[3U];
    } else if ((0xcU == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[0U] 
            = __Vtemp_h9e395d09__0[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[1U] 
            = __Vtemp_h9e395d09__0[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[2U] 
            = __Vtemp_h9e395d09__0[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[3U] 
            = __Vtemp_h9e395d09__0[3U];
    } else {
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[0U] 
            = __Vtemp_h247610c0__0[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[1U] 
            = __Vtemp_h247610c0__0[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[2U] 
            = __Vtemp_h247610c0__0[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_46[3U] 
            = __Vtemp_h247610c0__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h000cdfec__2, vlSelf->myCPU__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_hac6fddfe__0, VL_MODDIV_QQQ(64, vlSelf->myCPU__DOT__alu_io_A, vlSelf->myCPU__DOT__alu_io_B));
    if ((0xaU == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U] 
            = __Vtemp_h000cdfec__2[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U] 
            = __Vtemp_h000cdfec__2[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[2U] 
            = __Vtemp_h000cdfec__2[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[3U] 
            = __Vtemp_h000cdfec__2[3U];
    } else if ((0xeU == (IData)(vlSelf->myCPU__DOT__control_io_alu_op))) {
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U] 
            = __Vtemp_hac6fddfe__0[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U] 
            = __Vtemp_hac6fddfe__0[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[2U] 
            = __Vtemp_hac6fddfe__0[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[3U] 
            = __Vtemp_hac6fddfe__0[3U];
    } else {
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U] 
            = vlSelf->myCPU__DOT__alu__DOT___out_T_46[0U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U] 
            = vlSelf->myCPU__DOT__alu__DOT___out_T_46[1U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[2U] 
            = vlSelf->myCPU__DOT__alu__DOT___out_T_46[2U];
        vlSelf->myCPU__DOT__alu__DOT___out_T_50[3U] 
            = vlSelf->myCPU__DOT__alu__DOT___out_T_46[3U];
    }
    vlSelf->myCPU__DOT__alu_io_out = ((1U == (IData)(vlSelf->myCPU__DOT__control_io_wd_type))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U] 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U]))));
    vlSelf->myCPU__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                   ? 0x80000000ULL : 
                                  (((0U == (IData)(vlSelf->myCPU__DOT__control_io_pc_sel)) 
                                    & (~ (IData)(vlSelf->myCPU__DOT__brCond_io_taken)))
                                    ? (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelf->myCPU__DOT__pc)))
                                    : (((1U == (IData)(vlSelf->myCPU__DOT__control_io_pc_sel)) 
                                        | (IData)(vlSelf->myCPU__DOT__brCond_io_taken))
                                        ? vlSelf->myCPU__DOT__alu_io_out
                                        : (QData)((IData)(vlSelf->myCPU__DOT__pc)))));
    if ((((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type)) 
          | (0U != (IData)(vlSelf->myCPU__DOT__control_io_ld_type))) 
         & (~ (IData)(vlSelf->clock)))) {
        if ((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type))) {
            VL_EXTEND_WQ(127,64, __Vtemp_he7104f08__0, vlSelf->myCPU__DOT__regFile_io_rdata_1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp_heaea44b1__0, __Vtemp_he7104f08__0, 
                          (0x38U & ((IData)(vlSelf->myCPU__DOT__alu_io_out) 
                                    << 3U)));
            VmyCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->myCPU__DOT__alu_io_out, 
                                                                     (((QData)((IData)(
                                                                                __Vtemp_heaea44b1__0[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                __Vtemp_heaea44b1__0[0U]))), 
                                                                     (0xffU 
                                                                      & ((0xffU 
                                                                          == (IData)(vlSelf->myCPU__DOT___st_mask_T_5))
                                                                          ? (IData)(vlSelf->myCPU__DOT___st_mask_T_5)
                                                                          : 
                                                                         (0x7fffffU 
                                                                          & ((IData)(vlSelf->myCPU__DOT___st_mask_T_5) 
                                                                             << 
                                                                             (7U 
                                                                              & (IData)(vlSelf->myCPU__DOT__alu_io_out)))))));
        } else {
            VmyCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->myCPU__DOT__alu_io_out, vlSelf->__Vtask_pmem_read__1__rdata);
            vlSelf->myCPU__DOT__mem___05Frdata = vlSelf->__Vtask_pmem_read__1__rdata;
        }
    }
    __Vtemp_h92845ed7__0[0U] = ((IData)((7ULL & vlSelf->myCPU__DOT__alu_io_out)) 
                                << 3U);
    __Vtemp_h92845ed7__0[1U] = (((IData)((7ULL & vlSelf->myCPU__DOT__alu_io_out)) 
                                 >> 0x1dU) | ((IData)(
                                                      ((7ULL 
                                                        & vlSelf->myCPU__DOT__alu_io_out) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h92845ed7__0[2U] = ((IData)(((7ULL & vlSelf->myCPU__DOT__alu_io_out) 
                                         >> 0x20U)) 
                                >> 0x1dU);
    vlSelf->myCPU__DOT__load_data = VL_SHIFTR_QQW(64,64,67, vlSelf->myCPU__DOT__mem___05Frdata, __Vtemp_h92845ed7__0);
    vlSelf->myCPU__DOT__regFile_io_wdata = ((0U == (IData)(vlSelf->myCPU__DOT__control_io_wb_sel))
                                             ? vlSelf->myCPU__DOT__alu_io_out
                                             : ((2U 
                                                 == (IData)(vlSelf->myCPU__DOT__control_io_wb_sel))
                                                 ? (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + vlSelf->myCPU__DOT__pc)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->myCPU__DOT__load_data 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->myCPU__DOT__load_data)))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                   ? (QData)((IData)(vlSelf->myCPU__DOT__load_data))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->myCPU__DOT__load_data 
                                                                  >> 0xfU)))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->myCPU__DOT__load_data)))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->myCPU__DOT__load_data))))
                                                     : 
                                                    ((3U 
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
                                                       : vlSelf->myCPU__DOT__load_data))))))));
}
