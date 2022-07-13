// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmyCPU__Syms.h"


VL_ATTR_COLD void VmyCPU___024root__trace_init_sub__TOP__0(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+151,"io_pc_debug", false,-1, 63,0);
    tracep->pushNamePrefix("myCPU ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+151,"io_pc_debug", false,-1, 63,0);
    tracep->declQuad(c+70,"alu_io_A", false,-1, 63,0);
    tracep->declQuad(c+72,"alu_io_B", false,-1, 63,0);
    tracep->declBus(c+74,"alu_io_width_type", false,-1, 1,0);
    tracep->declBus(c+75,"alu_io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+76,"alu_io_out", false,-1, 63,0);
    tracep->declBus(c+78,"immGen_io_inst", false,-1, 31,0);
    tracep->declBus(c+79,"immGen_io_sel", false,-1, 2,0);
    tracep->declQuad(c+80,"immGen_io_out", false,-1, 63,0);
    tracep->declBus(c+82,"control_io_inst", false,-1, 31,0);
    tracep->declBus(c+83,"control_io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+84,"control_io_A_sel", false,-1);
    tracep->declBit(c+85,"control_io_B_sel", false,-1);
    tracep->declBus(c+74,"control_io_wd_type", false,-1, 1,0);
    tracep->declBus(c+79,"control_io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+86,"control_io_br_type", false,-1, 2,0);
    tracep->declBus(c+87,"control_io_st_type", false,-1, 2,0);
    tracep->declBus(c+88,"control_io_ld_type", false,-1, 2,0);
    tracep->declBus(c+89,"control_io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+90,"control_io_wb_en", false,-1);
    tracep->declBus(c+75,"control_io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+91,"brCond_io_rs1", false,-1, 63,0);
    tracep->declQuad(c+93,"brCond_io_rs2", false,-1, 63,0);
    tracep->declBus(c+86,"brCond_io_br_type", false,-1, 2,0);
    tracep->declBit(c+95,"brCond_io_taken", false,-1);
    tracep->declBit(c+149,"regFile_clock", false,-1);
    tracep->declBit(c+150,"regFile_reset", false,-1);
    tracep->declBit(c+96,"regFile_io_wen", false,-1);
    tracep->declBus(c+97,"regFile_io_waddr", false,-1, 4,0);
    tracep->declQuad(c+98,"regFile_io_wdata", false,-1, 63,0);
    tracep->declBus(c+100,"regFile_io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+101,"regFile_io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+91,"regFile_io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+93,"regFile_io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+1,"regFile_io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+3,"regFile_io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+5,"regFile_io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+7,"regFile_io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+9,"regFile_io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+11,"regFile_io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+13,"regFile_io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+15,"regFile_io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+17,"regFile_io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+19,"regFile_io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+21,"regFile_io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+23,"regFile_io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+25,"regFile_io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+27,"regFile_io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+29,"regFile_io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+31,"regFile_io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+33,"regFile_io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+35,"regFile_io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+37,"regFile_io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+39,"regFile_io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+41,"regFile_io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+43,"regFile_io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+45,"regFile_io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+47,"regFile_io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+49,"regFile_io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+51,"regFile_io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+53,"regFile_io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+55,"regFile_io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+57,"regFile_io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+59,"regFile_io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+61,"regFile_io_rdata_34", false,-1, 63,0);
    tracep->declBit(c+149,"mem__clock", false,-1);
    tracep->declBit(c+150,"mem__reset", false,-1);
    tracep->declQuad(c+63,"mem__pc_addr", false,-1, 63,0);
    tracep->declQuad(c+102,"mem__pc_data", false,-1, 63,0);
    tracep->declQuad(c+76,"mem__addr", false,-1, 63,0);
    tracep->declQuad(c+104,"mem__wdata", false,-1, 63,0);
    tracep->declBus(c+106,"mem__mask", false,-1, 7,0);
    tracep->declQuad(c+107,"mem__rdata", false,-1, 63,0);
    tracep->declBit(c+109,"mem__enable", false,-1);
    tracep->declBit(c+110,"mem__wen", false,-1);
    tracep->declBit(c+149,"gpr_ptr_clock", false,-1);
    tracep->declBit(c+150,"gpr_ptr_reset", false,-1);
    tracep->declQuad(c+153,"gpr_ptr_regfile_0", false,-1, 63,0);
    tracep->declQuad(c+1,"gpr_ptr_regfile_1", false,-1, 63,0);
    tracep->declQuad(c+3,"gpr_ptr_regfile_2", false,-1, 63,0);
    tracep->declQuad(c+5,"gpr_ptr_regfile_3", false,-1, 63,0);
    tracep->declQuad(c+7,"gpr_ptr_regfile_4", false,-1, 63,0);
    tracep->declQuad(c+9,"gpr_ptr_regfile_5", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_ptr_regfile_6", false,-1, 63,0);
    tracep->declQuad(c+13,"gpr_ptr_regfile_7", false,-1, 63,0);
    tracep->declQuad(c+15,"gpr_ptr_regfile_8", false,-1, 63,0);
    tracep->declQuad(c+17,"gpr_ptr_regfile_9", false,-1, 63,0);
    tracep->declQuad(c+19,"gpr_ptr_regfile_10", false,-1, 63,0);
    tracep->declQuad(c+21,"gpr_ptr_regfile_11", false,-1, 63,0);
    tracep->declQuad(c+23,"gpr_ptr_regfile_12", false,-1, 63,0);
    tracep->declQuad(c+25,"gpr_ptr_regfile_13", false,-1, 63,0);
    tracep->declQuad(c+27,"gpr_ptr_regfile_14", false,-1, 63,0);
    tracep->declQuad(c+29,"gpr_ptr_regfile_15", false,-1, 63,0);
    tracep->declQuad(c+31,"gpr_ptr_regfile_16", false,-1, 63,0);
    tracep->declQuad(c+33,"gpr_ptr_regfile_17", false,-1, 63,0);
    tracep->declQuad(c+35,"gpr_ptr_regfile_18", false,-1, 63,0);
    tracep->declQuad(c+37,"gpr_ptr_regfile_19", false,-1, 63,0);
    tracep->declQuad(c+39,"gpr_ptr_regfile_20", false,-1, 63,0);
    tracep->declQuad(c+41,"gpr_ptr_regfile_21", false,-1, 63,0);
    tracep->declQuad(c+43,"gpr_ptr_regfile_22", false,-1, 63,0);
    tracep->declQuad(c+45,"gpr_ptr_regfile_23", false,-1, 63,0);
    tracep->declQuad(c+47,"gpr_ptr_regfile_24", false,-1, 63,0);
    tracep->declQuad(c+49,"gpr_ptr_regfile_25", false,-1, 63,0);
    tracep->declQuad(c+51,"gpr_ptr_regfile_26", false,-1, 63,0);
    tracep->declQuad(c+53,"gpr_ptr_regfile_27", false,-1, 63,0);
    tracep->declQuad(c+55,"gpr_ptr_regfile_28", false,-1, 63,0);
    tracep->declQuad(c+57,"gpr_ptr_regfile_29", false,-1, 63,0);
    tracep->declQuad(c+59,"gpr_ptr_regfile_30", false,-1, 63,0);
    tracep->declQuad(c+61,"gpr_ptr_regfile_31", false,-1, 63,0);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBit(c+95,"taken", false,-1);
    tracep->declQuad(c+76,"alu_out", false,-1, 63,0);
    tracep->declBus(c+111,"instr", false,-1, 31,0);
    tracep->declQuad(c+112,"A_data", false,-1, 63,0);
    tracep->declQuad(c+80,"imm", false,-1, 63,0);
    tracep->declQuad(c+114,"B_data", false,-1, 63,0);
    tracep->declBus(c+116,"st_mask", false,-1, 15,0);
    tracep->declQuad(c+117,"load_data", false,-1, 63,0);
    tracep->declQuad(c+119,"load_data_ext", false,-1, 63,0);
    tracep->declQuad(c+66,"pc_4", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+70,"io_A", false,-1, 63,0);
    tracep->declQuad(c+72,"io_B", false,-1, 63,0);
    tracep->declBus(c+74,"io_width_type", false,-1, 1,0);
    tracep->declBus(c+75,"io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+76,"io_out", false,-1, 63,0);
    tracep->declBus(c+121,"shamt", false,-1, 5,0);
    tracep->declQuad(c+122,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brCond ");
    tracep->declQuad(c+91,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+93,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+86,"io_br_type", false,-1, 2,0);
    tracep->declBit(c+95,"io_taken", false,-1);
    tracep->declBit(c+124,"eq", false,-1);
    tracep->declBit(c+125,"neq", false,-1);
    tracep->declBit(c+126,"lt", false,-1);
    tracep->declBit(c+127,"ge", false,-1);
    tracep->declBit(c+128,"ltu", false,-1);
    tracep->declBit(c+129,"geu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+82,"io_inst", false,-1, 31,0);
    tracep->declBus(c+83,"io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+84,"io_A_sel", false,-1);
    tracep->declBit(c+85,"io_B_sel", false,-1);
    tracep->declBus(c+74,"io_wd_type", false,-1, 1,0);
    tracep->declBus(c+79,"io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+86,"io_br_type", false,-1, 2,0);
    tracep->declBus(c+87,"io_st_type", false,-1, 2,0);
    tracep->declBus(c+88,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+89,"io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+90,"io_wb_en", false,-1);
    tracep->declBus(c+75,"io_alu_op", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr_ptr ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+153,"regfile_0", false,-1, 63,0);
    tracep->declQuad(c+1,"regfile_1", false,-1, 63,0);
    tracep->declQuad(c+3,"regfile_2", false,-1, 63,0);
    tracep->declQuad(c+5,"regfile_3", false,-1, 63,0);
    tracep->declQuad(c+7,"regfile_4", false,-1, 63,0);
    tracep->declQuad(c+9,"regfile_5", false,-1, 63,0);
    tracep->declQuad(c+11,"regfile_6", false,-1, 63,0);
    tracep->declQuad(c+13,"regfile_7", false,-1, 63,0);
    tracep->declQuad(c+15,"regfile_8", false,-1, 63,0);
    tracep->declQuad(c+17,"regfile_9", false,-1, 63,0);
    tracep->declQuad(c+19,"regfile_10", false,-1, 63,0);
    tracep->declQuad(c+21,"regfile_11", false,-1, 63,0);
    tracep->declQuad(c+23,"regfile_12", false,-1, 63,0);
    tracep->declQuad(c+25,"regfile_13", false,-1, 63,0);
    tracep->declQuad(c+27,"regfile_14", false,-1, 63,0);
    tracep->declQuad(c+29,"regfile_15", false,-1, 63,0);
    tracep->declQuad(c+31,"regfile_16", false,-1, 63,0);
    tracep->declQuad(c+33,"regfile_17", false,-1, 63,0);
    tracep->declQuad(c+35,"regfile_18", false,-1, 63,0);
    tracep->declQuad(c+37,"regfile_19", false,-1, 63,0);
    tracep->declQuad(c+39,"regfile_20", false,-1, 63,0);
    tracep->declQuad(c+41,"regfile_21", false,-1, 63,0);
    tracep->declQuad(c+43,"regfile_22", false,-1, 63,0);
    tracep->declQuad(c+45,"regfile_23", false,-1, 63,0);
    tracep->declQuad(c+47,"regfile_24", false,-1, 63,0);
    tracep->declQuad(c+49,"regfile_25", false,-1, 63,0);
    tracep->declQuad(c+51,"regfile_26", false,-1, 63,0);
    tracep->declQuad(c+53,"regfile_27", false,-1, 63,0);
    tracep->declQuad(c+55,"regfile_28", false,-1, 63,0);
    tracep->declQuad(c+57,"regfile_29", false,-1, 63,0);
    tracep->declQuad(c+59,"regfile_30", false,-1, 63,0);
    tracep->declQuad(c+61,"regfile_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+78,"io_inst", false,-1, 31,0);
    tracep->declBus(c+79,"io_sel", false,-1, 2,0);
    tracep->declQuad(c+80,"io_out", false,-1, 63,0);
    tracep->declBit(c+130,"sign", false,-1);
    tracep->declBus(c+131,"Iimm_lo", false,-1, 11,0);
    tracep->declQuad(c+132,"Iimm", false,-1, 43,0);
    tracep->declBus(c+134,"Simm_lo", false,-1, 11,0);
    tracep->declQuad(c+135,"Simm", false,-1, 43,0);
    tracep->declBus(c+137,"Bimm_lo_1", false,-1, 12,0);
    tracep->declQuad(c+138,"Bimm", false,-1, 44,0);
    tracep->declBus(c+140,"Uimm_lo", false,-1, 31,0);
    tracep->declQuad(c+141,"Uimm", false,-1, 63,0);
    tracep->declBus(c+143,"Jimm_lo_1", false,-1, 20,0);
    tracep->declQuad(c+144,"Jimm", false,-1, 52,0);
    tracep->declBus(c+146,"Zimm_lo", false,-1, 5,0);
    tracep->declQuad(c+147,"Zimm", false,-1, 37,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_ ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+63,"pc_addr", false,-1, 63,0);
    tracep->declQuad(c+102,"pc_data", false,-1, 63,0);
    tracep->declQuad(c+76,"addr", false,-1, 63,0);
    tracep->declQuad(c+104,"wdata", false,-1, 63,0);
    tracep->declBus(c+106,"mask", false,-1, 7,0);
    tracep->declQuad(c+107,"rdata", false,-1, 63,0);
    tracep->declBit(c+109,"enable", false,-1);
    tracep->declBit(c+110,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declBit(c+96,"io_wen", false,-1);
    tracep->declBus(c+97,"io_waddr", false,-1, 4,0);
    tracep->declQuad(c+98,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+100,"io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+101,"io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+91,"io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+93,"io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+1,"io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+3,"io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+5,"io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+7,"io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+9,"io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+11,"io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+13,"io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+15,"io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+17,"io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+19,"io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+21,"io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+23,"io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+25,"io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+27,"io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+29,"io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+31,"io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+33,"io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+35,"io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+37,"io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+39,"io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+41,"io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+43,"io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+45,"io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+47,"io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+49,"io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+51,"io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+53,"io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+55,"io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+57,"io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+59,"io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+61,"io_rdata_34", false,-1, 63,0);
    tracep->declQuad(c+68,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+1,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+3,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+5,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+7,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+9,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+11,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+13,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+15,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+17,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+19,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+21,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+23,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+25,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+27,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+29,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+31,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+33,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+35,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+37,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+39,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+41,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+43,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+45,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+47,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+49,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+51,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+53,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+55,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+57,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+59,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+61,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_top(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_top\n"); );
    // Body
    VmyCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VmyCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VmyCPU___024root__trace_register(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VmyCPU___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&VmyCPU___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&VmyCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VmyCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_top_0\n"); );
    // Init
    VmyCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmyCPU___024root*>(voidSelf);
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VmyCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VmyCPU___024root__trace_full_sub_0(VmyCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_he7104f08__0;
    VlWide<4>/*127:0*/ __Vtemp_heaea44b1__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->myCPU__DOT__regFile__DOT__reg_1),64);
    bufp->fullQData(oldp+3,(vlSelf->myCPU__DOT__regFile__DOT__reg_2),64);
    bufp->fullQData(oldp+5,(vlSelf->myCPU__DOT__regFile__DOT__reg_3),64);
    bufp->fullQData(oldp+7,(vlSelf->myCPU__DOT__regFile__DOT__reg_4),64);
    bufp->fullQData(oldp+9,(vlSelf->myCPU__DOT__regFile__DOT__reg_5),64);
    bufp->fullQData(oldp+11,(vlSelf->myCPU__DOT__regFile__DOT__reg_6),64);
    bufp->fullQData(oldp+13,(vlSelf->myCPU__DOT__regFile__DOT__reg_7),64);
    bufp->fullQData(oldp+15,(vlSelf->myCPU__DOT__regFile__DOT__reg_8),64);
    bufp->fullQData(oldp+17,(vlSelf->myCPU__DOT__regFile__DOT__reg_9),64);
    bufp->fullQData(oldp+19,(vlSelf->myCPU__DOT__regFile__DOT__reg_10),64);
    bufp->fullQData(oldp+21,(vlSelf->myCPU__DOT__regFile__DOT__reg_11),64);
    bufp->fullQData(oldp+23,(vlSelf->myCPU__DOT__regFile__DOT__reg_12),64);
    bufp->fullQData(oldp+25,(vlSelf->myCPU__DOT__regFile__DOT__reg_13),64);
    bufp->fullQData(oldp+27,(vlSelf->myCPU__DOT__regFile__DOT__reg_14),64);
    bufp->fullQData(oldp+29,(vlSelf->myCPU__DOT__regFile__DOT__reg_15),64);
    bufp->fullQData(oldp+31,(vlSelf->myCPU__DOT__regFile__DOT__reg_16),64);
    bufp->fullQData(oldp+33,(vlSelf->myCPU__DOT__regFile__DOT__reg_17),64);
    bufp->fullQData(oldp+35,(vlSelf->myCPU__DOT__regFile__DOT__reg_18),64);
    bufp->fullQData(oldp+37,(vlSelf->myCPU__DOT__regFile__DOT__reg_19),64);
    bufp->fullQData(oldp+39,(vlSelf->myCPU__DOT__regFile__DOT__reg_20),64);
    bufp->fullQData(oldp+41,(vlSelf->myCPU__DOT__regFile__DOT__reg_21),64);
    bufp->fullQData(oldp+43,(vlSelf->myCPU__DOT__regFile__DOT__reg_22),64);
    bufp->fullQData(oldp+45,(vlSelf->myCPU__DOT__regFile__DOT__reg_23),64);
    bufp->fullQData(oldp+47,(vlSelf->myCPU__DOT__regFile__DOT__reg_24),64);
    bufp->fullQData(oldp+49,(vlSelf->myCPU__DOT__regFile__DOT__reg_25),64);
    bufp->fullQData(oldp+51,(vlSelf->myCPU__DOT__regFile__DOT__reg_26),64);
    bufp->fullQData(oldp+53,(vlSelf->myCPU__DOT__regFile__DOT__reg_27),64);
    bufp->fullQData(oldp+55,(vlSelf->myCPU__DOT__regFile__DOT__reg_28),64);
    bufp->fullQData(oldp+57,(vlSelf->myCPU__DOT__regFile__DOT__reg_29),64);
    bufp->fullQData(oldp+59,(vlSelf->myCPU__DOT__regFile__DOT__reg_30),64);
    bufp->fullQData(oldp+61,(vlSelf->myCPU__DOT__regFile__DOT__reg_31),64);
    bufp->fullQData(oldp+63,((QData)((IData)(vlSelf->myCPU__DOT__pc))),64);
    bufp->fullIData(oldp+65,(vlSelf->myCPU__DOT__pc),32);
    bufp->fullQData(oldp+66,((QData)((IData)(((IData)(4U) 
                                              + vlSelf->myCPU__DOT__pc)))),64);
    bufp->fullQData(oldp+68,(vlSelf->myCPU__DOT__regFile__DOT__reg_0),64);
    bufp->fullQData(oldp+70,(vlSelf->myCPU__DOT__alu_io_A),64);
    bufp->fullQData(oldp+72,(vlSelf->myCPU__DOT__alu_io_B),64);
    bufp->fullCData(oldp+74,(vlSelf->myCPU__DOT__control_io_wd_type),2);
    bufp->fullCData(oldp+75,(vlSelf->myCPU__DOT__control_io_alu_op),4);
    bufp->fullQData(oldp+76,(vlSelf->myCPU__DOT__alu_io_out),64);
    bufp->fullIData(oldp+78,(vlSelf->myCPU__DOT__immGen_io_inst),32);
    bufp->fullCData(oldp+79,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
    bufp->fullQData(oldp+80,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                               ? (((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                                >> 0xfU)))) 
                                                                             >> 0x25U)))))))) 
                                   << 0x26U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                   >> 0xfU)))))
                               : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                   ? (((QData)((IData)(
                                                       (0x7ffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->myCPU__DOT__immGen__DOT__Jimm 
                                                                                >> 0x34U)))))))) 
                                       << 0x35U) | vlSelf->myCPU__DOT__immGen__DOT__Jimm)
                                   : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->myCPU__DOT__immGen_io_inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__immGen_io_inst))))
                                       : (((QData)((IData)(
                                                           (0x7ffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7 
                                                                                >> 0x2cU)))))))) 
                                           << 0x2dU) 
                                          | vlSelf->myCPU__DOT__immGen__DOT___io_out_T_7))))),64);
    bufp->fullIData(oldp+82,(vlSelf->myCPU__DOT__control_io_inst),32);
    bufp->fullCData(oldp+83,(vlSelf->myCPU__DOT__control_io_pc_sel),2);
    bufp->fullBit(oldp+84,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               & ((0x6fU != (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  & ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_215))))))))));
    bufp->fullBit(oldp+85,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               & ((0x6fU != (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  & ((0x67U != (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     & ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__control_io_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__control_io_inst)) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__control_io_inst)) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__control_io_inst)) 
                                                             & ((0x2003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                & ((0x4003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                   & ((0x5003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                      & ((0x6003U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__control_io_inst)) 
                                                                         & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_261)))))))))))))))))));
    bufp->fullCData(oldp+86,(vlSelf->myCPU__DOT__control_io_br_type),3);
    bufp->fullCData(oldp+87,(vlSelf->myCPU__DOT__control_io_st_type),3);
    bufp->fullCData(oldp+88,(vlSelf->myCPU__DOT__control_io_ld_type),3);
    bufp->fullCData(oldp+89,(vlSelf->myCPU__DOT__control_io_wb_sel),2);
    bufp->fullBit(oldp+90,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                            | ((0x17U == (0x7fU & vlSelf->myCPU__DOT__control_io_inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->myCPU__DOT__control_io_inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__control_io_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__control_io_inst)) 
                                                 & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_709)))))))))));
    bufp->fullQData(oldp+91,(vlSelf->myCPU__DOT__regFile_io_rdata_0),64);
    bufp->fullQData(oldp+93,(vlSelf->myCPU__DOT__regFile_io_rdata_1),64);
    bufp->fullBit(oldp+95,(vlSelf->myCPU__DOT__brCond_io_taken));
    bufp->fullBit(oldp+96,(vlSelf->myCPU__DOT__regFile_io_wen));
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                       >> 7U))),5);
    bufp->fullQData(oldp+98,(vlSelf->myCPU__DOT__regFile_io_wdata),64);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->myCPU__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+102,(vlSelf->myCPU__DOT__mem___05Fpc_data),64);
    VL_EXTEND_WQ(127,64, __Vtemp_he7104f08__0, vlSelf->myCPU__DOT__regFile_io_rdata_1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_heaea44b1__0, __Vtemp_he7104f08__0, 
                  (0x38U & ((IData)(vlSelf->myCPU__DOT__alu_io_out) 
                            << 3U)));
    bufp->fullQData(oldp+104,((((QData)((IData)(__Vtemp_heaea44b1__0[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp_heaea44b1__0[0U])))),64);
    bufp->fullCData(oldp+106,((0xffU & ((0xffU == (IData)(vlSelf->myCPU__DOT___st_mask_T_5))
                                         ? (IData)(vlSelf->myCPU__DOT___st_mask_T_5)
                                         : (0x7fffffU 
                                            & ((IData)(vlSelf->myCPU__DOT___st_mask_T_5) 
                                               << (7U 
                                                   & (IData)(vlSelf->myCPU__DOT__alu_io_out))))))),8);
    bufp->fullQData(oldp+107,(vlSelf->myCPU__DOT__mem___05Frdata),64);
    bufp->fullBit(oldp+109,(((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type)) 
                             | (0U != (IData)(vlSelf->myCPU__DOT__control_io_ld_type)))));
    bufp->fullBit(oldp+110,((0U != (IData)(vlSelf->myCPU__DOT__control_io_st_type))));
    bufp->fullIData(oldp+111,(vlSelf->myCPU__DOT__instr),32);
    bufp->fullQData(oldp+112,(vlSelf->myCPU__DOT__A_data),64);
    bufp->fullQData(oldp+114,(vlSelf->myCPU__DOT__B_data),64);
    bufp->fullSData(oldp+116,(vlSelf->myCPU__DOT___st_mask_T_5),16);
    bufp->fullQData(oldp+117,(vlSelf->myCPU__DOT__load_data),64);
    bufp->fullQData(oldp+119,(((1U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                ? (((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->myCPU__DOT__load_data 
                                                                 >> 0x1fU)))
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->myCPU__DOT__load_data)))
                                : ((6U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                    ? (QData)((IData)(vlSelf->myCPU__DOT__load_data))
                                    : ((2U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                        ? ((((1U & (IData)(
                                                           (vlSelf->myCPU__DOT__load_data 
                                                            >> 0xfU)))
                                              ? 0xffffffffffffULL
                                              : 0ULL) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->myCPU__DOT__load_data)))))
                                        : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->myCPU__DOT__load_data))))
                                            : ((3U 
                                                == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->myCPU__DOT__load_data 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->myCPU__DOT__load_data)))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->myCPU__DOT__control_io_ld_type))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->myCPU__DOT__load_data))))
                                                    : vlSelf->myCPU__DOT__load_data))))))),64);
    bufp->fullCData(oldp+121,(vlSelf->myCPU__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+122,((((QData)((IData)(vlSelf->myCPU__DOT__alu__DOT___out_T_50[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->myCPU__DOT__alu__DOT___out_T_50[0U])))),64);
    bufp->fullBit(oldp+124,(vlSelf->myCPU__DOT__brCond__DOT__eq));
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__eq)))));
    bufp->fullBit(oldp+126,(vlSelf->myCPU__DOT__brCond__DOT__lt));
    bufp->fullBit(oldp+127,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__lt)))));
    bufp->fullBit(oldp+128,(vlSelf->myCPU__DOT__brCond__DOT__ltu));
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->myCPU__DOT__brCond__DOT__ltu)))));
    bufp->fullBit(oldp+130,((vlSelf->myCPU__DOT__immGen_io_inst 
                             >> 0x1fU)));
    bufp->fullSData(oldp+131,((vlSelf->myCPU__DOT__immGen_io_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+132,(vlSelf->myCPU__DOT__immGen__DOT__Iimm),44);
    bufp->fullSData(oldp+134,(((0xfe0U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->myCPU__DOT__immGen_io_inst 
                                           >> 7U)))),12);
    bufp->fullQData(oldp+135,((((QData)((IData)(((vlSelf->myCPU__DOT__immGen_io_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                  >> 7U))))))),44);
    bufp->fullSData(oldp+137,(((0x1000U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                 >> 7U)))))),13);
    bufp->fullQData(oldp+138,((((QData)((IData)(((vlSelf->myCPU__DOT__immGen_io_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                                        >> 7U))))))))),45);
    bufp->fullIData(oldp+140,((0xfffff000U & vlSelf->myCPU__DOT__immGen_io_inst)),32);
    bufp->fullQData(oldp+141,((((QData)((IData)(((vlSelf->myCPU__DOT__immGen_io_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__immGen_io_inst))))),64);
    bufp->fullIData(oldp+143,(((0x100000U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->myCPU__DOT__immGen_io_inst) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__immGen_io_inst 
                                            >> 0x14U))))))),21);
    bufp->fullQData(oldp+144,(vlSelf->myCPU__DOT__immGen__DOT__Jimm),53);
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->myCPU__DOT__immGen_io_inst 
                                        >> 0xfU))),6);
    bufp->fullQData(oldp+147,((QData)((IData)((0x1fU 
                                               & (vlSelf->myCPU__DOT__immGen_io_inst 
                                                  >> 0xfU))))),38);
    bufp->fullBit(oldp+149,(vlSelf->clock));
    bufp->fullBit(oldp+150,(vlSelf->reset));
    bufp->fullQData(oldp+151,(vlSelf->io_pc_debug),64);
    bufp->fullQData(oldp+153,(0ULL),64);
}
