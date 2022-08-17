// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU_Cache.h"
#include "VmyCPU__Syms.h"

void VmyCPU_Cache___ctor_var_reset(VmyCPU_Cache* vlSelf);

VmyCPU_Cache::VmyCPU_Cache(VmyCPU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VmyCPU_Cache___ctor_var_reset(this);
}

void VmyCPU_Cache::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VmyCPU_Cache::~VmyCPU_Cache() {
}
