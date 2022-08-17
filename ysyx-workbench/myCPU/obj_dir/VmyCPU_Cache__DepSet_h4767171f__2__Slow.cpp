// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU_Cache.h"
#include "VmyCPU__Syms.h"

VL_ATTR_COLD void VmyCPU_Cache___settle__TOP__myCPU__DOT__dcache__1(VmyCPU_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU_Cache___settle__TOP__myCPU__DOT__dcache__1\n"); );
    // Init
    CData/*3:0*/ __PVT___GEN_1393;
    // Body
    __PVT___GEN_1393 = ((7U == (IData)(vlSelf->__PVT__cache_state))
                         ? (((((IData)(vlSelf->__PVT__is_match_0) 
                               | (IData)(vlSelf->__PVT__is_match_1)) 
                              | (IData)(vlSelf->__PVT__is_match_2)) 
                             | (IData)(vlSelf->__PVT__is_match_3))
                             ? ((((IData)(vlSymsp->TOP.myCPU__DOT__datapath_io_dcache_cpu_request_valid) 
                                  & (0x80000000U <= (IData)(vlSymsp->TOP.myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T))) 
                                 & (0x88000000U >= (IData)(vlSymsp->TOP.myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T)))
                                 ? 7U : 0U) : ((3U 
                                                == (IData)(vlSelf->__PVT__max))
                                                ? (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->__PVT__tag_mem_3_io_tag_read_valid)) 
                                                       | (~ (IData)(vlSelf->__PVT__tag_mem_3_io_tag_read_dirty))))
                                                    ? 0xaU
                                                    : 0xbU)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__max))
                                                    ? 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->__PVT__tag_mem_2_io_tag_read_valid)) 
                                                        | (~ (IData)(vlSelf->__PVT__tag_mem_2_io_tag_read_dirty))))
                                                     ? 0xaU
                                                     : 0xbU)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__max))
                                                     ? 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->__PVT__tag_mem_1_io_tag_read_valid)) 
                                                         | (~ (IData)(vlSelf->__PVT__tag_mem_1_io_tag_read_dirty))))
                                                      ? 0xaU
                                                      : 0xbU)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->__PVT__max))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelf->__PVT__tag_mem_0_io_tag_read_valid)) 
                                                          | (~ (IData)(vlSelf->__PVT__tag_mem_0_io_tag_read_dirty))))
                                                       ? 0xaU
                                                       : 0xbU)
                                                      : 0U)))))
                         : ((0xaU == (IData)(vlSelf->__PVT__cache_state))
                             ? ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_ar_ready)
                                 ? 9U : 0xaU) : ((9U 
                                                  == (IData)(vlSelf->__PVT__cache_state))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP.io_master_rlast)
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_r_valid)
                                                    ? 9U
                                                    : 0U))
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__cache_state))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_aw_ready)
                                                    ? 8U
                                                    : 0xbU)
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->__PVT__cache_state))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__last)
                                                     ? 0xcU
                                                     : 0U)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->__PVT__cache_state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_b_valid)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->__PVT___GEN_1559 = ((3U == (IData)(vlSelf->__PVT__cache_state))
                                 ? ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_r_valid)
                                     ? 0U : 3U) : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__cache_state))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_w_ready)
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__cache_state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.myCPU__DOT__arb_io_dcache_b_valid)
                                                      ? 0U
                                                      : 5U)
                                                     : (IData)(__PVT___GEN_1393))));
}
