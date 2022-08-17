// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

VL_ATTR_COLD void VmyCPU___024root___settle__TOP__0(VmyCPU___024root* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf);
VL_ATTR_COLD void VmyCPU___024root___settle__TOP__1(VmyCPU___024root* vlSelf);

VL_ATTR_COLD void VmyCPU___024root___eval_settle(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval_settle\n"); );
    // Body
    VmyCPU___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1));
    VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0));
    VmyCPU___024root___settle__TOP__1(vlSelf);
}
