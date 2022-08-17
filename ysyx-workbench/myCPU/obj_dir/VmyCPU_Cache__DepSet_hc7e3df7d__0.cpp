// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU_Cache.h"

VL_INLINE_OPT void VmyCPU_Cache___sequent__TOP__myCPU__DOT__icache__1(VmyCPU_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU_Cache___sequent__TOP__myCPU__DOT__icache__1\n"); );
    // Body
    vlSelf->io_mem_io_ar_valid = ((0U != (IData)(vlSelf->__PVT__cache_state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__cache_state)) 
                                     | ((2U != (IData)(vlSelf->__PVT__cache_state)) 
                                        & ((3U != (IData)(vlSelf->__PVT__cache_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__cache_state)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->__PVT__cache_state)) 
                                                 & ((7U 
                                                     != (IData)(vlSelf->__PVT__cache_state)) 
                                                    & (0xaU 
                                                       == (IData)(vlSelf->__PVT__cache_state)))))))));
}

VL_INLINE_OPT void VmyCPU_Cache___sequent__TOP__myCPU__DOT__dcache__1(VmyCPU_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU_Cache___sequent__TOP__myCPU__DOT__dcache__1\n"); );
    // Body
    vlSelf->io_mem_io_ar_valid = ((0U != (IData)(vlSelf->__PVT__cache_state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__cache_state)) 
                                     | ((2U != (IData)(vlSelf->__PVT__cache_state)) 
                                        & ((3U != (IData)(vlSelf->__PVT__cache_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__cache_state)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->__PVT__cache_state)) 
                                                 & ((7U 
                                                     != (IData)(vlSelf->__PVT__cache_state)) 
                                                    & (0xaU 
                                                       == (IData)(vlSelf->__PVT__cache_state)))))))));
    vlSelf->io_mem_io_aw_valid = ((0U != (IData)(vlSelf->__PVT__cache_state)) 
                                  & ((1U != (IData)(vlSelf->__PVT__cache_state)) 
                                     & ((2U == (IData)(vlSelf->__PVT__cache_state)) 
                                        | ((3U != (IData)(vlSelf->__PVT__cache_state)) 
                                           & ((4U != (IData)(vlSelf->__PVT__cache_state)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->__PVT__cache_state)) 
                                                 & ((7U 
                                                     != (IData)(vlSelf->__PVT__cache_state)) 
                                                    & ((0xaU 
                                                        != (IData)(vlSelf->__PVT__cache_state)) 
                                                       & ((9U 
                                                           != (IData)(vlSelf->__PVT__cache_state)) 
                                                          & (0xbU 
                                                             == (IData)(vlSelf->__PVT__cache_state)))))))))));
}
