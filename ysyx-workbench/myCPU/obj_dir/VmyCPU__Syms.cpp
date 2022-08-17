// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmyCPU__Syms.h"
#include "VmyCPU.h"
#include "VmyCPU___024root.h"
#include "VmyCPU_Cache.h"
#include "VmyCPU___024unit.h"

// FUNCTIONS
VmyCPU__Syms::~VmyCPU__Syms()
{
}

VmyCPU__Syms::VmyCPU__Syms(VerilatedContext* contextp, const char* namep,VmyCPU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__myCPU__DOT__dcache{this, Verilated::catName(namep, "myCPU.dcache")}
    , TOP__myCPU__DOT__icache{this, Verilated::catName(namep, "myCPU.icache")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__myCPU__DOT__dcache = &TOP__myCPU__DOT__dcache;
    TOP.__PVT__myCPU__DOT__icache = &TOP__myCPU__DOT__icache;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__myCPU__DOT__dcache.__Vconfigure(true);
    TOP__myCPU__DOT__icache.__Vconfigure(false);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
