// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmyCPU.h for the primary calling header

#ifndef VERILATED_VMYCPU_TAG_CACHE_H_
#define VERILATED_VMYCPU_TAG_CACHE_H_  // guard

#include "verilated.h"

class VmyCPU__Syms;
VL_MODULE(VmyCPU_tag_cache) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(io_cache_req_index,2,0);
    VL_IN8(io_cache_req_we,0,0);
    VL_IN8(io_tag_write_valid,0,0);
    VL_IN8(io_tag_write_dirty,0,0);
    VL_IN8(io_tag_write_visit,7,0);
    VL_OUT8(io_tag_read_valid,0,0);
    VL_OUT8(io_tag_read_dirty,0,0);
    VL_OUT8(io_tag_read_visit,7,0);
    CData/*0:0*/ __PVT__tag_mem_0_valid;
    CData/*0:0*/ __PVT__tag_mem_0_dirty;
    CData/*7:0*/ __PVT__tag_mem_0_visit;
    CData/*0:0*/ __PVT__tag_mem_1_valid;
    CData/*0:0*/ __PVT__tag_mem_1_dirty;
    CData/*7:0*/ __PVT__tag_mem_1_visit;
    CData/*0:0*/ __PVT__tag_mem_2_valid;
    CData/*0:0*/ __PVT__tag_mem_2_dirty;
    CData/*7:0*/ __PVT__tag_mem_2_visit;
    CData/*0:0*/ __PVT__tag_mem_3_valid;
    CData/*0:0*/ __PVT__tag_mem_3_dirty;
    CData/*7:0*/ __PVT__tag_mem_3_visit;
    CData/*0:0*/ __PVT__tag_mem_4_valid;
    CData/*0:0*/ __PVT__tag_mem_4_dirty;
    CData/*7:0*/ __PVT__tag_mem_4_visit;
    CData/*0:0*/ __PVT__tag_mem_5_valid;
    CData/*0:0*/ __PVT__tag_mem_5_dirty;
    CData/*7:0*/ __PVT__tag_mem_5_visit;
    CData/*0:0*/ __PVT__tag_mem_6_valid;
    CData/*0:0*/ __PVT__tag_mem_6_dirty;
    CData/*7:0*/ __PVT__tag_mem_6_visit;
    CData/*0:0*/ __PVT__tag_mem_7_valid;
    CData/*0:0*/ __PVT__tag_mem_7_dirty;
    CData/*7:0*/ __PVT__tag_mem_7_visit;
    VL_IN(io_tag_write_tag,21,0);
    VL_OUT(io_tag_read_tag,21,0);
    IData/*21:0*/ __PVT__tag_mem_0_tag;
    IData/*21:0*/ __PVT__tag_mem_1_tag;
    IData/*21:0*/ __PVT__tag_mem_2_tag;
    IData/*21:0*/ __PVT__tag_mem_3_tag;
    IData/*21:0*/ __PVT__tag_mem_4_tag;
    IData/*21:0*/ __PVT__tag_mem_5_tag;
    IData/*21:0*/ __PVT__tag_mem_6_tag;
    IData/*21:0*/ __PVT__tag_mem_7_tag;

    // INTERNAL VARIABLES
    VmyCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmyCPU_tag_cache(VmyCPU__Syms* symsp, const char* name);
    ~VmyCPU_tag_cache();
    VL_UNCOPYABLE(VmyCPU_tag_cache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
