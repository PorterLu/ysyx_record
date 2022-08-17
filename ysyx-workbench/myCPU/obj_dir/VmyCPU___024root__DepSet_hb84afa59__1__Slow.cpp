// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

extern const VlWide<32>/*1023:0*/ VmyCPU__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void VmyCPU___024root___settle__TOP__1(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___settle__TOP__1\n"); );
    // Init
    QData/*63:0*/ myCPU__DOT__datapath__DOT___src1_data_T_7;
    VlWide<4>/*127:0*/ myCPU__DOT__datapath__DOT__alu__DOT___out_T_80;
    CData/*0:0*/ myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T;
    QData/*63:0*/ myCPU__DOT__icache__DOT___io_cpu_response_data_T_68;
    CData/*3:0*/ myCPU__DOT__icache__DOT___GEN_1412;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___io_cpu_response_data_T_68;
    CData/*0:0*/ myCPU__DOT__dcache__DOT___GEN_78;
    CData/*0:0*/ myCPU__DOT__dcache__DOT___GEN_83;
    CData/*0:0*/ myCPU__DOT__dcache__DOT___GEN_88;
    CData/*0:0*/ myCPU__DOT__dcache__DOT___GEN_93;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_105;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_111;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___result_T;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___result_T_2;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___result_T_4;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___result_T_6;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1819;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1818;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1821;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1820;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1823;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1822;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1825;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1824;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1827;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1826;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1829;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1828;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1831;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1830;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1833;
    QData/*63:0*/ myCPU__DOT__dcache__DOT___GEN_1832;
    VlWide<32>/*1023:0*/ myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T;
    IData/*31:0*/ myCPU__DOT__dcache__DOT___GEN_864;
    IData/*31:0*/ myCPU__DOT__dcache__DOT___GEN_873;
    IData/*31:0*/ myCPU__DOT__dcache__DOT___GEN_882;
    CData/*3:0*/ myCPU__DOT__dcache__DOT___GEN_1412;
    VlWide<3>/*95:0*/ __Vtemp_h9dc1a9be__0;
    VlWide<3>/*95:0*/ __Vtemp_h3da41009__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0b58f7d__0;
    VlWide<3>/*95:0*/ __Vtemp_h664db615__0;
    VlWide<3>/*95:0*/ __Vtemp_hbde7148f__0;
    VlWide<3>/*95:0*/ __Vtemp_hc8b425cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f0c567e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f1fa24b__0;
    VlWide<4>/*127:0*/ __Vtemp_hef9128c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdee2cf2__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d63f16d__0;
    VlWide<4>/*127:0*/ __Vtemp_h51384543__0;
    VlWide<4>/*127:0*/ __Vtemp_h5162a830__0;
    VlWide<4>/*127:0*/ __Vtemp_h514c3f2e__0;
    VlWide<4>/*127:0*/ __Vtemp_h375ca612__0;
    VlWide<4>/*127:0*/ __Vtemp_h3763b123__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__1;
    VlWide<4>/*127:0*/ __Vtemp_h212409a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f641964__0;
    VlWide<4>/*127:0*/ __Vtemp_h0ce33da7__0;
    VlWide<4>/*127:0*/ __Vtemp_h48201fc5__0;
    VlWide<4>/*127:0*/ __Vtemp_hf037b5c0__2;
    VlWide<4>/*127:0*/ __Vtemp_h7bdfc44d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bda0aa4__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e66f7d5__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1bbea4b__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d52d80c__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0c0d54e__0;
    VlWide<3>/*95:0*/ __Vtemp_hfbd62a2a__0;
    // Body
    vlSelf->myCPU__DOT__icache__DOT__is_match_0 = (
                                                   (vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid));
    vlSelf->myCPU__DOT__icache__DOT__is_match_1 = (
                                                   (vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid));
    vlSelf->myCPU__DOT__icache__DOT__is_match_2 = (
                                                   (vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid));
    vlSelf->myCPU__DOT__icache__DOT__is_match_3 = (
                                                   (vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid));
    vlSelf->myCPU__DOT__dcache__DOT__is_match_3 = (
                                                   (vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid));
    vlSelf->myCPU__DOT__dcache__DOT__is_match_2 = (
                                                   (vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid));
    vlSelf->myCPU__DOT__dcache__DOT__is_match_1 = (
                                                   (vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid));
    vlSelf->myCPU__DOT__dcache__DOT__is_match_0 = (
                                                   (vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag 
                                                    == 
                                                    (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                     >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid));
    myCPU__DOT__icache__DOT___io_cpu_response_data_T_68 
        = ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)
            ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_2_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__icache__DOT___GEN_21))))))
            : ((0xfU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_3_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__icache__DOT___GEN_37)))))));
    vlSelf->myCPU__DOT__icache_io_cpu_response_ready 
        = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                 & ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                     ? (IData)(vlSelf->myCPU__DOT__arb_io_icache_r_valid)
                     : ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                        & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                           & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                              & ((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                 | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3)))))))));
    myCPU__DOT__dcache__DOT___GEN_93 = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3) 
                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid));
    myCPU__DOT__dcache__DOT___GEN_88 = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2) 
                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid));
    myCPU__DOT__dcache__DOT___io_cpu_response_data_T_68 
        = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
            ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__dcache__DOT___GEN_21))))))
            : ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__dcache__DOT___GEN_37)))))));
    myCPU__DOT__dcache__DOT___GEN_83 = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1) 
                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid));
    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                              ? (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) 
                                    & (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)))
                              : ((0xaU != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                 & ((9U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                    & ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid) 
                                       & (0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                              ? (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) 
                                    & (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)))
                              : ((0xaU != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                 & ((9U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                    & ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid) 
                                       & (1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                              ? (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) 
                                    & (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)))
                              : ((0xaU != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                 & ((9U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                    & ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid) 
                                       & (2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                              ? (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) 
                                    & (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)))
                              : ((0xaU != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                 & ((9U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                    & ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid) 
                                       & (3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))))))))))));
    myCPU__DOT__dcache__DOT___GEN_78 = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                        | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid));
    vlSelf->myCPU__DOT__datapath__DOT__dcache_stall 
        = ((((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type)) 
             | (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type))) 
            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable)) 
           & (~ ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                           ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid)
                           : ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                              & ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                  ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_b_valid)
                                  : ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                                     & ((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)))))))))));
    vlSelf->myCPU__DOT__icache__DOT___io_cpu_response_data_T_70 
        = ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0)
            ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_0_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__icache__DOT___GEN_69))))))
            : ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)
                ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1fU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1eU])))
                    : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1dU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1cU])))
                        : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x1aU])))
                            : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x19U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x18U])))
                                : ((0xbU == (0xfU & 
                                             (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x17U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x16U])))
                                    : ((0xaU == (0xfU 
                                                 & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                                    >> 3U)))
                                        ? (((QData)((IData)(
                                                            vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x15U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->myCPU__DOT__icache__DOT__data_mem_1_io_data_read_data[0x14U])))
                                        : vlSelf->myCPU__DOT__icache__DOT___GEN_53))))))
                : myCPU__DOT__icache__DOT___io_cpu_response_data_T_68));
    if ((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
            vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
        } else if (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                      & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                     & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__visit_1 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit;
            vlSelf->myCPU__DOT__icache__DOT__visit_0 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit;
        } else {
            vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
            vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
        }
    } else {
        vlSelf->myCPU__DOT__icache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_0 = 0U;
    }
    vlSelf->myCPU__DOT__icache__DOT__compare_1_0 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & ((IData)(vlSelf->myCPU__DOT__icache__DOT__visit_1) 
                                    > (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_0)))))))))));
    if ((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
            vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
        } else if (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                      & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                     & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__visit_3 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit;
            vlSelf->myCPU__DOT__icache__DOT__visit_2 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit;
        } else {
            vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
            vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
        }
    } else {
        vlSelf->myCPU__DOT__icache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__icache__DOT__visit_2 = 0U;
    }
    vlSelf->myCPU__DOT__icache__DOT__compare_2_3 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & ((IData)(vlSelf->myCPU__DOT__icache__DOT__visit_3) 
                                    > (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_2)))))))))));
    vlSelf->myCPU__DOT__dcache__DOT___io_cpu_response_data_T_70 
        = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
            ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                 >> 3U))) ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU])))
                : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU])))
                    : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU])))
                        : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U])))
                            : ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U])))
                                : ((0xaU == (0xfU & 
                                             (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U])))
                                    : vlSelf->myCPU__DOT__dcache__DOT___GEN_69))))))
            : ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                ? ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                     >> 3U))) ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU])))
                    : ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                         >> 3U))) ? 
                       (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU])))
                        : ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU])))
                            : ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                 >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U])))
                                : ((0xbU == (0xfU & 
                                             (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                              >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U])))
                                    : ((0xaU == (0xfU 
                                                 & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                    >> 3U)))
                                        ? (((QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U])))
                                        : vlSelf->myCPU__DOT__dcache__DOT___GEN_53))))))
                : myCPU__DOT__dcache__DOT___io_cpu_response_data_T_68));
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
            vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
        } else if (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                      & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                     & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                    & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__visit_1 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit;
            vlSelf->myCPU__DOT__dcache__DOT__visit_0 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit;
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
            vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
        }
    } else {
        vlSelf->myCPU__DOT__dcache__DOT__visit_1 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_0 = 0U;
    }
    vlSelf->myCPU__DOT__dcache__DOT__compare_1_0 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_1) 
                                    > (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_0)))))))))));
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
            vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
        } else if (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                      & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                     & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                    & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__visit_3 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit;
            vlSelf->myCPU__DOT__dcache__DOT__visit_2 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit;
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
            vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
        }
    } else {
        vlSelf->myCPU__DOT__dcache__DOT__visit_3 = 0U;
        vlSelf->myCPU__DOT__dcache__DOT__visit_2 = 0U;
    }
    vlSelf->myCPU__DOT__dcache__DOT__compare_2_3 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_3) 
                                    > (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_2)))))))))));
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            if (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) {
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_3) {
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_2) {
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_1) {
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_0) {
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
                } else {
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                        = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
                }
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                    = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            }
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
                = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    } else {
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[1U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[2U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[3U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[4U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[7U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[8U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[9U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU] 
            = VmyCPU__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    myCPU__DOT__dcache__DOT___GEN_105 = ((9U == (0xfU 
                                                 & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                    >> 3U)))
                                          ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__dcache__DOT__response_data[0x13U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__dcache__DOT__response_data[0x12U])))
                                          : ((8U == 
                                              (0xfU 
                                               & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                  >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__response_data[0x11U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__response_data[0x10U])))
                                              : ((7U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                      >> 3U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__response_data[0xfU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xeU])))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0xdU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->myCPU__DOT__dcache__DOT__response_data[0xcU])))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                        >> 3U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->myCPU__DOT__dcache__DOT__response_data[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->myCPU__DOT__dcache__DOT__response_data[0xaU])))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                         >> 3U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->myCPU__DOT__dcache__DOT__response_data[9U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->myCPU__DOT__dcache__DOT__response_data[8U])))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                          >> 3U)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->myCPU__DOT__dcache__DOT__response_data[7U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->myCPU__DOT__dcache__DOT__response_data[6U])))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                           >> 3U)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->myCPU__DOT__dcache__DOT__response_data[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->myCPU__DOT__dcache__DOT__response_data[4U])))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                            >> 3U)))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->myCPU__DOT__dcache__DOT__response_data[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->myCPU__DOT__dcache__DOT__response_data[2U])))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlSelf->myCPU__DOT__dcache__DOT__response_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->myCPU__DOT__dcache__DOT__response_data[0U]))))))))))));
    vlSelf->io_stall = (1U & ((~ (IData)(vlSelf->myCPU__DOT__icache_io_cpu_response_ready)) 
                              | (IData)(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall)));
    vlSelf->myCPU__DOT__datapath__DOT__stall = (1U 
                                                & ((~ (IData)(vlSelf->myCPU__DOT__icache_io_cpu_response_ready)) 
                                                   | (IData)(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall)));
    vlSelf->myCPU__DOT__datapath__DOT___inst_T_7 = 
        ((4U & vlSelf->myCPU__DOT__datapath__DOT__pc[0U])
          ? (IData)((((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                       ? 0ULL : ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                  ? 0ULL : ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                 ? vlSelf->io_master_rdata
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                                       | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                                     ? vlSelf->myCPU__DOT__icache__DOT___io_cpu_response_data_T_70
                                                     : 0ULL)
                                                    : 0ULL))))))) 
                     >> 0x20U)) : (IData)(((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                            ? 0ULL : 
                                           ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                             ? 0ULL
                                             : ((2U 
                                                 == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                  ? vlSelf->io_master_rdata
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                     ? 
                                                    (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                                        | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                                       | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                                      ? vlSelf->myCPU__DOT__icache__DOT___io_cpu_response_data_T_70
                                                      : 0ULL)
                                                     : 0ULL)))))))));
    vlSelf->myCPU__DOT__icache__DOT__max_01_or_23 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & (((IData)(vlSelf->myCPU__DOT__icache__DOT__compare_2_3)
                                      ? (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_3)
                                      : (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_2)) 
                                    > ((IData)(vlSelf->myCPU__DOT__icache__DOT__compare_1_0)
                                        ? (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_1)
                                        : (IData)(vlSelf->myCPU__DOT__icache__DOT__visit_0))))))))))));
    if ((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT__max = (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                                 | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                                 ? 0U
                                                 : 
                                                (((((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid) 
                                                    & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                                  & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))
                                                  ? 
                                                 (((IData)(vlSelf->myCPU__DOT__icache__DOT__max_01_or_23) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->myCPU__DOT__icache__DOT__max_01_or_23)
                                                      ? (IData)(vlSelf->myCPU__DOT__icache__DOT__compare_2_3)
                                                      : (IData)(vlSelf->myCPU__DOT__icache__DOT__compare_1_0)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)
                                                     ? 0U
                                                     : 3U)
                                                    : 2U)
                                                   : 1U)));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = (((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid))
                   : ((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid))));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = (((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid))
                   : ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid))));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = (((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid))
                   : ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid))));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = (((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))
                   : ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))));
        if (((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit))));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit)));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        } else {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
                = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty));
            if ((0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))) {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
                    = (0xffU & 0U);
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
                    = (0x3fffffU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                    >> 0xaU));
            } else {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
                    = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
                    = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
            }
        }
        if (((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit))));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit)));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        } else {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
                = ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty));
            if ((1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))) {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
                    = (0xffU & 0U);
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
                    = (0x3fffffU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                    >> 0xaU));
            } else {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
                    = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
                    = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
            }
        }
        if (((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit))));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit)));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        } else {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
                = ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty));
            if ((2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))) {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
                    = (0xffU & 0U);
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
                    = (0x3fffffU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                    >> 0xaU));
            } else {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
                    = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
                    = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
            }
        }
        if (((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit))));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit)));
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
        } else {
            vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
                = ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                   & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty));
            if ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))) {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
                    = (0xffU & 0U);
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
                    = (0x3fffffU & (vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                                    >> 0xaU));
            } else {
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
                    = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
                vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
                    = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
            }
        }
    } else {
        vlSelf->myCPU__DOT__icache__DOT__max = 0U;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_tag);
    }
    __Vtemp_h9dc1a9be__0[0U] = ((IData)((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out)) 
                                << 3U);
    __Vtemp_h9dc1a9be__0[1U] = (((IData)((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out)) 
                                 >> 0x1dU) | ((IData)(
                                                      ((7ULL 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h9dc1a9be__0[2U] = ((IData)(((7ULL & vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                                         >> 0x20U)) 
                                >> 0x1dU);
    vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
        = VL_SHIFTR_QQW(64,64,67, ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                    ? 0ULL : ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                               ? 0ULL
                                               : ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? vlSelf->io_master_rdata
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                        ? vlSelf->myCPU__DOT__dcache__DOT___io_cpu_response_data_T_70
                                                        : 0ULL)
                                                       : 0ULL))))))), __Vtemp_h9dc1a9be__0);
    vlSelf->myCPU__DOT__dcache__DOT__max_01_or_23 = 
        ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
         & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
            & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
               & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                  & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                     & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                        & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                           & ((~ ((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) 
                              & (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                                    & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                   & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                  & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                 & (((IData)(vlSelf->myCPU__DOT__dcache__DOT__compare_2_3)
                                      ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_3)
                                      : (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_2)) 
                                    > ((IData)(vlSelf->myCPU__DOT__dcache__DOT__compare_1_0)
                                        ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_1)
                                        : (IData)(vlSelf->myCPU__DOT__dcache__DOT__visit_0))))))))))));
    myCPU__DOT__dcache__DOT___GEN_111 = ((0xfU == (0xfU 
                                                   & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                      >> 3U)))
                                          ? (((QData)((IData)(
                                                              vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1fU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1eU])))
                                          : ((0xeU 
                                              == (0xfU 
                                                  & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                     >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1dU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1cU])))
                                              : ((0xdU 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                      >> 3U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1bU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x1aU])))
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->myCPU__DOT__dcache__DOT__response_data[0x19U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->myCPU__DOT__dcache__DOT__response_data[0x18U])))
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                        >> 3U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->myCPU__DOT__dcache__DOT__response_data[0x17U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->myCPU__DOT__dcache__DOT__response_data[0x16U])))
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                                         >> 3U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->myCPU__DOT__dcache__DOT__response_data[0x15U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->myCPU__DOT__dcache__DOT__response_data[0x14U])))
                                                     : myCPU__DOT__dcache__DOT___GEN_105))))));
    vlSelf->myCPU__DOT__datapath__DOT___GEN_2 = (1U 
                                                 & ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)) 
                                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable)));
    vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen 
        = (((((((0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel)) 
                | (2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
               | (1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
              | (3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel))) 
             & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en)) 
            & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable)) 
           & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)));
    vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_5 
        = ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__started)) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__stall));
    vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5 
        = (((QData)((IData)(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)));
    vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_34 
        = ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
            ? (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))
            : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                ? ((((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                    >> 0xfU))) ? 0xffffffffffffULL
                      : 0ULL) << 0x10U) | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)))))
                : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                    ? (QData)((IData)((0xffffU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))))
                    : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                        ? ((((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard 
                                            >> 7U)))
                              ? 0xffffffffffffffULL
                              : 0ULL) << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)))))
                        : ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                            ? (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard))))
                            : vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard)))));
    vlSelf->myCPU__DOT__dcache__DOT___part_6_T_22 = 
        ((0x40U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? ((QData)((IData)((0xffU & (IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                               >> 0x30U))))) 
             << 0x30U) : ((QData)((IData)((0xffU & (IData)(
                                                           (myCPU__DOT__dcache__DOT___GEN_111 
                                                            >> 0x30U))))) 
                          << 0x30U));
    vlSelf->myCPU__DOT__dcache__DOT___part_7_T_22 = 
        ((0x80U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? ((QData)((IData)((0xffU & (IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                               >> 0x38U))))) 
             << 0x38U) : ((QData)((IData)((0xffU & (IData)(
                                                           (myCPU__DOT__dcache__DOT___GEN_111 
                                                            >> 0x38U))))) 
                          << 0x38U));
    vlSelf->myCPU__DOT__dcache__DOT___part_4_T_22 = 
        ((0x10U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? ((QData)((IData)((0xffU & (IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                               >> 0x20U))))) 
             << 0x20U) : ((QData)((IData)((0xffU & (IData)(
                                                           (myCPU__DOT__dcache__DOT___GEN_111 
                                                            >> 0x20U))))) 
                          << 0x20U));
    vlSelf->myCPU__DOT__dcache__DOT___part_5_T_22 = 
        ((0x20U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? ((QData)((IData)((0xffU & (IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                               >> 0x28U))))) 
             << 0x28U) : ((QData)((IData)((0xffU & (IData)(
                                                           (myCPU__DOT__dcache__DOT___GEN_111 
                                                            >> 0x28U))))) 
                          << 0x28U));
    vlSelf->myCPU__DOT__dcache__DOT___part_2_T_22 = 
        ((4U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? (0xff0000U & ((IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                   >> 0x10U)) << 0x10U))
          : (0xff0000U & ((IData)((myCPU__DOT__dcache__DOT___GEN_111 
                                   >> 0x10U)) << 0x10U)));
    vlSelf->myCPU__DOT__dcache__DOT___part_3_T_22 = 
        ((8U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? ((IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                      >> 0x18U)) << 0x18U) : ((IData)(
                                                      (myCPU__DOT__dcache__DOT___GEN_111 
                                                       >> 0x18U)) 
                                              << 0x18U));
    vlSelf->myCPU__DOT__dcache__DOT___part_0_T_22 = 
        (0xffU & ((1U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
                   ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data)
                   : (IData)(myCPU__DOT__dcache__DOT___GEN_111)));
    vlSelf->myCPU__DOT__dcache__DOT___part_1_T_22 = 
        ((2U & (IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_mask))
          ? (0xff00U & ((IData)((vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data 
                                 >> 8U)) << 8U)) : 
         (0xff00U & ((IData)((myCPU__DOT__dcache__DOT___GEN_111 
                              >> 8U)) << 8U)));
    vlSelf->myCPU__DOT__icache__DOT__tag_mem_0_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                             & (((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0)
                                    : (0U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__icache__DOT__tag_mem_1_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                             & (((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)
                                    : (1U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__icache__DOT__tag_mem_2_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                             & (((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)
                                    : (2U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__icache__DOT__tag_mem_3_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state)) 
                             & (((3U != (IData)(vlSelf->myCPU__DOT__icache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3)
                                    : (3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__max)))))))))));
    myCPU__DOT__datapath__DOT___src1_data_T_7 = ((0U 
                                                  == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                                     ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                                                     : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_34))));
    vlSelf->myCPU__DOT__dcache__DOT__max = ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                              ? 0U : 
                                             ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 
                                                     (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                       | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                       ? 0U
                                                       : 
                                                      (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid) 
                                                          & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                                         & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                                        & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid))
                                                        ? 
                                                       (((IData)(vlSelf->myCPU__DOT__dcache__DOT__max_01_or_23) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->myCPU__DOT__dcache__DOT__max_01_or_23)
                                                            ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__compare_2_3)
                                                            : (IData)(vlSelf->myCPU__DOT__dcache__DOT__compare_1_0)))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)
                                                           ? 0U
                                                           : 3U)
                                                          : 2U)
                                                         : 1U)))
                                                      : 0U)))))));
    vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                             & (((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                    : (0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                             & (((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                    : (1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                             & (((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                    : (2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)))))))))));
    vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_cache_req_we 
        = ((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
           & ((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
              & ((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                 & ((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                    & ((4U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                       & ((5U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                          & ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state)) 
                             & (((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                                 & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                    ? (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                    : (3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)))))))))));
    myCPU__DOT__dcache__DOT___GEN_864 = ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                          ? ((1U & 
                                              ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid)) 
                                               | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty))))
                                              ? vlSelf->myCPU__DOT__dcache__DOT__writeback_addr
                                              : ((vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag 
                                                  << 0xaU) 
                                                 | (0x380U 
                                                    & vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg)))
                                          : vlSelf->myCPU__DOT__dcache__DOT__writeback_addr);
    myCPU__DOT__dcache__DOT___result_T = (((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                            ? 0ULL : 
                                           ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                             ? 0ULL
                                             : ((2U 
                                                 == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 
                                                    (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                       | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                      ? 
                                                     ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                       ? 
                                                      ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                        ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_0_T_22))
                                                        : 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                         ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_0_T_22))
                                                         : 
                                                        ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                          ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_0_T_22))
                                                          : 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                           ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_0_T_22))
                                                           : 0ULL))))
                                                       : 0ULL)
                                                      : 0ULL)
                                                     : 0ULL))))))) 
                                          | ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                              ? 0ULL
                                              : ((1U 
                                                  == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                          ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_1_T_22))
                                                          : 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                           ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_1_T_22))
                                                           : 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                            ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_1_T_22))
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                             ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_1_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL))))))));
    vlSelf->myCPU__DOT__datapath__DOT___GEN_54 = ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                   == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))
                                                   ? myCPU__DOT__datapath__DOT___src1_data_T_7
                                                   : 0ULL);
    vlSelf->myCPU__DOT__datapath__DOT___GEN_58 = ((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
                                                   == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))
                                                   ? myCPU__DOT__datapath__DOT___src1_data_T_7
                                                   : 0ULL);
    myCPU__DOT__dcache__DOT___GEN_873 = ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                          ? ((1U & 
                                              ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                               | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty))))
                                              ? myCPU__DOT__dcache__DOT___GEN_864
                                              : ((vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag 
                                                  << 0xaU) 
                                                 | (0x380U 
                                                    & vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg)))
                                          : myCPU__DOT__dcache__DOT___GEN_864);
    myCPU__DOT__dcache__DOT___result_T_2 = ((myCPU__DOT__dcache__DOT___result_T 
                                             | ((0U 
                                                 == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                          ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_2_T_22))
                                                          : 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                           ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_2_T_22))
                                                           : 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                            ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_2_T_22))
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                             ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_2_T_22))
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))) 
                                            | ((0U 
                                                == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                        ? 0ULL
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                         ? 
                                                        (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                            | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                           | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                          ? 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                           ? 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                            ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_3_T_22))
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                             ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_3_T_22))
                                                             : 
                                                            ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                              ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_3_T_22))
                                                              : 
                                                             ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                               ? (QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT___part_3_T_22))
                                                               : 0ULL))))
                                                           : 0ULL)
                                                          : 0ULL)
                                                         : 0ULL))))))));
    vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
        = (((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
              & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
             & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
            & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
            ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
            : vlSelf->myCPU__DOT__datapath__DOT___GEN_56);
    vlSelf->myCPU__DOT__datapath__DOT__A_data = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel)
                                                  ? 
                                                 (((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                                       == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                                   & (0ULL 
                                                      != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                                   : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)
                                                  : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc);
    vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2 
        = ((((IData)(vlSelf->myCPU__DOT__datapath__DOT___T_6) 
             & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr 
                == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
            & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr))
            ? vlSelf->myCPU__DOT__datapath__DOT___GEN_58
            : vlSelf->myCPU__DOT__datapath__DOT___GEN_60);
    myCPU__DOT__dcache__DOT___GEN_882 = ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                          ? ((1U & 
                                              ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                               | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty))))
                                              ? myCPU__DOT__dcache__DOT___GEN_873
                                              : ((vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag 
                                                  << 0xaU) 
                                                 | (0x380U 
                                                    & vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg)))
                                          : myCPU__DOT__dcache__DOT___GEN_873);
    myCPU__DOT__dcache__DOT___result_T_4 = ((myCPU__DOT__dcache__DOT___result_T_2 
                                             | ((0U 
                                                 == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                          ? vlSelf->myCPU__DOT__dcache__DOT___part_4_T_22
                                                          : 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                           ? vlSelf->myCPU__DOT__dcache__DOT___part_4_T_22
                                                           : 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                            ? vlSelf->myCPU__DOT__dcache__DOT___part_4_T_22
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                             ? vlSelf->myCPU__DOT__dcache__DOT___part_4_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))) 
                                            | ((0U 
                                                == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                        ? 0ULL
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                         ? 
                                                        (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                            | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                           | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                          ? 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                           ? 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                            ? vlSelf->myCPU__DOT__dcache__DOT___part_5_T_22
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                             ? vlSelf->myCPU__DOT__dcache__DOT___part_5_T_22
                                                             : 
                                                            ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                              ? vlSelf->myCPU__DOT__dcache__DOT___part_5_T_22
                                                              : 
                                                             ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                               ? vlSelf->myCPU__DOT__dcache__DOT___part_5_T_22
                                                               : 0ULL))))
                                                           : 0ULL)
                                                          : 0ULL)
                                                         : 0ULL))))))));
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq 
        = (vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
           == vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt 
        = VL_LTS_IQQ(64, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu 
        = (vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1 
           < vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    vlSelf->myCPU__DOT__datapath__DOT__B_data = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel)
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2
                                                  : vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm);
    myCPU__DOT__dcache__DOT___result_T_6 = ((myCPU__DOT__dcache__DOT___result_T_4 
                                             | ((0U 
                                                 == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 
                                                      (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                         | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                        | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                        ? 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                         ? 
                                                        ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                          ? vlSelf->myCPU__DOT__dcache__DOT___part_6_T_22
                                                          : 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                           ? vlSelf->myCPU__DOT__dcache__DOT___part_6_T_22
                                                           : 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                            ? vlSelf->myCPU__DOT__dcache__DOT___part_6_T_22
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                             ? vlSelf->myCPU__DOT__dcache__DOT___part_6_T_22
                                                             : 0ULL))))
                                                         : 0ULL)
                                                        : 0ULL)
                                                       : 0ULL)))))))) 
                                            | ((0U 
                                                == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                        ? 0ULL
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                         ? 
                                                        (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                            | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                           | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                          | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                          ? 
                                                         ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                           ? 
                                                          ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                            ? vlSelf->myCPU__DOT__dcache__DOT___part_7_T_22
                                                            : 
                                                           ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                             ? vlSelf->myCPU__DOT__dcache__DOT___part_7_T_22
                                                             : 
                                                            ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                              ? vlSelf->myCPU__DOT__dcache__DOT___part_7_T_22
                                                              : 
                                                             ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                               ? vlSelf->myCPU__DOT__dcache__DOT___part_7_T_22
                                                               : 0ULL))))
                                                           : 0ULL)
                                                          : 0ULL)
                                                         : 0ULL))))))));
    vlSelf->myCPU__DOT__datapath__DOT__brCond_taken 
        = ((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
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
               & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))) 
           & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
    if ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
            = (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__A_data));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_B 
            = (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__B_data));
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
            = vlSelf->myCPU__DOT__datapath__DOT__A_data;
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_B 
            = vlSelf->myCPU__DOT__datapath__DOT__B_data;
    }
    vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum 
        = (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
           + ((1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
               ? (- vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
               : vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        if (((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit))));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit)));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
                = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                    ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty))
                    : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        } else if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & 0U);
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
                = vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                >> 0xaU));
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
                = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        }
        if (((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit))));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit)));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
                = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                    ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1) 
                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty))
                    : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & 0U);
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
                = vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                >> 0xaU));
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
                = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        }
        if (((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit))));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit)));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
                = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                    ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2) 
                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty))
                    : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & 0U);
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
                = vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                >> 0xaU));
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
                = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        }
        if (((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
             & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & ((0U == (0xffU & (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit))))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit)
                             : ((IData)(1U) + (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit))));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        } else if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                             ? 0U : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit)));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
                = ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                    ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3) 
                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty))
                    : (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))) {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & 0U);
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
                = vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                >> 0xaU));
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
                = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
                = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
            vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
                = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        }
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = (((0U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                       ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                          | (IData)(myCPU__DOT__dcache__DOT___GEN_78))
                       : (IData)(myCPU__DOT__dcache__DOT___GEN_78))
                   : ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid))));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = (((1U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                       ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1) 
                          | (IData)(myCPU__DOT__dcache__DOT___GEN_83))
                       : (IData)(myCPU__DOT__dcache__DOT___GEN_83))
                   : ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid))));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = (((2U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                       ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2) 
                          | (IData)(myCPU__DOT__dcache__DOT___GEN_88))
                       : (IData)(myCPU__DOT__dcache__DOT___GEN_88))
                   : ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid))));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = (((3U != (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
               | (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                   ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                       ? ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3) 
                          | (IData)(myCPU__DOT__dcache__DOT___GEN_93))
                       : (IData)(myCPU__DOT__dcache__DOT___GEN_93))
                   : ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max)) 
                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid))));
        vlSelf->myCPU__DOT__dcache__DOT__result = (
                                                   ((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                      | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                     | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                                    | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3)
                                                      ? myCPU__DOT__dcache__DOT___result_T_6
                                                      : 
                                                     ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)
                                                       ? myCPU__DOT__dcache__DOT___result_T_6
                                                       : 
                                                      ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)
                                                        ? myCPU__DOT__dcache__DOT___result_T_6
                                                        : 
                                                       ((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0)
                                                         ? myCPU__DOT__dcache__DOT___result_T_6
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL);
    } else {
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit 
            = (0xffU & (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_visit));
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty 
            = vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty;
        vlSelf->myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag 
            = (0x3fffffU & vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag);
        vlSelf->myCPU__DOT__dcache__DOT__result = 0ULL;
    }
    if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            if (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) {
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_3) {
                    myCPU__DOT__dcache__DOT___GEN_1819 
                        = ((1U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U]))));
                    myCPU__DOT__dcache__DOT___GEN_1818 
                        = ((0U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U]))));
                    myCPU__DOT__dcache__DOT___GEN_1821 
                        = ((3U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U]))));
                    myCPU__DOT__dcache__DOT___GEN_1820 
                        = ((2U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U]))));
                    myCPU__DOT__dcache__DOT___GEN_1823 
                        = ((5U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU]))));
                    myCPU__DOT__dcache__DOT___GEN_1822 
                        = ((4U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U]))));
                    myCPU__DOT__dcache__DOT___GEN_1825 
                        = ((7U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU]))));
                    myCPU__DOT__dcache__DOT___GEN_1824 
                        = ((6U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU]))));
                    myCPU__DOT__dcache__DOT___GEN_1827 
                        = ((9U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U]))));
                    myCPU__DOT__dcache__DOT___GEN_1826 
                        = ((8U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U]))));
                    myCPU__DOT__dcache__DOT___GEN_1829 
                        = ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U]))));
                    myCPU__DOT__dcache__DOT___GEN_1828 
                        = ((0xaU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U]))));
                    myCPU__DOT__dcache__DOT___GEN_1831 
                        = ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU]))));
                    myCPU__DOT__dcache__DOT___GEN_1830 
                        = ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U]))));
                    myCPU__DOT__dcache__DOT___GEN_1833 
                        = ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU]))));
                    myCPU__DOT__dcache__DOT___GEN_1832 
                        = ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU]))));
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_2) {
                    myCPU__DOT__dcache__DOT___GEN_1819 
                        = ((1U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U]))));
                    myCPU__DOT__dcache__DOT___GEN_1818 
                        = ((0U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U]))));
                    myCPU__DOT__dcache__DOT___GEN_1821 
                        = ((3U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U]))));
                    myCPU__DOT__dcache__DOT___GEN_1820 
                        = ((2U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U]))));
                    myCPU__DOT__dcache__DOT___GEN_1823 
                        = ((5U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU]))));
                    myCPU__DOT__dcache__DOT___GEN_1822 
                        = ((4U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U]))));
                    myCPU__DOT__dcache__DOT___GEN_1825 
                        = ((7U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU]))));
                    myCPU__DOT__dcache__DOT___GEN_1824 
                        = ((6U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU]))));
                    myCPU__DOT__dcache__DOT___GEN_1827 
                        = ((9U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U]))));
                    myCPU__DOT__dcache__DOT___GEN_1826 
                        = ((8U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U]))));
                    myCPU__DOT__dcache__DOT___GEN_1829 
                        = ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U]))));
                    myCPU__DOT__dcache__DOT___GEN_1828 
                        = ((0xaU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U]))));
                    myCPU__DOT__dcache__DOT___GEN_1831 
                        = ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU]))));
                    myCPU__DOT__dcache__DOT___GEN_1830 
                        = ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U]))));
                    myCPU__DOT__dcache__DOT___GEN_1833 
                        = ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU]))));
                    myCPU__DOT__dcache__DOT___GEN_1832 
                        = ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU]))));
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_1) {
                    myCPU__DOT__dcache__DOT___GEN_1819 
                        = ((1U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U]))));
                    myCPU__DOT__dcache__DOT___GEN_1818 
                        = ((0U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U]))));
                    myCPU__DOT__dcache__DOT___GEN_1821 
                        = ((3U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U]))));
                    myCPU__DOT__dcache__DOT___GEN_1820 
                        = ((2U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U]))));
                    myCPU__DOT__dcache__DOT___GEN_1823 
                        = ((5U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU]))));
                    myCPU__DOT__dcache__DOT___GEN_1822 
                        = ((4U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U]))));
                    myCPU__DOT__dcache__DOT___GEN_1825 
                        = ((7U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU]))));
                    myCPU__DOT__dcache__DOT___GEN_1824 
                        = ((6U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU]))));
                    myCPU__DOT__dcache__DOT___GEN_1827 
                        = ((9U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U]))));
                    myCPU__DOT__dcache__DOT___GEN_1826 
                        = ((8U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U]))));
                    myCPU__DOT__dcache__DOT___GEN_1829 
                        = ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U]))));
                    myCPU__DOT__dcache__DOT___GEN_1828 
                        = ((0xaU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U]))));
                    myCPU__DOT__dcache__DOT___GEN_1831 
                        = ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU]))));
                    myCPU__DOT__dcache__DOT___GEN_1830 
                        = ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U]))));
                    myCPU__DOT__dcache__DOT___GEN_1833 
                        = ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU]))));
                    myCPU__DOT__dcache__DOT___GEN_1832 
                        = ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU]))));
                } else if (vlSelf->myCPU__DOT__dcache__DOT__is_match_0) {
                    myCPU__DOT__dcache__DOT___GEN_1819 
                        = ((1U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U]))));
                    myCPU__DOT__dcache__DOT___GEN_1818 
                        = ((0U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U]))));
                    myCPU__DOT__dcache__DOT___GEN_1821 
                        = ((3U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U]))));
                    myCPU__DOT__dcache__DOT___GEN_1820 
                        = ((2U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U]))));
                    myCPU__DOT__dcache__DOT___GEN_1823 
                        = ((5U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU]))));
                    myCPU__DOT__dcache__DOT___GEN_1822 
                        = ((4U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U]))));
                    myCPU__DOT__dcache__DOT___GEN_1825 
                        = ((7U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU]))));
                    myCPU__DOT__dcache__DOT___GEN_1824 
                        = ((6U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU]))));
                    myCPU__DOT__dcache__DOT___GEN_1827 
                        = ((9U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U]))));
                    myCPU__DOT__dcache__DOT___GEN_1826 
                        = ((8U == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                           >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U]))));
                    myCPU__DOT__dcache__DOT___GEN_1829 
                        = ((0xbU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U]))));
                    myCPU__DOT__dcache__DOT___GEN_1828 
                        = ((0xaU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U]))));
                    myCPU__DOT__dcache__DOT___GEN_1831 
                        = ((0xdU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU]))));
                    myCPU__DOT__dcache__DOT___GEN_1830 
                        = ((0xcU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U]))));
                    myCPU__DOT__dcache__DOT___GEN_1833 
                        = ((0xfU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU]))));
                    myCPU__DOT__dcache__DOT___GEN_1832 
                        = ((0xeU == (0xfU & (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                                             >> 3U)))
                            ? vlSelf->myCPU__DOT__dcache__DOT__result
                            : (((QData)((IData)(vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU]))));
                } else {
                    myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
                    myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
                }
            } else {
                myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
                myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
            }
        } else {
            myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
            myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
        }
    } else if ((0xaU == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        myCPU__DOT__dcache__DOT___GEN_1819 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1818 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1821 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1820 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1823 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1822 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1825 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1824 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1827 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1826 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1829 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1828 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1831 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1830 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1833 = 0ULL;
        myCPU__DOT__dcache__DOT___GEN_1832 = 0ULL;
    } else {
        myCPU__DOT__dcache__DOT___GEN_1819 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1286;
        myCPU__DOT__dcache__DOT___GEN_1818 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1285;
        myCPU__DOT__dcache__DOT___GEN_1821 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1288;
        myCPU__DOT__dcache__DOT___GEN_1820 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1287;
        myCPU__DOT__dcache__DOT___GEN_1823 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1290;
        myCPU__DOT__dcache__DOT___GEN_1822 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1289;
        myCPU__DOT__dcache__DOT___GEN_1825 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1292;
        myCPU__DOT__dcache__DOT___GEN_1824 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1291;
        myCPU__DOT__dcache__DOT___GEN_1827 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1294;
        myCPU__DOT__dcache__DOT___GEN_1826 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1293;
        myCPU__DOT__dcache__DOT___GEN_1829 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1296;
        myCPU__DOT__dcache__DOT___GEN_1828 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1295;
        myCPU__DOT__dcache__DOT___GEN_1831 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1298;
        myCPU__DOT__dcache__DOT___GEN_1830 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1297;
        myCPU__DOT__dcache__DOT___GEN_1833 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1300;
        myCPU__DOT__dcache__DOT___GEN_1832 = vlSelf->myCPU__DOT__dcache__DOT___GEN_1299;
    }
    VL_EXTEND_WQ(65,33, __Vtemp_h3da41009__0, (0x1ffffffffULL 
                                               & VL_DIVS_QQQ(33, 
                                                             (0x1ffffffffULL 
                                                              & VL_EXTENDS_QI(33,32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A))), 
                                                             (0x1ffffffffULL 
                                                              & VL_EXTENDS_QI(33,32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))));
    VL_EXTENDS_WQ(65,64, __Vtemp_hf0b58f7d__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    __Vtemp_h664db615__0[0U] = __Vtemp_hf0b58f7d__0[0U];
    __Vtemp_h664db615__0[1U] = __Vtemp_hf0b58f7d__0[1U];
    __Vtemp_h664db615__0[2U] = (1U & __Vtemp_hf0b58f7d__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_hbde7148f__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B);
    __Vtemp_hc8b425cc__0[0U] = __Vtemp_hbde7148f__0[0U];
    __Vtemp_hc8b425cc__0[1U] = __Vtemp_hbde7148f__0[1U];
    __Vtemp_hc8b425cc__0[2U] = (1U & __Vtemp_hbde7148f__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h9f0c567e__0, __Vtemp_h664db615__0, __Vtemp_hc8b425cc__0);
    if ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt 
            = (0x3fU & (0x1fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum 
            = (((QData)((IData)(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum)));
        __Vtemp_h4f1fa24b__0[0U] = __Vtemp_h3da41009__0[0U];
        __Vtemp_h4f1fa24b__0[1U] = __Vtemp_h3da41009__0[1U];
        __Vtemp_h4f1fa24b__0[2U] = (1U & __Vtemp_h3da41009__0[2U]);
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt 
            = (0x3fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
        vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum 
            = vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum;
        __Vtemp_h4f1fa24b__0[0U] = __Vtemp_h9f0c567e__0[0U];
        __Vtemp_h4f1fa24b__0[1U] = __Vtemp_h9f0c567e__0[1U];
        __Vtemp_h4f1fa24b__0[2U] = (1U & __Vtemp_h9f0c567e__0[2U]);
    }
    VL_EXTEND_WW(128,65, __Vtemp_hef9128c0__0, __Vtemp_h4f1fa24b__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hf037b5c0__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_hbdee2cf2__0, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B);
    VL_MUL_W(4, __Vtemp_h6d63f16d__0, __Vtemp_hf037b5c0__0, __Vtemp_hbdee2cf2__0);
    VL_EXTEND_WQ(127,64, __Vtemp_h51384543__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                ^ vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_h5162a830__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                | vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_h514c3f2e__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                & vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_h375ca612__0, (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                               < vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WI(127,1, __Vtemp_h3763b123__0, VL_LTS_IQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B));
    VL_EXTEND_WQ(127,64, __Vtemp_hf037b5c0__1, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h212409a7__0, __Vtemp_hf037b5c0__1, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt));
    VL_EXTEND_WQ(127,64, __Vtemp_h1f641964__0, ((8U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                 ? 
                                                (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                 >> (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt))
                                                 : 
                                                ((9U 
                                                  == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                  ? 
                                                 VL_SHIFTRS_QQI(64,64,6, 
                                                                ((1U 
                                                                  == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A)))
                                                                  : vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                   ? 
                                                  (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                   - vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))
                                                    ? 
                                                   (vlSelf->myCPU__DOT__datapath__DOT__alu_io_A 
                                                    + vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)
                                                    : vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)))));
    if ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h51384543__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h51384543__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h51384543__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h51384543__0[3U]);
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h5162a830__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h5162a830__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h5162a830__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h5162a830__0[3U]);
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h514c3f2e__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h514c3f2e__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h514c3f2e__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h514c3f2e__0[3U]);
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h375ca612__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h375ca612__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h375ca612__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h375ca612__0[3U]);
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h3763b123__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h3763b123__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h3763b123__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h3763b123__0[3U]);
    } else if ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h212409a7__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h212409a7__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h212409a7__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h212409a7__0[3U]);
    } else {
        __Vtemp_h0ce33da7__0[0U] = __Vtemp_h1f641964__0[0U];
        __Vtemp_h0ce33da7__0[1U] = __Vtemp_h1f641964__0[1U];
        __Vtemp_h0ce33da7__0[2U] = __Vtemp_h1f641964__0[2U];
        __Vtemp_h0ce33da7__0[3U] = (0x7fffffffU & __Vtemp_h1f641964__0[3U]);
    }
    VL_EXTEND_WW(128,127, __Vtemp_h48201fc5__0, __Vtemp_h0ce33da7__0);
    if ((0xdU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_hef9128c0__0[0U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_hef9128c0__0[1U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_hef9128c0__0[2U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_hef9128c0__0[3U];
    } else if ((0xcU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_h6d63f16d__0[0U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_h6d63f16d__0[1U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_h6d63f16d__0[2U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_h6d63f16d__0[3U];
    } else {
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U] 
            = __Vtemp_h48201fc5__0[0U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U] 
            = __Vtemp_h48201fc5__0[1U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U] 
            = __Vtemp_h48201fc5__0[2U];
        myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U] 
            = __Vtemp_h48201fc5__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hf037b5c0__2, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A);
    VL_EXTEND_WQ(128,64, __Vtemp_h7bdfc44d__0, ((1U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                 ? (QData)((IData)(
                                                                   VL_MODDIVS_III(32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))
                                                 : 
                                                VL_MODDIVS_QQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
    VL_EXTEND_WQ(128,64, __Vtemp_h2bda0aa4__0, ((1U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
                                                 ? (QData)((IData)(
                                                                   VL_DIV_III(32, (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A), (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B))))
                                                 : 
                                                VL_DIV_QQQ(64, vlSelf->myCPU__DOT__datapath__DOT__alu_io_A, vlSelf->myCPU__DOT__datapath__DOT__alu_io_B)));
    if ((0xaU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_hf037b5c0__2[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_hf037b5c0__2[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_hf037b5c0__2[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_hf037b5c0__2[3U];
    } else if ((0xeU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_h7bdfc44d__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_h7bdfc44d__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_h7bdfc44d__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_h7bdfc44d__0[3U];
    } else if ((0xfU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op))) {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = __Vtemp_h2bda0aa4__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = __Vtemp_h2bda0aa4__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = __Vtemp_h2bda0aa4__0[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = __Vtemp_h2bda0aa4__0[3U];
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
            = myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[0U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U] 
            = myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[1U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[2U] 
            = myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[2U];
        vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[3U] 
            = myCPU__DOT__datapath__DOT__alu__DOT___out_T_80[3U];
    }
    vlSelf->myCPU__DOT__datapath__DOT__alu_io_out = 
        ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type))
          ? (((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U] 
                                >> 0x1fU) ? 0xffffffffU
                                : 0U))) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))
          : (((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U]))));
    if (vlSelf->myCPU__DOT__datapath__DOT__stall) {
        vlSelf->myCPU__DOT__datapath__DOT__st_mask 
            = ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type))
                ? 0xfU : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type))
                           ? 3U : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type))
                                    ? 1U : 0xffU)));
        vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_rw 
            = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
        vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_valid 
            = (((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type)) 
                | (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type))) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
        vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T 
            = vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__st_mask 
            = ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                ? 0xfU : ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                           ? 3U : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                                    ? 1U : 0xffU)));
        vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_rw 
            = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
        vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_valid 
            = (((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                | (0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
        vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T 
            = vlSelf->myCPU__DOT__datapath__DOT__alu_io_out;
    }
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_1 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_0 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_3 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_2 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_5 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_4 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_7 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_6 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_9 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_8 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_11 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_10 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_13 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_12 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_15 = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_14 = 0ULL;
    } else {
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_1 
            = myCPU__DOT__dcache__DOT___GEN_1819;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_0 
            = myCPU__DOT__dcache__DOT___GEN_1818;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_3 
            = myCPU__DOT__dcache__DOT___GEN_1821;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_2 
            = myCPU__DOT__dcache__DOT___GEN_1820;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_5 
            = myCPU__DOT__dcache__DOT___GEN_1823;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_4 
            = myCPU__DOT__dcache__DOT___GEN_1822;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_7 
            = myCPU__DOT__dcache__DOT___GEN_1825;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_6 
            = myCPU__DOT__dcache__DOT___GEN_1824;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_9 
            = myCPU__DOT__dcache__DOT___GEN_1827;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_8 
            = myCPU__DOT__dcache__DOT___GEN_1826;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_11 
            = myCPU__DOT__dcache__DOT___GEN_1829;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_10 
            = myCPU__DOT__dcache__DOT___GEN_1828;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_13 
            = myCPU__DOT__dcache__DOT___GEN_1831;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_12 
            = myCPU__DOT__dcache__DOT___GEN_1830;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_15 
            = myCPU__DOT__dcache__DOT___GEN_1833;
        vlSelf->myCPU__DOT__dcache__DOT__cache_data_14 
            = myCPU__DOT__dcache__DOT___GEN_1832;
    }
    vlSelf->myCPU__DOT__dcache__DOT___GEN_1159 = ((0xfU 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                   ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_15
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                    ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_14
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                     ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_13
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                      ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_12
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                       ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_11
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                        ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_10
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                         ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_9
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                          ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_8
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                           ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_7
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                            ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_6
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                             ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_5
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                              ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_4
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                               ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_3
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                                ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_2
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->myCPU__DOT__dcache__DOT__index))
                                                                 ? vlSelf->myCPU__DOT__dcache__DOT__cache_data_1
                                                                 : vlSelf->myCPU__DOT__dcache__DOT__cache_data_0)))))))))))))));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_0);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_0 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_1);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_1 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_2);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_2 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_3);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_3 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_4);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_4 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_5);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_5 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_6);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_6 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_7);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_7 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_8);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_8 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_9);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_9 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_10);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_10 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_11);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_11 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_12);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_12 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_13);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_13 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_14);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_14 
                   >> 0x20U));
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU] 
        = (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_data_15);
    myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU] 
        = (IData)((vlSelf->myCPU__DOT__dcache__DOT__cache_data_15 
                   >> 0x20U));
    if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = vlSelf->myCPU__DOT__dcache__DOT__cpu_request_data;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
              | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
             | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
            if (vlSelf->myCPU__DOT__dcache__DOT__cpu_request_rw) {
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_0) {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
                } else {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
                }
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_1) {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
                } else {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
                }
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_2) {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
                } else {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
                }
                if (vlSelf->myCPU__DOT__dcache__DOT__is_match_3) {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                        = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
                } else {
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
                    vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                        = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
                }
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
            }
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
        }
    } else if ((0xaU == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    } else if ((9U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->io_master_wdata = 0ULL;
        if (vlSelf->myCPU__DOT__arb_io_dcache_r_valid) {
            if ((0U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))) {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
            }
            if ((1U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))) {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
            }
            if ((2U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))) {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
            }
            if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))) {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                    = myCPU__DOT__dcache__DOT___data_mem_0_io_data_write_data_T[0x1fU];
            } else {
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
                vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                    = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
            }
        } else {
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
            vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
                = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
        }
    } else {
        vlSelf->io_master_wdata = ((0xbU == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                    ? 0ULL : ((8U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                               ? ((3U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))
                                                   ? vlSelf->myCPU__DOT__dcache__DOT___GEN_1159
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))
                                                    ? vlSelf->myCPU__DOT__dcache__DOT___GEN_1159
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))
                                                     ? vlSelf->myCPU__DOT__dcache__DOT___GEN_1159
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__replace))
                                                      ? vlSelf->myCPU__DOT__dcache__DOT___GEN_1159
                                                      : 0ULL))))
                                               : 0ULL));
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_0_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_1_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_2_io_data_read_data[0x1fU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[1U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[1U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[2U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[2U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[3U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[3U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[4U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[4U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[5U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[5U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[6U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[6U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[7U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[7U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[8U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[8U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[9U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[9U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xaU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xaU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xbU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xbU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xcU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xcU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xdU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xdU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xeU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xeU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0xfU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0xfU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x10U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x10U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x11U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x11U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x12U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x12U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x13U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x13U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x14U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x14U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x15U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x15U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x16U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x16U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x17U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x17U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x18U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x18U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x19U] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x19U];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1aU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1aU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1bU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1bU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1cU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1cU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1dU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1dU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1eU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1eU];
        vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_write_data[0x1fU] 
            = vlSelf->myCPU__DOT__dcache__DOT__data_mem_3_io_data_read_data[0x1fU];
    }
    __Vtemp_h5e66f7d5__0[0U] = 4U;
    __Vtemp_h5e66f7d5__0[1U] = 0U;
    __Vtemp_h5e66f7d5__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hd1bbea4b__0, __Vtemp_h5e66f7d5__0, vlSelf->myCPU__DOT__datapath__DOT__pc);
    if ((((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel)) 
          & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable)) 
         | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken))) {
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[0U] 
            = ((IData)((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                        >> 1U)) << 1U);
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[1U] 
            = (((IData)((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                         >> 1U)) >> 0x1fU) | ((IData)(
                                                      ((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                                                        >> 1U) 
                                                       >> 0x20U)) 
                                              << 1U));
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[2U] 
            = (1U & ((IData)(((vlSelf->myCPU__DOT__datapath__DOT__alu_io_out 
                               >> 1U) >> 0x20U)) >> 0x1fU));
    } else {
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[0U] 
            = __Vtemp_hd1bbea4b__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[1U] 
            = __Vtemp_hd1bbea4b__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[2U] 
            = (1U & __Vtemp_hd1bbea4b__0[2U]);
    }
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign 
        = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
           & ((~ ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                  | (5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)))) 
              & (((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                  | (4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)))
                  ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)
                  : (((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                      | (0x6003U == (0x707fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type))))
                      ? (0U != (3U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))
                      : ((7U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type)) 
                         & (0U != (7U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign 
        = ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
           & ((3U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
              & ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                  ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)
                  : ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type))
                      ? (0U != (3U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))
                      : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type)) 
                         & (0U != (7U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out))))))));
    myCPU__DOT__dcache__DOT___GEN_1412 = ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                           ? (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                                                 | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                                                | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                                               | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))
                                               ? ((
                                                   ((IData)(vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_valid) 
                                                    & (0x80000000U 
                                                       <= (IData)(vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T))) 
                                                   & (0x88000000U 
                                                      >= (IData)(vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T)))
                                                   ? 7U
                                                   : 0U)
                                               : ((3U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                                       | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty))))
                                                    ? 0xaU
                                                    : 0xbU)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                                    ? 
                                                   ((1U 
                                                     & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_valid)) 
                                                        | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2.io_tag_read_dirty))))
                                                     ? 0xaU
                                                     : 0xbU)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                                     ? 
                                                    ((1U 
                                                      & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_valid)) 
                                                         | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1.io_tag_read_dirty))))
                                                      ? 0xaU
                                                      : 0xbU)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_valid)) 
                                                          | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0.io_tag_read_dirty))))
                                                       ? 0xaU
                                                       : 0xbU)
                                                      : 0U)))))
                                           : ((0xaU 
                                               == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                               ? ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_ar_ready)
                                                   ? 9U
                                                   : 0xaU)
                                               : ((9U 
                                                   == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                   ? 
                                                  ((IData)(vlSelf->io_master_rlast)
                                                    ? 7U
                                                    : 9U)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                    ? 
                                                   ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_aw_ready)
                                                     ? 8U
                                                     : 0xbU)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                     ? 
                                                    ((IData)(vlSelf->myCPU__DOT__dcache__DOT__last)
                                                      ? 0xcU
                                                      : 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))
                                                      ? 
                                                     ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_b_valid)
                                                       ? 0xaU
                                                       : 0xcU)
                                                      : 0U))))));
    if ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__dcache__DOT__refill_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__dcache__DOT__replace;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
            = vlSelf->myCPU__DOT__dcache__DOT__writeback_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1605 
            = ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid)
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__dcache__DOT__refill_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__dcache__DOT__replace;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
            = vlSelf->myCPU__DOT__dcache__DOT__writeback_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1605 
            = ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_w_ready)
                ? 5U : 4U);
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__dcache__DOT__refill_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__dcache__DOT__replace;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
            = vlSelf->myCPU__DOT__dcache__DOT__writeback_addr;
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1605 
            = ((IData)(vlSelf->myCPU__DOT__arb_io_dcache_b_valid)
                ? 0U : 5U);
    } else {
        if ((7U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__cache_state))) {
            if (((((IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_0) 
                   | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_1)) 
                  | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_2)) 
                 | (IData)(vlSelf->myCPU__DOT__dcache__DOT__is_match_3))) {
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
                    = vlSelf->myCPU__DOT__dcache__DOT__refill_addr;
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
                    = vlSelf->myCPU__DOT__dcache__DOT__replace;
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
                    = vlSelf->myCPU__DOT__dcache__DOT__writeback_addr;
            } else {
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
                    = (0xffffff80U & vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg);
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
                    = vlSelf->myCPU__DOT__dcache__DOT__max;
                vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
                    = ((3U == (IData)(vlSelf->myCPU__DOT__dcache__DOT__max))
                        ? ((1U & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_valid)) 
                                  | (~ (IData)(vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_dirty))))
                            ? myCPU__DOT__dcache__DOT___GEN_882
                            : ((vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3.io_tag_read_tag 
                                << 0xaU) | (0x380U 
                                            & vlSelf->myCPU__DOT__dcache__DOT__cpu_request_addr_reg)))
                        : myCPU__DOT__dcache__DOT___GEN_882);
            }
        } else {
            vlSelf->myCPU__DOT__dcache__DOT___GEN_1676 
                = vlSelf->myCPU__DOT__dcache__DOT__refill_addr;
            vlSelf->myCPU__DOT__dcache__DOT___GEN_1675 
                = vlSelf->myCPU__DOT__dcache__DOT__replace;
            vlSelf->myCPU__DOT__dcache__DOT___GEN_1677 
                = vlSelf->myCPU__DOT__dcache__DOT__writeback_addr;
        }
        vlSelf->myCPU__DOT__dcache__DOT___GEN_1605 
            = myCPU__DOT__dcache__DOT___GEN_1412;
    }
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc 
        = (1U & ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)) 
                 & ((((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid)) 
                      | (((0U != vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst) 
                          | (0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))) 
                         & (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))) 
                     | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign) 
                         | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign)) 
                        & (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable))) 
                    | (((0x73U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
                        | (0x100073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable)))));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause 
        = ((0x73U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
            ? 8ULL : ((0x100073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
                       ? 3ULL : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign)
                                  ? 4ULL : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign)
                                             ? 6ULL
                                             : ((1U 
                                                 & ((~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid)) 
                                                    | (0U 
                                                       != vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst)))
                                                 ? 2ULL
                                                 : (QData)((IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (3ULL 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc)))))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap 
        = (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
            | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)) 
           | (((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
               | (0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
              & (IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable)));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue 
        = ((4ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
            ? vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum
            : ((6ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                ? vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum
                : ((3ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                    ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc
                    : ((0ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                        ? vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc
                        : (QData)((IData)(((2ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                            ? vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst
                                            : 0U)))))));
    vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask 
        = (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt) 
            | (((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
                | (0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable)))
            ? 7U : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc)
                     ? (((8ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause) 
                         | (3ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))
                         ? 0xfU : (((4ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause) 
                                    | (6ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))
                                    ? 7U : ((2ULL == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                             ? 3U : 
                                            ((0ULL 
                                              == vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)
                                              ? 3U : 0U))))
                     : 0U));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
        = ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt)
            ? (0x8000000000000000ULL | ((1U & (IData)(
                                                      (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                       >> 0xbU)))
                                         ? 0xbULL : 
                                        ((1U & (IData)(
                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                        >> 3U)))
                                          ? 3ULL : 
                                         ((1U & (IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                         >> 7U)))
                                           ? 7ULL : 
                                          ((1U & (IData)(
                                                         (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                          >> 9U)))
                                            ? 9ULL : 
                                           ((1U & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                           >> 1U)))
                                             ? 1ULL
                                             : 5ULL))))))
            : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause);
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS 
        = ((~ ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode) 
               >> 1U)) & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                          & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                     >> (0x1fU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause))))));
    vlSelf->myCPU__DOT__datapath__DOT__flush_em = (1U 
                                                   & (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)) 
                                                      >> 2U));
    vlSelf->myCPU__DOT__datapath__DOT__flush_mw = (1U 
                                                   & (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                       | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)) 
                                                      >> 3U));
    vlSelf->myCPU__DOT__datapath__DOT__flush_de = (1U 
                                                   & ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                        >> 1U) 
                                                       | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken) 
                                                           | (IData)(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur)) 
                                                          & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)))) 
                                                      | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush) 
                                                         >> 1U)));
    vlSelf->myCPU__DOT__datapath__DOT__flush_fd = (1U 
                                                   & (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask) 
                                                       | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken) 
                                                          | (IData)(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur))) 
                                                      | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush)));
    if (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS) 
         | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS))) {
        vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec 
            = ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                    + (QData)((IData)((0x3fffffffU 
                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
               << 2U);
        myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T = 1U;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec 
            = ((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                 ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                    + (QData)((IData)((0x3fffffffU 
                                       & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                 : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
               << 2U);
        myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T = 0U;
    }
    VL_EXTEND_WQ(65,64, __Vtemp_h7d52d80c__0, vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_pc);
    if (vlSelf->reset) {
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[0U] = 0x80000000U;
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[1U] = 0U;
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[2U] = 0U;
    } else if (((IData)(vlSelf->myCPU__DOT__datapath__DOT__flush_fd) 
                & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)))) {
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[0U] = 0x80000000U;
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[1U] = 0U;
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[2U] = 0U;
    } else if (vlSelf->myCPU__DOT__datapath__DOT__stall) {
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[0U] 
            = __Vtemp_h7d52d80c__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[1U] 
            = __Vtemp_h7d52d80c__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[2U] 
            = __Vtemp_h7d52d80c__0[2U];
    } else {
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[0U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[1U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
        vlSelf->myCPU__DOT__datapath__DOT___GEN_136[2U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[2U];
    }
    VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__0, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
    VL_EXTEND_WQ(65,64, __Vtemp_hfbd62a2a__0, (4ULL 
                                               + vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc));
    if (((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall) 
         & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__started)))) {
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[1U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[2U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[2U];
    } else if (vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap) {
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
            = __Vtemp_hf0c0d54e__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[1U] 
            = __Vtemp_hf0c0d54e__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[2U] 
            = __Vtemp_hf0c0d54e__0[2U];
    } else if ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))) {
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
            = __Vtemp_hfbd62a2a__0[0U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[1U] 
            = __Vtemp_hfbd62a2a__0[1U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[2U] 
            = __Vtemp_hfbd62a2a__0[2U];
    } else if (vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_5) {
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[1U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[2U] 
            = vlSelf->myCPU__DOT__datapath__DOT__pc[2U];
    } else {
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
            = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[0U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[1U] 
            = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[1U];
        vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[2U] 
            = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[2U];
    }
    if ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)) {
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_74 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 = 0U;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
            = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data;
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
            = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data;
    } else {
        vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_74 
            = ((~ (IData)(myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)) 
               & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
        if (myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T) {
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
                = (1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
                                 >> 0x3fU)));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
                = (QData)((IData)((0xfU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause))));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
                = vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
                = (0xfffffffffffffffcULL & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_taken)
                                             ? vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_addr
                                             : (4ULL 
                                                + vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc)));
        } else {
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_66 = 0U;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_68 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_70 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_71 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_72 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_75 
                = (1U & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_76 
                = (0xfffffffffffffffcULL & vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc);
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_77 
                = (1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause 
                                 >> 0x3fU)));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_78 
                = (QData)((IData)((0xfU & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause))));
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_79 
                = vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue;
            vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_69 
                = vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data;
        }
    }
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_67 
        = ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
           | ((IData)(myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)
               ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie)
               : (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie)));
    vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___GEN_81 
        = ((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst) 
           | ((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)
               ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie)
               : ((IData)(myCPU__DOT__datapath__DOT__csr__DOT___trapVec_T)
                   ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie)
                   : (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie))));
    myCPU__DOT__icache__DOT___GEN_1412 = ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                           ? (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                                                 | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                                                | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                                               | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))
                                               ? ((
                                                   (0x80000000U 
                                                    <= 
                                                    vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U]) 
                                                   & (0x88000000U 
                                                      >= 
                                                      vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U]))
                                                   ? 7U
                                                   : 0U)
                                               : ((3U 
                                                   == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_valid)) 
                                                       | (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3.io_tag_read_dirty))))
                                                    ? 0xaU
                                                    : 0xbU)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))
                                                    ? 
                                                   ((1U 
                                                     & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_valid)) 
                                                        | (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2.io_tag_read_dirty))))
                                                     ? 0xaU
                                                     : 0xbU)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))
                                                     ? 
                                                    ((1U 
                                                      & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_valid)) 
                                                         | (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1.io_tag_read_dirty))))
                                                      ? 0xaU
                                                      : 0xbU)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->myCPU__DOT__icache__DOT__max))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_valid)) 
                                                          | (~ (IData)(vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0.io_tag_read_dirty))))
                                                       ? 0xaU
                                                       : 0xbU)
                                                      : 0U)))))
                                           : ((0xaU 
                                               == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                               ? ((IData)(vlSelf->myCPU__DOT__arb_io_icache_ar_ready)
                                                   ? 9U
                                                   : 0xaU)
                                               : ((9U 
                                                   == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                   ? 
                                                  ((IData)(vlSelf->io_master_rlast)
                                                    ? 7U
                                                    : 9U)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                    ? 0xbU
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                     ? 
                                                    ((IData)(vlSelf->myCPU__DOT__icache__DOT__last)
                                                      ? 0xcU
                                                      : 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))
                                                      ? 0xcU
                                                      : 0U))))));
    if ((3U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__icache__DOT__refill_addr;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__icache__DOT__replace;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1605 
            = ((IData)(vlSelf->myCPU__DOT__arb_io_icache_r_valid)
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__icache__DOT__refill_addr;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__icache__DOT__replace;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1605 = 4U;
    } else if ((5U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
        vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
            = vlSelf->myCPU__DOT__icache__DOT__refill_addr;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
            = vlSelf->myCPU__DOT__icache__DOT__replace;
        vlSelf->myCPU__DOT__icache__DOT___GEN_1605 = 5U;
    } else {
        if ((7U == (IData)(vlSelf->myCPU__DOT__icache__DOT__cache_state))) {
            if (((((IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_0) 
                   | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_1)) 
                  | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_2)) 
                 | (IData)(vlSelf->myCPU__DOT__icache__DOT__is_match_3))) {
                vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
                    = vlSelf->myCPU__DOT__icache__DOT__refill_addr;
                vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
                    = vlSelf->myCPU__DOT__icache__DOT__replace;
            } else {
                vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
                    = (0xffffff80U & vlSelf->myCPU__DOT__icache__DOT__cpu_request_addr_reg);
                vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
                    = vlSelf->myCPU__DOT__icache__DOT__max;
            }
        } else {
            vlSelf->myCPU__DOT__icache__DOT___GEN_1676 
                = vlSelf->myCPU__DOT__icache__DOT__refill_addr;
            vlSelf->myCPU__DOT__icache__DOT___GEN_1675 
                = vlSelf->myCPU__DOT__icache__DOT__replace;
        }
        vlSelf->myCPU__DOT__icache__DOT___GEN_1605 
            = myCPU__DOT__icache__DOT___GEN_1412;
    }
}
