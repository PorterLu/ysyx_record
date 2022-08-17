// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMYCPU_H_
#define VERILATED_VMYCPU_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VmyCPU__Syms;
class VmyCPU___024root;
class VerilatedVcdC;
class VmyCPU___024unit;
class VmyCPU_Cache;


// This class is the main interface to the Verilated model
class VmyCPU VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VmyCPU__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_start,0,0);
    VL_OUT8(&io_stall,0,0);
    VL_IN8(&io_master_awready,0,0);
    VL_OUT8(&io_master_awvalid,0,0);
    VL_OUT8(&io_master_awid,3,0);
    VL_OUT8(&io_master_awlen,7,0);
    VL_OUT8(&io_master_awsize,2,0);
    VL_OUT8(&io_master_awburst,1,0);
    VL_IN8(&io_master_wready,0,0);
    VL_OUT8(&io_master_wvalid,0,0);
    VL_OUT8(&io_master_wstrb,7,0);
    VL_OUT8(&io_master_wlast,0,0);
    VL_OUT8(&io_master_bready,0,0);
    VL_IN8(&io_master_bvalid,0,0);
    VL_IN8(&io_master_bresp,1,0);
    VL_IN8(&io_master_bid,3,0);
    VL_IN8(&io_master_arready,0,0);
    VL_OUT8(&io_master_arvalid,0,0);
    VL_OUT8(&io_master_arid,3,0);
    VL_OUT8(&io_master_arlen,7,0);
    VL_OUT8(&io_master_arsize,2,0);
    VL_OUT8(&io_master_arburst,1,0);
    VL_OUT8(&io_master_rready,0,0);
    VL_IN8(&io_master_rvalid,0,0);
    VL_IN8(&io_master_rresp,1,0);
    VL_IN8(&io_master_rlast,0,0);
    VL_IN8(&io_master_rid,3,0);
    VL_OUT(&io_inst,31,0);
    VL_OUT(&io_master_awaddr,31,0);
    VL_OUT(&io_master_araddr,31,0);
    VL_OUT64(&io_pc_debug,63,0);
    VL_OUT64(&io_master_wdata,63,0);
    VL_IN64(&io_master_rdata,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VmyCPU___024unit* const __PVT____024unit;
    VmyCPU_Cache* const __PVT__myCPU__DOT__icache;
    VmyCPU_Cache* const __PVT__myCPU__DOT__dcache;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VmyCPU___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VmyCPU(VerilatedContext* contextp, const char* name = "TOP");
    explicit VmyCPU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VmyCPU();
  private:
    VL_UNCOPYABLE(VmyCPU);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
