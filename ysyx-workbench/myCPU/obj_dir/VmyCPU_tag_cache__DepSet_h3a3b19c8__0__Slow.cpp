// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU_tag_cache.h"

VL_ATTR_COLD void VmyCPU_tag_cache___ctor_var_reset(VmyCPU_tag_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmyCPU_tag_cache___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->io_cache_req_index = VL_RAND_RESET_I(3);
    vlSelf->io_cache_req_we = VL_RAND_RESET_I(1);
    vlSelf->io_tag_write_valid = VL_RAND_RESET_I(1);
    vlSelf->io_tag_write_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_tag_write_visit = VL_RAND_RESET_I(8);
    vlSelf->io_tag_write_tag = VL_RAND_RESET_I(22);
    vlSelf->io_tag_read_valid = VL_RAND_RESET_I(1);
    vlSelf->io_tag_read_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_tag_read_visit = VL_RAND_RESET_I(8);
    vlSelf->io_tag_read_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_0_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_0_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_1_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_1_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_2_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_2_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_3_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_3_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_4_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_4_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_4_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_5_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_5_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_5_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_6_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_6_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_6_tag = VL_RAND_RESET_I(22);
    vlSelf->__PVT__tag_mem_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_7_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_mem_7_visit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_mem_7_tag = VL_RAND_RESET_I(22);
}
