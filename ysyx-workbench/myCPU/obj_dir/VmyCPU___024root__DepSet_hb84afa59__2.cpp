// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024root.h"

void VmyCPU___024root___sequent__TOP__0(VmyCPU___024root* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_1__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_2__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_3__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_3__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_2__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_1__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__0(VmyCPU_tag_cache* vlSelf);
void VmyCPU___024root___sequent__TOP__1(VmyCPU___024root* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf);
void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf);
void VmyCPU___024root___sequent__TOP__2(VmyCPU___024root* vlSelf);
void VmyCPU___024root___combo__TOP__0(VmyCPU___024root* vlSelf);

void VmyCPU___024root___eval(VmyCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VmyCPU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__0((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_1__0((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_2__0((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_3__0((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_3__0((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_2__0((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_1__0((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__0((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0));
        VmyCPU___024root___sequent__TOP__1(vlSelf);
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_0));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_1));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_2));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__icache__DOT__tag_mem_3));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_3));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_2));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_1));
        VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1((&vlSymsp->TOP__myCPU__DOT__dcache__DOT__tag_mem_0));
        VmyCPU___024root___sequent__TOP__2(vlSelf);
    }
    VmyCPU___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}
