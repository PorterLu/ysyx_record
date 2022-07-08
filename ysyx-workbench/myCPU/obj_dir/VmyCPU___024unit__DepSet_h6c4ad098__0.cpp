// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmyCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VmyCPU__Syms.h"
#include "VmyCPU___024unit.h"

extern "C" void halt();

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    halt();
}

extern "C" void set_gpr_ptr(const svLogicVecVal* regfile_0, const svLogicVecVal* regfile_1, const svLogicVecVal* regfile_2, const svLogicVecVal* regfile_3, const svLogicVecVal* regfile_4, const svLogicVecVal* regfile_5, const svLogicVecVal* regfile_6, const svLogicVecVal* regfile_7, const svLogicVecVal* regfile_8, const svLogicVecVal* regfile_9, const svLogicVecVal* regfile_10, const svLogicVecVal* regfile_11, const svLogicVecVal* regfile_12, const svLogicVecVal* regfile_13, const svLogicVecVal* regfile_14, const svLogicVecVal* regfile_15, const svLogicVecVal* regfile_16, const svLogicVecVal* regfile_17, const svLogicVecVal* regfile_18, const svLogicVecVal* regfile_19, const svLogicVecVal* regfile_20, const svLogicVecVal* regfile_21, const svLogicVecVal* regfile_22, const svLogicVecVal* regfile_23, const svLogicVecVal* regfile_24, const svLogicVecVal* regfile_25, const svLogicVecVal* regfile_26, const svLogicVecVal* regfile_27, const svLogicVecVal* regfile_28, const svLogicVecVal* regfile_29, const svLogicVecVal* regfile_30, const svLogicVecVal* regfile_31);

VL_INLINE_OPT void VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(QData/*63:0*/ regfile_0, QData/*63:0*/ regfile_1, QData/*63:0*/ regfile_2, QData/*63:0*/ regfile_3, QData/*63:0*/ regfile_4, QData/*63:0*/ regfile_5, QData/*63:0*/ regfile_6, QData/*63:0*/ regfile_7, QData/*63:0*/ regfile_8, QData/*63:0*/ regfile_9, QData/*63:0*/ regfile_10, QData/*63:0*/ regfile_11, QData/*63:0*/ regfile_12, QData/*63:0*/ regfile_13, QData/*63:0*/ regfile_14, QData/*63:0*/ regfile_15, QData/*63:0*/ regfile_16, QData/*63:0*/ regfile_17, QData/*63:0*/ regfile_18, QData/*63:0*/ regfile_19, QData/*63:0*/ regfile_20, QData/*63:0*/ regfile_21, QData/*63:0*/ regfile_22, QData/*63:0*/ regfile_23, QData/*63:0*/ regfile_24, QData/*63:0*/ regfile_25, QData/*63:0*/ regfile_26, QData/*63:0*/ regfile_27, QData/*63:0*/ regfile_28, QData/*63:0*/ regfile_29, QData/*63:0*/ regfile_30, QData/*63:0*/ regfile_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmyCPU___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit\n"); );
    // Body
    svLogicVecVal regfile_0__Vcvt[2];
    for (size_t regfile_0__Vidx = 0; regfile_0__Vidx < 1; ++regfile_0__Vidx) VL_SET_SVLV_Q(64, regfile_0__Vcvt + 2 * regfile_0__Vidx, regfile_0);
    svLogicVecVal regfile_1__Vcvt[2];
    for (size_t regfile_1__Vidx = 0; regfile_1__Vidx < 1; ++regfile_1__Vidx) VL_SET_SVLV_Q(64, regfile_1__Vcvt + 2 * regfile_1__Vidx, regfile_1);
    svLogicVecVal regfile_2__Vcvt[2];
    for (size_t regfile_2__Vidx = 0; regfile_2__Vidx < 1; ++regfile_2__Vidx) VL_SET_SVLV_Q(64, regfile_2__Vcvt + 2 * regfile_2__Vidx, regfile_2);
    svLogicVecVal regfile_3__Vcvt[2];
    for (size_t regfile_3__Vidx = 0; regfile_3__Vidx < 1; ++regfile_3__Vidx) VL_SET_SVLV_Q(64, regfile_3__Vcvt + 2 * regfile_3__Vidx, regfile_3);
    svLogicVecVal regfile_4__Vcvt[2];
    for (size_t regfile_4__Vidx = 0; regfile_4__Vidx < 1; ++regfile_4__Vidx) VL_SET_SVLV_Q(64, regfile_4__Vcvt + 2 * regfile_4__Vidx, regfile_4);
    svLogicVecVal regfile_5__Vcvt[2];
    for (size_t regfile_5__Vidx = 0; regfile_5__Vidx < 1; ++regfile_5__Vidx) VL_SET_SVLV_Q(64, regfile_5__Vcvt + 2 * regfile_5__Vidx, regfile_5);
    svLogicVecVal regfile_6__Vcvt[2];
    for (size_t regfile_6__Vidx = 0; regfile_6__Vidx < 1; ++regfile_6__Vidx) VL_SET_SVLV_Q(64, regfile_6__Vcvt + 2 * regfile_6__Vidx, regfile_6);
    svLogicVecVal regfile_7__Vcvt[2];
    for (size_t regfile_7__Vidx = 0; regfile_7__Vidx < 1; ++regfile_7__Vidx) VL_SET_SVLV_Q(64, regfile_7__Vcvt + 2 * regfile_7__Vidx, regfile_7);
    svLogicVecVal regfile_8__Vcvt[2];
    for (size_t regfile_8__Vidx = 0; regfile_8__Vidx < 1; ++regfile_8__Vidx) VL_SET_SVLV_Q(64, regfile_8__Vcvt + 2 * regfile_8__Vidx, regfile_8);
    svLogicVecVal regfile_9__Vcvt[2];
    for (size_t regfile_9__Vidx = 0; regfile_9__Vidx < 1; ++regfile_9__Vidx) VL_SET_SVLV_Q(64, regfile_9__Vcvt + 2 * regfile_9__Vidx, regfile_9);
    svLogicVecVal regfile_10__Vcvt[2];
    for (size_t regfile_10__Vidx = 0; regfile_10__Vidx < 1; ++regfile_10__Vidx) VL_SET_SVLV_Q(64, regfile_10__Vcvt + 2 * regfile_10__Vidx, regfile_10);
    svLogicVecVal regfile_11__Vcvt[2];
    for (size_t regfile_11__Vidx = 0; regfile_11__Vidx < 1; ++regfile_11__Vidx) VL_SET_SVLV_Q(64, regfile_11__Vcvt + 2 * regfile_11__Vidx, regfile_11);
    svLogicVecVal regfile_12__Vcvt[2];
    for (size_t regfile_12__Vidx = 0; regfile_12__Vidx < 1; ++regfile_12__Vidx) VL_SET_SVLV_Q(64, regfile_12__Vcvt + 2 * regfile_12__Vidx, regfile_12);
    svLogicVecVal regfile_13__Vcvt[2];
    for (size_t regfile_13__Vidx = 0; regfile_13__Vidx < 1; ++regfile_13__Vidx) VL_SET_SVLV_Q(64, regfile_13__Vcvt + 2 * regfile_13__Vidx, regfile_13);
    svLogicVecVal regfile_14__Vcvt[2];
    for (size_t regfile_14__Vidx = 0; regfile_14__Vidx < 1; ++regfile_14__Vidx) VL_SET_SVLV_Q(64, regfile_14__Vcvt + 2 * regfile_14__Vidx, regfile_14);
    svLogicVecVal regfile_15__Vcvt[2];
    for (size_t regfile_15__Vidx = 0; regfile_15__Vidx < 1; ++regfile_15__Vidx) VL_SET_SVLV_Q(64, regfile_15__Vcvt + 2 * regfile_15__Vidx, regfile_15);
    svLogicVecVal regfile_16__Vcvt[2];
    for (size_t regfile_16__Vidx = 0; regfile_16__Vidx < 1; ++regfile_16__Vidx) VL_SET_SVLV_Q(64, regfile_16__Vcvt + 2 * regfile_16__Vidx, regfile_16);
    svLogicVecVal regfile_17__Vcvt[2];
    for (size_t regfile_17__Vidx = 0; regfile_17__Vidx < 1; ++regfile_17__Vidx) VL_SET_SVLV_Q(64, regfile_17__Vcvt + 2 * regfile_17__Vidx, regfile_17);
    svLogicVecVal regfile_18__Vcvt[2];
    for (size_t regfile_18__Vidx = 0; regfile_18__Vidx < 1; ++regfile_18__Vidx) VL_SET_SVLV_Q(64, regfile_18__Vcvt + 2 * regfile_18__Vidx, regfile_18);
    svLogicVecVal regfile_19__Vcvt[2];
    for (size_t regfile_19__Vidx = 0; regfile_19__Vidx < 1; ++regfile_19__Vidx) VL_SET_SVLV_Q(64, regfile_19__Vcvt + 2 * regfile_19__Vidx, regfile_19);
    svLogicVecVal regfile_20__Vcvt[2];
    for (size_t regfile_20__Vidx = 0; regfile_20__Vidx < 1; ++regfile_20__Vidx) VL_SET_SVLV_Q(64, regfile_20__Vcvt + 2 * regfile_20__Vidx, regfile_20);
    svLogicVecVal regfile_21__Vcvt[2];
    for (size_t regfile_21__Vidx = 0; regfile_21__Vidx < 1; ++regfile_21__Vidx) VL_SET_SVLV_Q(64, regfile_21__Vcvt + 2 * regfile_21__Vidx, regfile_21);
    svLogicVecVal regfile_22__Vcvt[2];
    for (size_t regfile_22__Vidx = 0; regfile_22__Vidx < 1; ++regfile_22__Vidx) VL_SET_SVLV_Q(64, regfile_22__Vcvt + 2 * regfile_22__Vidx, regfile_22);
    svLogicVecVal regfile_23__Vcvt[2];
    for (size_t regfile_23__Vidx = 0; regfile_23__Vidx < 1; ++regfile_23__Vidx) VL_SET_SVLV_Q(64, regfile_23__Vcvt + 2 * regfile_23__Vidx, regfile_23);
    svLogicVecVal regfile_24__Vcvt[2];
    for (size_t regfile_24__Vidx = 0; regfile_24__Vidx < 1; ++regfile_24__Vidx) VL_SET_SVLV_Q(64, regfile_24__Vcvt + 2 * regfile_24__Vidx, regfile_24);
    svLogicVecVal regfile_25__Vcvt[2];
    for (size_t regfile_25__Vidx = 0; regfile_25__Vidx < 1; ++regfile_25__Vidx) VL_SET_SVLV_Q(64, regfile_25__Vcvt + 2 * regfile_25__Vidx, regfile_25);
    svLogicVecVal regfile_26__Vcvt[2];
    for (size_t regfile_26__Vidx = 0; regfile_26__Vidx < 1; ++regfile_26__Vidx) VL_SET_SVLV_Q(64, regfile_26__Vcvt + 2 * regfile_26__Vidx, regfile_26);
    svLogicVecVal regfile_27__Vcvt[2];
    for (size_t regfile_27__Vidx = 0; regfile_27__Vidx < 1; ++regfile_27__Vidx) VL_SET_SVLV_Q(64, regfile_27__Vcvt + 2 * regfile_27__Vidx, regfile_27);
    svLogicVecVal regfile_28__Vcvt[2];
    for (size_t regfile_28__Vidx = 0; regfile_28__Vidx < 1; ++regfile_28__Vidx) VL_SET_SVLV_Q(64, regfile_28__Vcvt + 2 * regfile_28__Vidx, regfile_28);
    svLogicVecVal regfile_29__Vcvt[2];
    for (size_t regfile_29__Vidx = 0; regfile_29__Vidx < 1; ++regfile_29__Vidx) VL_SET_SVLV_Q(64, regfile_29__Vcvt + 2 * regfile_29__Vidx, regfile_29);
    svLogicVecVal regfile_30__Vcvt[2];
    for (size_t regfile_30__Vidx = 0; regfile_30__Vidx < 1; ++regfile_30__Vidx) VL_SET_SVLV_Q(64, regfile_30__Vcvt + 2 * regfile_30__Vidx, regfile_30);
    svLogicVecVal regfile_31__Vcvt[2];
    for (size_t regfile_31__Vidx = 0; regfile_31__Vidx < 1; ++regfile_31__Vidx) VL_SET_SVLV_Q(64, regfile_31__Vcvt + 2 * regfile_31__Vidx, regfile_31);
    set_gpr_ptr(regfile_0__Vcvt, regfile_1__Vcvt, regfile_2__Vcvt, regfile_3__Vcvt, regfile_4__Vcvt, regfile_5__Vcvt, regfile_6__Vcvt, regfile_7__Vcvt, regfile_8__Vcvt, regfile_9__Vcvt, regfile_10__Vcvt, regfile_11__Vcvt, regfile_12__Vcvt, regfile_13__Vcvt, regfile_14__Vcvt, regfile_15__Vcvt, regfile_16__Vcvt, regfile_17__Vcvt, regfile_18__Vcvt, regfile_19__Vcvt, regfile_20__Vcvt, regfile_21__Vcvt, regfile_22__Vcvt, regfile_23__Vcvt, regfile_24__Vcvt, regfile_25__Vcvt, regfile_26__Vcvt, regfile_27__Vcvt, regfile_28__Vcvt, regfile_29__Vcvt, regfile_30__Vcvt, regfile_31__Vcvt);
}
