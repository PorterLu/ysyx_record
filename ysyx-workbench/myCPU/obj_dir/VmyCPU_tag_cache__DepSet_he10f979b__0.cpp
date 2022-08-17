// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU_tag_cache.h"

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_0_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_0__1\n"); );
    // Body
    if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                      >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_7_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_7_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_7_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_7_valid;
    } else if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_6_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_6_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_6_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_6_valid;
    } else if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_5_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_5_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_5_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_5_valid;
    } else if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_4_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_4_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_4_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_4_valid;
    } else if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_3_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_3_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_3_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_3_valid;
    } else if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_2_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_2_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_2_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_2_valid;
    } else if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_1_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_1_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_1_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_1_valid;
    } else {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_0_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_0_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_0_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_0_valid;
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_1__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_1__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_1_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_2__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_2__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_2_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_3__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__icache__DOT__tag_mem_3__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__icache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__icache__DOT__tag_mem_3_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_0_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_0__1\n"); );
    // Body
    if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                      >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_7_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_7_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_7_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_7_valid;
    } else if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_6_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_6_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_6_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_6_valid;
    } else if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_5_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_5_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_5_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_5_valid;
    } else if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_4_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_4_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_4_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_4_valid;
    } else if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_3_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_3_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_3_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_3_valid;
    } else if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_2_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_2_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_2_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_2_valid;
    } else if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                             >> 7U)))) {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_1_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_1_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_1_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_1_valid;
    } else {
        vlSelf->io_tag_read_dirty = vlSelf->__PVT__tag_mem_0_dirty;
        vlSelf->io_tag_read_visit = vlSelf->__PVT__tag_mem_0_visit;
        vlSelf->io_tag_read_tag = vlSelf->__PVT__tag_mem_0_tag;
        vlSelf->io_tag_read_valid = vlSelf->__PVT__tag_mem_0_valid;
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_1__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_1__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_1_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_2__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_2__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_2_io_tag_write_valid;
        }
    }
}

VL_INLINE_OPT void VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_3__0(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___sequent__TOP__myCPU__DOT__dcache__DOT__tag_mem_3__0\n"); );
    // Body
    if (vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_cache_req_we) {
        if ((7U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_7_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_7_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_7_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_7_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((1U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_1_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_1_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_1_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_1_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((0U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_0_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_0_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_0_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_0_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((4U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_4_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_4_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_4_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_4_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((2U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_2_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_2_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_2_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_2_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((3U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_3_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_3_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_3_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_3_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((5U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_5_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_5_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_5_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_5_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
        if ((6U == (7U & (vlSymsp->TOP.myCPU__DOT__dcache__DOT__cpu_request_addr_reg 
                          >> 7U)))) {
            vlSelf->__PVT__tag_mem_6_dirty = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_dirty;
            vlSelf->__PVT__tag_mem_6_visit = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_visit;
            vlSelf->__PVT__tag_mem_6_tag = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_tag;
            vlSelf->__PVT__tag_mem_6_valid = vlSymsp->TOP.myCPU__DOT__dcache__DOT__tag_mem_3_io_tag_write_valid;
        }
    }
}
