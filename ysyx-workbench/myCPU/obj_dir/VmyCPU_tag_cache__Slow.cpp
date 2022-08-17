// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU_tag_cache.h"

void VmyCPU_tag_cache___ctor_var_reset(VmyCPU_tag_cache* vlSelf);

VmyCPU_tag_cache::VmyCPU_tag_cache(VmyCPU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmyCPU_tag_cache___ctor_var_reset(this);
}

void VmyCPU_tag_cache::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VmyCPU_tag_cache::~VmyCPU_tag_cache() {
}
