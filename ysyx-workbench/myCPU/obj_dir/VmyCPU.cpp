// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VmyCPU.h"
#include "VmyCPU__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VmyCPU::VmyCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VmyCPU__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_start{vlSymsp->TOP.io_start}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_master_awready{vlSymsp->TOP.io_master_awready}
    , io_master_awvalid{vlSymsp->TOP.io_master_awvalid}
    , io_master_awid{vlSymsp->TOP.io_master_awid}
    , io_master_awlen{vlSymsp->TOP.io_master_awlen}
    , io_master_awsize{vlSymsp->TOP.io_master_awsize}
    , io_master_awburst{vlSymsp->TOP.io_master_awburst}
    , io_master_wready{vlSymsp->TOP.io_master_wready}
    , io_master_wvalid{vlSymsp->TOP.io_master_wvalid}
    , io_master_wstrb{vlSymsp->TOP.io_master_wstrb}
    , io_master_wlast{vlSymsp->TOP.io_master_wlast}
    , io_master_bready{vlSymsp->TOP.io_master_bready}
    , io_master_bvalid{vlSymsp->TOP.io_master_bvalid}
    , io_master_bresp{vlSymsp->TOP.io_master_bresp}
    , io_master_bid{vlSymsp->TOP.io_master_bid}
    , io_master_arready{vlSymsp->TOP.io_master_arready}
    , io_master_arvalid{vlSymsp->TOP.io_master_arvalid}
    , io_master_arid{vlSymsp->TOP.io_master_arid}
    , io_master_arlen{vlSymsp->TOP.io_master_arlen}
    , io_master_arsize{vlSymsp->TOP.io_master_arsize}
    , io_master_arburst{vlSymsp->TOP.io_master_arburst}
    , io_master_rready{vlSymsp->TOP.io_master_rready}
    , io_master_rvalid{vlSymsp->TOP.io_master_rvalid}
    , io_master_rresp{vlSymsp->TOP.io_master_rresp}
    , io_master_rlast{vlSymsp->TOP.io_master_rlast}
    , io_master_rid{vlSymsp->TOP.io_master_rid}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_master_awaddr{vlSymsp->TOP.io_master_awaddr}
    , io_master_araddr{vlSymsp->TOP.io_master_araddr}
    , io_pc_debug{vlSymsp->TOP.io_pc_debug}
    , io_master_wdata{vlSymsp->TOP.io_master_wdata}
    , io_master_rdata{vlSymsp->TOP.io_master_rdata}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__myCPU__DOT__icache{vlSymsp->TOP.__PVT__myCPU__DOT__icache}
    , __PVT__myCPU__DOT__dcache{vlSymsp->TOP.__PVT__myCPU__DOT__dcache}
    , rootp{&(vlSymsp->TOP)}
{
}

VmyCPU::VmyCPU(const char* _vcname__)
    : VmyCPU(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VmyCPU::~VmyCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VmyCPU___024root___eval_initial(VmyCPU___024root* vlSelf);
void VmyCPU___024root___eval_settle(VmyCPU___024root* vlSelf);
void VmyCPU___024root___eval(VmyCPU___024root* vlSelf);
#ifdef VL_DEBUG
void VmyCPU___024root___eval_debug_assertions(VmyCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VmyCPU___024root___final(VmyCPU___024root* vlSelf);

static void _eval_initial_loop(VmyCPU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VmyCPU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VmyCPU___024root___eval_settle(&(vlSymsp->TOP));
        VmyCPU___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VmyCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmyCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VmyCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VmyCPU___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VmyCPU::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VmyCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VmyCPU::final() {
    VmyCPU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VmyCPU___024root__trace_init_top(VmyCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VmyCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VmyCPU___024root__trace_register(VmyCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VmyCPU::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VmyCPU___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
