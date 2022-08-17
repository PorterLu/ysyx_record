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
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declQuad(c+4107,"io_pc_debug", false,-1, 63,0);
    tracep->declBus(c+4109,"io_inst", false,-1, 31,0);
    tracep->declBit(c+4110,"io_start", false,-1);
    tracep->declBit(c+4111,"io_stall", false,-1);
    tracep->declBit(c+4112,"io_master_awready", false,-1);
    tracep->declBit(c+4113,"io_master_awvalid", false,-1);
    tracep->declBus(c+4114,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+4115,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+4116,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+4117,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4118,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+4119,"io_master_wready", false,-1);
    tracep->declBit(c+4120,"io_master_wvalid", false,-1);
    tracep->declQuad(c+4121,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+4123,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+4124,"io_master_wlast", false,-1);
    tracep->declBit(c+4125,"io_master_bready", false,-1);
    tracep->declBit(c+4126,"io_master_bvalid", false,-1);
    tracep->declBus(c+4127,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+4128,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+4129,"io_master_arready", false,-1);
    tracep->declBit(c+4130,"io_master_arvalid", false,-1);
    tracep->declBus(c+4131,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+4132,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+4133,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+4134,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+4135,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+4136,"io_master_rready", false,-1);
    tracep->declBit(c+4137,"io_master_rvalid", false,-1);
    tracep->declBus(c+4138,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+4139,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+4141,"io_master_rlast", false,-1);
    tracep->declBus(c+4142,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("myCPU ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declQuad(c+4107,"io_pc_debug", false,-1, 63,0);
    tracep->declBus(c+4109,"io_inst", false,-1, 31,0);
    tracep->declBit(c+4110,"io_start", false,-1);
    tracep->declBit(c+4111,"io_stall", false,-1);
    tracep->declBit(c+4112,"io_master_awready", false,-1);
    tracep->declBit(c+4113,"io_master_awvalid", false,-1);
    tracep->declBus(c+4114,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+4115,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+4116,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+4117,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+4118,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+4119,"io_master_wready", false,-1);
    tracep->declBit(c+4120,"io_master_wvalid", false,-1);
    tracep->declQuad(c+4121,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+4123,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+4124,"io_master_wlast", false,-1);
    tracep->declBit(c+4125,"io_master_bready", false,-1);
    tracep->declBit(c+4126,"io_master_bvalid", false,-1);
    tracep->declBus(c+4127,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+4128,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+4129,"io_master_arready", false,-1);
    tracep->declBit(c+4130,"io_master_arvalid", false,-1);
    tracep->declBus(c+4131,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+4132,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+4133,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+4134,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+4135,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+4136,"io_master_rready", false,-1);
    tracep->declBit(c+4137,"io_master_rvalid", false,-1);
    tracep->declBus(c+4138,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+4139,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+4141,"io_master_rlast", false,-1);
    tracep->declBus(c+4142,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+4105,"datapath_clock", false,-1);
    tracep->declBit(c+4106,"datapath_reset", false,-1);
    tracep->declBus(c+1,"datapath_io_ctrl_inst", false,-1, 31,0);
    tracep->declBus(c+2,"datapath_io_ctrl_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"datapath_io_ctrl_A_sel", false,-1);
    tracep->declBit(c+4,"datapath_io_ctrl_B_sel", false,-1);
    tracep->declBus(c+5,"datapath_io_ctrl_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"datapath_io_ctrl_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"datapath_io_ctrl_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"datapath_io_ctrl_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"datapath_io_ctrl_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"datapath_io_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"datapath_io_ctrl_wb_en", false,-1);
    tracep->declBus(c+12,"datapath_io_ctrl_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"datapath_io_ctrl_prv", false,-1);
    tracep->declBus(c+14,"datapath_io_ctrl_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"datapath_io_ctrl_is_illegal", false,-1);
    tracep->declBit(c+16,"datapath_io_ctrl_is_kill", false,-1);
    tracep->declQuad(c+17,"datapath_io_pc", false,-1, 63,0);
    tracep->declBus(c+19,"datapath_io_inst", false,-1, 31,0);
    tracep->declBit(c+20,"datapath_io_start", false,-1);
    tracep->declBit(c+3674,"datapath_io_stall", false,-1);
    tracep->declBus(c+3675,"datapath_io_icache_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+4143,"datapath_io_icache_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3676,"datapath_io_icache_cpu_response_ready", false,-1);
    tracep->declBus(c+3677,"datapath_io_dcache_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+3651,"datapath_io_dcache_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+3653,"datapath_io_dcache_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+3678,"datapath_io_dcache_cpu_request_rw", false,-1);
    tracep->declBit(c+3679,"datapath_io_dcache_cpu_request_valid", false,-1);
    tracep->declQuad(c+4145,"datapath_io_dcache_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3654,"datapath_io_dcache_cpu_response_ready", false,-1);
    tracep->declBus(c+1,"control_io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"control_io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"control_io_A_sel", false,-1);
    tracep->declBit(c+4,"control_io_B_sel", false,-1);
    tracep->declBus(c+5,"control_io_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"control_io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"control_io_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"control_io_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"control_io_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"control_io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"control_io_wb_en", false,-1);
    tracep->declBus(c+12,"control_io_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"control_io_prv", false,-1);
    tracep->declBus(c+14,"control_io_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"control_io_is_illegal", false,-1);
    tracep->declBit(c+16,"control_io_is_kill", false,-1);
    tracep->declBit(c+4105,"icache_clock", false,-1);
    tracep->declBit(c+4106,"icache_reset", false,-1);
    tracep->declBus(c+3675,"icache_io_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+4147,"icache_io_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+4149,"icache_io_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+4150,"icache_io_cpu_request_rw", false,-1);
    tracep->declBit(c+4151,"icache_io_cpu_request_valid", false,-1);
    tracep->declQuad(c+4143,"icache_io_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3676,"icache_io_cpu_response_ready", false,-1);
    tracep->declBit(c+4150,"icache_io_mem_io_aw_ready", false,-1);
    tracep->declBit(c+21,"icache_io_mem_io_aw_valid", false,-1);
    tracep->declBus(c+22,"icache_io_mem_io_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+23,"icache_io_mem_io_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+4150,"icache_io_mem_io_w_ready", false,-1);
    tracep->declBit(c+24,"icache_io_mem_io_w_valid", false,-1);
    tracep->declQuad(c+3655,"icache_io_mem_io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+25,"icache_io_mem_io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+26,"icache_io_mem_io_w_bits_last", false,-1);
    tracep->declBit(c+27,"icache_io_mem_io_b_ready", false,-1);
    tracep->declBit(c+4150,"icache_io_mem_io_b_valid", false,-1);
    tracep->declBit(c+3680,"icache_io_mem_io_ar_ready", false,-1);
    tracep->declBit(c+28,"icache_io_mem_io_ar_valid", false,-1);
    tracep->declBus(c+29,"icache_io_mem_io_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+30,"icache_io_mem_io_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+31,"icache_io_mem_io_r_ready", false,-1);
    tracep->declBit(c+3681,"icache_io_mem_io_r_valid", false,-1);
    tracep->declQuad(c+4139,"icache_io_mem_io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"icache_io_mem_io_r_bits_last", false,-1);
    tracep->declBit(c+4105,"dcache_clock", false,-1);
    tracep->declBit(c+4106,"dcache_reset", false,-1);
    tracep->declBus(c+3677,"dcache_io_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+3651,"dcache_io_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+3653,"dcache_io_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+3678,"dcache_io_cpu_request_rw", false,-1);
    tracep->declBit(c+3679,"dcache_io_cpu_request_valid", false,-1);
    tracep->declQuad(c+4145,"dcache_io_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3654,"dcache_io_cpu_response_ready", false,-1);
    tracep->declBit(c+3682,"dcache_io_mem_io_aw_ready", false,-1);
    tracep->declBit(c+32,"dcache_io_mem_io_aw_valid", false,-1);
    tracep->declBus(c+33,"dcache_io_mem_io_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"dcache_io_mem_io_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+3683,"dcache_io_mem_io_w_ready", false,-1);
    tracep->declBit(c+35,"dcache_io_mem_io_w_valid", false,-1);
    tracep->declQuad(c+3657,"dcache_io_mem_io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"dcache_io_mem_io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"dcache_io_mem_io_w_bits_last", false,-1);
    tracep->declBit(c+37,"dcache_io_mem_io_b_ready", false,-1);
    tracep->declBit(c+3685,"dcache_io_mem_io_b_valid", false,-1);
    tracep->declBit(c+3686,"dcache_io_mem_io_ar_ready", false,-1);
    tracep->declBit(c+38,"dcache_io_mem_io_ar_valid", false,-1);
    tracep->declBus(c+39,"dcache_io_mem_io_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"dcache_io_mem_io_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+41,"dcache_io_mem_io_r_ready", false,-1);
    tracep->declBit(c+3687,"dcache_io_mem_io_r_valid", false,-1);
    tracep->declQuad(c+4139,"dcache_io_mem_io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"dcache_io_mem_io_r_bits_last", false,-1);
    tracep->declBit(c+4105,"arb_clock", false,-1);
    tracep->declBit(c+4106,"arb_reset", false,-1);
    tracep->declBit(c+3680,"arb_io_icache_ar_ready", false,-1);
    tracep->declBit(c+28,"arb_io_icache_ar_valid", false,-1);
    tracep->declBus(c+29,"arb_io_icache_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+30,"arb_io_icache_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+31,"arb_io_icache_r_ready", false,-1);
    tracep->declBit(c+3681,"arb_io_icache_r_valid", false,-1);
    tracep->declQuad(c+4139,"arb_io_icache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"arb_io_icache_r_bits_last", false,-1);
    tracep->declBit(c+3682,"arb_io_dcache_aw_ready", false,-1);
    tracep->declBit(c+32,"arb_io_dcache_aw_valid", false,-1);
    tracep->declBus(c+33,"arb_io_dcache_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"arb_io_dcache_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+3683,"arb_io_dcache_w_ready", false,-1);
    tracep->declBit(c+35,"arb_io_dcache_w_valid", false,-1);
    tracep->declQuad(c+3657,"arb_io_dcache_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"arb_io_dcache_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"arb_io_dcache_w_bits_last", false,-1);
    tracep->declBit(c+37,"arb_io_dcache_b_ready", false,-1);
    tracep->declBit(c+3685,"arb_io_dcache_b_valid", false,-1);
    tracep->declBit(c+3686,"arb_io_dcache_ar_ready", false,-1);
    tracep->declBit(c+38,"arb_io_dcache_ar_valid", false,-1);
    tracep->declBus(c+39,"arb_io_dcache_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"arb_io_dcache_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+41,"arb_io_dcache_r_ready", false,-1);
    tracep->declBit(c+3687,"arb_io_dcache_r_valid", false,-1);
    tracep->declQuad(c+4139,"arb_io_dcache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"arb_io_dcache_r_bits_last", false,-1);
    tracep->declBit(c+4112,"arb_io_axi_out_aw_ready", false,-1);
    tracep->declBit(c+42,"arb_io_axi_out_aw_valid", false,-1);
    tracep->declBus(c+33,"arb_io_axi_out_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"arb_io_axi_out_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+4119,"arb_io_axi_out_w_ready", false,-1);
    tracep->declBit(c+43,"arb_io_axi_out_w_valid", false,-1);
    tracep->declQuad(c+3657,"arb_io_axi_out_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"arb_io_axi_out_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"arb_io_axi_out_w_bits_last", false,-1);
    tracep->declBit(c+44,"arb_io_axi_out_b_ready", false,-1);
    tracep->declBit(c+4126,"arb_io_axi_out_b_valid", false,-1);
    tracep->declBit(c+4129,"arb_io_axi_out_ar_ready", false,-1);
    tracep->declBit(c+45,"arb_io_axi_out_ar_valid", false,-1);
    tracep->declBus(c+46,"arb_io_axi_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+47,"arb_io_axi_out_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+48,"arb_io_axi_out_r_ready", false,-1);
    tracep->declBit(c+4137,"arb_io_axi_out_r_valid", false,-1);
    tracep->declQuad(c+4139,"arb_io_axi_out_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"arb_io_axi_out_r_bits_last", false,-1);
    tracep->pushNamePrefix("arb ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBit(c+3680,"io_icache_ar_ready", false,-1);
    tracep->declBit(c+28,"io_icache_ar_valid", false,-1);
    tracep->declBus(c+29,"io_icache_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+30,"io_icache_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+31,"io_icache_r_ready", false,-1);
    tracep->declBit(c+3681,"io_icache_r_valid", false,-1);
    tracep->declQuad(c+4139,"io_icache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"io_icache_r_bits_last", false,-1);
    tracep->declBit(c+3682,"io_dcache_aw_ready", false,-1);
    tracep->declBit(c+32,"io_dcache_aw_valid", false,-1);
    tracep->declBus(c+33,"io_dcache_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"io_dcache_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+3683,"io_dcache_w_ready", false,-1);
    tracep->declBit(c+35,"io_dcache_w_valid", false,-1);
    tracep->declQuad(c+3657,"io_dcache_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"io_dcache_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"io_dcache_w_bits_last", false,-1);
    tracep->declBit(c+37,"io_dcache_b_ready", false,-1);
    tracep->declBit(c+3685,"io_dcache_b_valid", false,-1);
    tracep->declBit(c+3686,"io_dcache_ar_ready", false,-1);
    tracep->declBit(c+38,"io_dcache_ar_valid", false,-1);
    tracep->declBus(c+39,"io_dcache_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"io_dcache_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+41,"io_dcache_r_ready", false,-1);
    tracep->declBit(c+3687,"io_dcache_r_valid", false,-1);
    tracep->declQuad(c+4139,"io_dcache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"io_dcache_r_bits_last", false,-1);
    tracep->declBit(c+4112,"io_axi_out_aw_ready", false,-1);
    tracep->declBit(c+42,"io_axi_out_aw_valid", false,-1);
    tracep->declBus(c+33,"io_axi_out_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"io_axi_out_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+4119,"io_axi_out_w_ready", false,-1);
    tracep->declBit(c+43,"io_axi_out_w_valid", false,-1);
    tracep->declQuad(c+3657,"io_axi_out_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"io_axi_out_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"io_axi_out_w_bits_last", false,-1);
    tracep->declBit(c+44,"io_axi_out_b_ready", false,-1);
    tracep->declBit(c+4126,"io_axi_out_b_valid", false,-1);
    tracep->declBit(c+4129,"io_axi_out_ar_ready", false,-1);
    tracep->declBit(c+45,"io_axi_out_ar_valid", false,-1);
    tracep->declBus(c+46,"io_axi_out_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+47,"io_axi_out_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+48,"io_axi_out_r_ready", false,-1);
    tracep->declBit(c+4137,"io_axi_out_r_valid", false,-1);
    tracep->declQuad(c+4139,"io_axi_out_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"io_axi_out_r_bits_last", false,-1);
    tracep->declBus(c+49,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"io_A_sel", false,-1);
    tracep->declBit(c+4,"io_B_sel", false,-1);
    tracep->declBus(c+5,"io_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"io_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"io_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"io_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"io_wb_en", false,-1);
    tracep->declBus(c+12,"io_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"io_prv", false,-1);
    tracep->declBus(c+14,"io_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"io_is_illegal", false,-1);
    tracep->declBit(c+16,"io_is_kill", false,-1);
    tracep->declBus(c+50,"ctrlSignals_5", false,-1, 4,0);
    tracep->declBus(c+51,"ctrlSignals_11", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBus(c+1,"io_ctrl_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_ctrl_pc_sel", false,-1, 1,0);
    tracep->declBit(c+3,"io_ctrl_A_sel", false,-1);
    tracep->declBit(c+4,"io_ctrl_B_sel", false,-1);
    tracep->declBus(c+5,"io_ctrl_wd_type", false,-1, 1,0);
    tracep->declBus(c+6,"io_ctrl_imm_sel", false,-1, 2,0);
    tracep->declBus(c+7,"io_ctrl_br_type", false,-1, 2,0);
    tracep->declBus(c+8,"io_ctrl_st_type", false,-1, 2,0);
    tracep->declBus(c+9,"io_ctrl_ld_type", false,-1, 2,0);
    tracep->declBus(c+10,"io_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+11,"io_ctrl_wb_en", false,-1);
    tracep->declBus(c+12,"io_ctrl_alu_op", false,-1, 3,0);
    tracep->declBit(c+13,"io_ctrl_prv", false,-1);
    tracep->declBus(c+14,"io_ctrl_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+15,"io_ctrl_is_illegal", false,-1);
    tracep->declBit(c+16,"io_ctrl_is_kill", false,-1);
    tracep->declQuad(c+17,"io_pc", false,-1, 63,0);
    tracep->declBus(c+19,"io_inst", false,-1, 31,0);
    tracep->declBit(c+20,"io_start", false,-1);
    tracep->declBit(c+3674,"io_stall", false,-1);
    tracep->declBus(c+3675,"io_icache_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+4143,"io_icache_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3676,"io_icache_cpu_response_ready", false,-1);
    tracep->declBus(c+3677,"io_dcache_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+3651,"io_dcache_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+3653,"io_dcache_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+3678,"io_dcache_cpu_request_rw", false,-1);
    tracep->declBit(c+3679,"io_dcache_cpu_request_valid", false,-1);
    tracep->declQuad(c+4145,"io_dcache_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3654,"io_dcache_cpu_response_ready", false,-1);
    tracep->declQuad(c+3688,"alu_io_A", false,-1, 63,0);
    tracep->declQuad(c+3690,"alu_io_B", false,-1, 63,0);
    tracep->declBus(c+52,"alu_io_width_type", false,-1, 1,0);
    tracep->declBus(c+53,"alu_io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+3692,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+3694,"alu_io_sum", false,-1, 63,0);
    tracep->declBus(c+1,"immGen_io_inst", false,-1, 31,0);
    tracep->declBus(c+6,"immGen_io_sel", false,-1, 2,0);
    tracep->declQuad(c+54,"immGen_io_out", false,-1, 63,0);
    tracep->declQuad(c+3696,"brCond_io_rs1", false,-1, 63,0);
    tracep->declQuad(c+3698,"brCond_io_rs2", false,-1, 63,0);
    tracep->declBus(c+56,"brCond_io_br_type", false,-1, 2,0);
    tracep->declBit(c+3659,"brCond_io_taken", false,-1);
    tracep->declBit(c+4105,"regFile_clock", false,-1);
    tracep->declBit(c+4106,"regFile_reset", false,-1);
    tracep->declBit(c+3700,"regFile_io_wen", false,-1);
    tracep->declBus(c+57,"regFile_io_waddr", false,-1, 4,0);
    tracep->declQuad(c+58,"regFile_io_wdata", false,-1, 63,0);
    tracep->declBus(c+60,"regFile_io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+61,"regFile_io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+62,"regFile_io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+64,"regFile_io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+66,"regFile_io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+68,"regFile_io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+70,"regFile_io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+72,"regFile_io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+74,"regFile_io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+76,"regFile_io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+78,"regFile_io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+80,"regFile_io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+82,"regFile_io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+84,"regFile_io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+86,"regFile_io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+88,"regFile_io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+90,"regFile_io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+92,"regFile_io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+94,"regFile_io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+96,"regFile_io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+98,"regFile_io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+100,"regFile_io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+102,"regFile_io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+104,"regFile_io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+106,"regFile_io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+108,"regFile_io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+110,"regFile_io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+112,"regFile_io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+114,"regFile_io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+116,"regFile_io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+118,"regFile_io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+120,"regFile_io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+122,"regFile_io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+124,"regFile_io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+126,"regFile_io_rdata_34", false,-1, 63,0);
    tracep->declBit(c+4105,"csr_clock", false,-1);
    tracep->declBit(c+4106,"csr_reset", false,-1);
    tracep->declBus(c+3701,"csr_io_flush_mask", false,-1, 3,0);
    tracep->declBus(c+128,"csr_io_r_op", false,-1, 2,0);
    tracep->declBus(c+129,"csr_io_r_addr", false,-1, 11,0);
    tracep->declQuad(c+130,"csr_io_r_data", false,-1, 63,0);
    tracep->declBus(c+132,"csr_io_w_op", false,-1, 2,0);
    tracep->declBus(c+133,"csr_io_w_addr", false,-1, 11,0);
    tracep->declQuad(c+134,"csr_io_w_data", false,-1, 63,0);
    tracep->declBit(c+136,"csr_io_retired", false,-1);
    tracep->declBus(c+19,"csr_io_inst", false,-1, 31,0);
    tracep->declBus(c+137,"csr_io_illegal_inst", false,-1, 31,0);
    tracep->declBus(c+138,"csr_io_inst_mode", false,-1, 1,0);
    tracep->declBit(c+139,"csr_io_fetch_misalign", false,-1);
    tracep->declBit(c+3702,"csr_io_load_misalign", false,-1);
    tracep->declBit(c+3703,"csr_io_store_misalign", false,-1);
    tracep->declQuad(c+140,"csr_io_jump_addr", false,-1, 63,0);
    tracep->declBit(c+142,"csr_io_jump_taken", false,-1);
    tracep->declBit(c+143,"csr_io_isSret", false,-1);
    tracep->declBit(c+144,"csr_io_isMret", false,-1);
    tracep->declQuad(c+145,"csr_io_pc_fetch_misalign", false,-1, 63,0);
    tracep->declQuad(c+3694,"csr_io_load_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+3694,"csr_io_store_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_io_ebreak_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_io_excPC", false,-1, 63,0);
    tracep->declQuad(c+3704,"csr_io_excValue", false,-1, 63,0);
    tracep->declQuad(c+3706,"csr_io_trapVec", false,-1, 63,0);
    tracep->declBit(c+3708,"csr_io_stall", false,-1);
    tracep->declBit(c+3709,"csr_io_trap", false,-1);
    tracep->declBit(c+147,"csr_io_fd_enable", false,-1);
    tracep->declBit(c+148,"csr_io_de_enable", false,-1);
    tracep->declBit(c+149,"csr_io_em_enable", false,-1);
    tracep->declBit(c+150,"csr_io_mw_enable", false,-1);
    tracep->declBit(c+4105,"gpr_ptr_clock", false,-1);
    tracep->declBit(c+4106,"gpr_ptr_reset", false,-1);
    tracep->declQuad(c+4147,"gpr_ptr_regfile_0", false,-1, 63,0);
    tracep->declQuad(c+66,"gpr_ptr_regfile_1", false,-1, 63,0);
    tracep->declQuad(c+68,"gpr_ptr_regfile_2", false,-1, 63,0);
    tracep->declQuad(c+70,"gpr_ptr_regfile_3", false,-1, 63,0);
    tracep->declQuad(c+72,"gpr_ptr_regfile_4", false,-1, 63,0);
    tracep->declQuad(c+74,"gpr_ptr_regfile_5", false,-1, 63,0);
    tracep->declQuad(c+76,"gpr_ptr_regfile_6", false,-1, 63,0);
    tracep->declQuad(c+78,"gpr_ptr_regfile_7", false,-1, 63,0);
    tracep->declQuad(c+80,"gpr_ptr_regfile_8", false,-1, 63,0);
    tracep->declQuad(c+82,"gpr_ptr_regfile_9", false,-1, 63,0);
    tracep->declQuad(c+84,"gpr_ptr_regfile_10", false,-1, 63,0);
    tracep->declQuad(c+86,"gpr_ptr_regfile_11", false,-1, 63,0);
    tracep->declQuad(c+88,"gpr_ptr_regfile_12", false,-1, 63,0);
    tracep->declQuad(c+90,"gpr_ptr_regfile_13", false,-1, 63,0);
    tracep->declQuad(c+92,"gpr_ptr_regfile_14", false,-1, 63,0);
    tracep->declQuad(c+94,"gpr_ptr_regfile_15", false,-1, 63,0);
    tracep->declQuad(c+96,"gpr_ptr_regfile_16", false,-1, 63,0);
    tracep->declQuad(c+98,"gpr_ptr_regfile_17", false,-1, 63,0);
    tracep->declQuad(c+100,"gpr_ptr_regfile_18", false,-1, 63,0);
    tracep->declQuad(c+102,"gpr_ptr_regfile_19", false,-1, 63,0);
    tracep->declQuad(c+104,"gpr_ptr_regfile_20", false,-1, 63,0);
    tracep->declQuad(c+106,"gpr_ptr_regfile_21", false,-1, 63,0);
    tracep->declQuad(c+108,"gpr_ptr_regfile_22", false,-1, 63,0);
    tracep->declQuad(c+110,"gpr_ptr_regfile_23", false,-1, 63,0);
    tracep->declQuad(c+112,"gpr_ptr_regfile_24", false,-1, 63,0);
    tracep->declQuad(c+114,"gpr_ptr_regfile_25", false,-1, 63,0);
    tracep->declQuad(c+116,"gpr_ptr_regfile_26", false,-1, 63,0);
    tracep->declQuad(c+118,"gpr_ptr_regfile_27", false,-1, 63,0);
    tracep->declQuad(c+120,"gpr_ptr_regfile_28", false,-1, 63,0);
    tracep->declQuad(c+122,"gpr_ptr_regfile_29", false,-1, 63,0);
    tracep->declQuad(c+124,"gpr_ptr_regfile_30", false,-1, 63,0);
    tracep->declQuad(c+126,"gpr_ptr_regfile_31", false,-1, 63,0);
    tracep->declBus(c+1,"fd_pipe_reg_inst", false,-1, 31,0);
    tracep->declQuad(c+151,"fd_pipe_reg_pc", false,-1, 63,0);
    tracep->declBit(c+147,"fd_pipe_reg_enable", false,-1);
    tracep->declBus(c+53,"de_pipe_reg_alu_op", false,-1, 3,0);
    tracep->declQuad(c+145,"de_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+153,"de_pipe_reg_inst", false,-1, 31,0);
    tracep->declQuad(c+154,"de_pipe_reg_imm", false,-1, 63,0);
    tracep->declQuad(c+156,"de_pipe_reg_rs1", false,-1, 63,0);
    tracep->declQuad(c+158,"de_pipe_reg_src1_addr", false,-1, 63,0);
    tracep->declQuad(c+160,"de_pipe_reg_rs2", false,-1, 63,0);
    tracep->declQuad(c+162,"de_pipe_reg_src2_addr", false,-1, 63,0);
    tracep->declQuad(c+164,"de_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+166,"de_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+167,"de_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+168,"de_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declBus(c+170,"de_pipe_reg_dest", false,-1, 4,0);
    tracep->declBit(c+171,"de_pipe_reg_A_sel", false,-1);
    tracep->declBit(c+172,"de_pipe_reg_B_sel", false,-1);
    tracep->declBus(c+173,"de_pipe_reg_pc_sel", false,-1, 1,0);
    tracep->declBus(c+56,"de_pipe_reg_br_type", false,-1, 2,0);
    tracep->declBus(c+52,"de_pipe_reg_wd_type", false,-1, 1,0);
    tracep->declBus(c+174,"de_pipe_reg_st_type", false,-1, 2,0);
    tracep->declBus(c+175,"de_pipe_reg_ld_type", false,-1, 2,0);
    tracep->declBus(c+176,"de_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+177,"de_pipe_reg_wb_en", false,-1);
    tracep->declBit(c+148,"de_pipe_reg_enable", false,-1);
    tracep->declQuad(c+178,"em_pipe_reg_alu_out", false,-1, 63,0);
    tracep->declQuad(c+180,"em_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+182,"em_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+183,"em_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+184,"em_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declQuad(c+186,"em_pipe_reg_jump_addr", false,-1, 63,0);
    tracep->declBit(c+188,"em_pipe_reg_jump_taken", false,-1);
    tracep->declQuad(c+189,"em_pipe_reg_st_data", false,-1, 63,0);
    tracep->declBus(c+191,"em_pipe_reg_st_type", false,-1, 2,0);
    tracep->declBus(c+192,"em_pipe_reg_ld_type", false,-1, 2,0);
    tracep->declBus(c+193,"em_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+194,"em_pipe_reg_wb_en", false,-1);
    tracep->declBus(c+195,"em_pipe_reg_dest", false,-1, 4,0);
    tracep->declQuad(c+196,"em_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+198,"em_pipe_reg_inst", false,-1, 31,0);
    tracep->declBit(c+149,"em_pipe_reg_enable", false,-1);
    tracep->declQuad(c+199,"mw_pipe_reg_load_data", false,-1, 63,0);
    tracep->declQuad(c+201,"mw_pipe_reg_alu_out", false,-1, 63,0);
    tracep->declBus(c+57,"mw_pipe_reg_dest", false,-1, 4,0);
    tracep->declQuad(c+203,"mw_pipe_reg_csr_read_data", false,-1, 63,0);
    tracep->declBus(c+132,"mw_pipe_reg_csr_write_op", false,-1, 2,0);
    tracep->declBus(c+133,"mw_pipe_reg_csr_write_addr", false,-1, 11,0);
    tracep->declQuad(c+134,"mw_pipe_reg_csr_write_data", false,-1, 63,0);
    tracep->declQuad(c+140,"mw_pipe_reg_jump_addr", false,-1, 63,0);
    tracep->declBit(c+142,"mw_pipe_reg_jump_taken", false,-1);
    tracep->declBus(c+205,"mw_pipe_reg_wb_sel", false,-1, 1,0);
    tracep->declBit(c+206,"mw_pipe_reg_wb_en", false,-1);
    tracep->declQuad(c+17,"mw_pipe_reg_pc", false,-1, 63,0);
    tracep->declBus(c+19,"mw_pipe_reg_inst", false,-1, 31,0);
    tracep->declBit(c+150,"mw_pipe_reg_enable", false,-1);
    tracep->declBit(c+20,"started", false,-1);
    tracep->declBit(c+3710,"dcache_stall", false,-1);
    tracep->declBit(c+3708,"stall", false,-1);
    tracep->declBus(c+207,"csr_atomic_flush", false,-1, 3,0);
    tracep->declBit(c+3711,"brCond_taken", false,-1);
    tracep->declBit(c+208,"jmp_occur", false,-1);
    tracep->declBit(c+3712,"flush_fd", false,-1);
    tracep->declBit(c+3713,"flush_de", false,-1);
    tracep->declBit(c+3714,"flush_em", false,-1);
    tracep->declBit(c+3715,"flush_mw", false,-1);
    tracep->declBit(c+209,"csr_atomic", false,-1);
    tracep->declArray(c+210,"pc", false,-1, 64,0);
    tracep->declQuad(c+3692,"jump_addr", false,-1, 63,0);
    tracep->declArray(c+3660,"next_pc", false,-1, 64,0);
    tracep->declBit(c+213,"is_kill_inst", false,-1);
    tracep->declBus(c+3663,"inst", false,-1, 31,0);
    tracep->declBus(c+60,"src1_addr", false,-1, 4,0);
    tracep->declBus(c+61,"src2_addr", false,-1, 4,0);
    tracep->declBus(c+214,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+3664,"csr_write_addr", false,-1, 4,0);
    tracep->declQuad(c+3716,"load_data_hazard", false,-1, 63,0);
    tracep->declQuad(c+3665,"load_data_ext_hazard", false,-1, 63,0);
    tracep->declQuad(c+3667,"src1_data", false,-1, 63,0);
    tracep->declQuad(c+3698,"src2_data", false,-1, 63,0);
    tracep->declQuad(c+3718,"A_data", false,-1, 63,0);
    tracep->declQuad(c+3720,"B_data", false,-1, 63,0);
    tracep->declBus(c+3722,"st_mask", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+3688,"io_A", false,-1, 63,0);
    tracep->declQuad(c+3690,"io_B", false,-1, 63,0);
    tracep->declBus(c+52,"io_width_type", false,-1, 1,0);
    tracep->declBus(c+53,"io_alu_op", false,-1, 3,0);
    tracep->declQuad(c+3692,"io_out", false,-1, 63,0);
    tracep->declQuad(c+3694,"io_sum", false,-1, 63,0);
    tracep->declBus(c+3723,"shamt", false,-1, 5,0);
    tracep->declQuad(c+3724,"sum", false,-1, 63,0);
    tracep->declQuad(c+3726,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brCond ");
    tracep->declQuad(c+3696,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+3698,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+56,"io_br_type", false,-1, 2,0);
    tracep->declBit(c+3659,"io_taken", false,-1);
    tracep->declBit(c+3728,"eq", false,-1);
    tracep->declBit(c+3729,"neq", false,-1);
    tracep->declBit(c+3730,"lt", false,-1);
    tracep->declBit(c+3731,"ge", false,-1);
    tracep->declBit(c+3732,"ltu", false,-1);
    tracep->declBit(c+3733,"geu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBus(c+3701,"io_flush_mask", false,-1, 3,0);
    tracep->declBus(c+128,"io_r_op", false,-1, 2,0);
    tracep->declBus(c+129,"io_r_addr", false,-1, 11,0);
    tracep->declQuad(c+130,"io_r_data", false,-1, 63,0);
    tracep->declBus(c+132,"io_w_op", false,-1, 2,0);
    tracep->declBus(c+133,"io_w_addr", false,-1, 11,0);
    tracep->declQuad(c+134,"io_w_data", false,-1, 63,0);
    tracep->declBit(c+136,"io_retired", false,-1);
    tracep->declBus(c+19,"io_inst", false,-1, 31,0);
    tracep->declBus(c+137,"io_illegal_inst", false,-1, 31,0);
    tracep->declBus(c+138,"io_inst_mode", false,-1, 1,0);
    tracep->declBit(c+139,"io_fetch_misalign", false,-1);
    tracep->declBit(c+3702,"io_load_misalign", false,-1);
    tracep->declBit(c+3703,"io_store_misalign", false,-1);
    tracep->declQuad(c+140,"io_jump_addr", false,-1, 63,0);
    tracep->declBit(c+142,"io_jump_taken", false,-1);
    tracep->declBit(c+143,"io_isSret", false,-1);
    tracep->declBit(c+144,"io_isMret", false,-1);
    tracep->declQuad(c+145,"io_pc_fetch_misalign", false,-1, 63,0);
    tracep->declQuad(c+3694,"io_load_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+3694,"io_store_misalign_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"io_ebreak_addr", false,-1, 63,0);
    tracep->declQuad(c+17,"io_excPC", false,-1, 63,0);
    tracep->declQuad(c+3704,"io_excValue", false,-1, 63,0);
    tracep->declQuad(c+3706,"io_trapVec", false,-1, 63,0);
    tracep->declBit(c+3708,"io_stall", false,-1);
    tracep->declBit(c+3709,"io_trap", false,-1);
    tracep->declBit(c+147,"io_fd_enable", false,-1);
    tracep->declBit(c+148,"io_de_enable", false,-1);
    tracep->declBit(c+149,"io_em_enable", false,-1);
    tracep->declBit(c+150,"io_mw_enable", false,-1);
    tracep->declBus(c+215,"mode", false,-1, 1,0);
    tracep->declBit(c+216,"mstatus_sum", false,-1);
    tracep->declBus(c+217,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+218,"mstatus_spp", false,-1);
    tracep->declBit(c+219,"mstatus_mpie", false,-1);
    tracep->declBit(c+220,"mstatus_spie", false,-1);
    tracep->declBit(c+221,"mstatus_mie", false,-1);
    tracep->declBit(c+222,"mstatus_sie", false,-1);
    tracep->declQuad(c+223,"medeleg_data", false,-1, 63,0);
    tracep->declQuad(c+225,"mideleg_data", false,-1, 63,0);
    tracep->declBit(c+227,"mie_meie", false,-1);
    tracep->declBit(c+228,"mie_seie", false,-1);
    tracep->declBit(c+229,"mie_mtie", false,-1);
    tracep->declBit(c+230,"mie_stie", false,-1);
    tracep->declBit(c+231,"mie_msie", false,-1);
    tracep->declBit(c+232,"mie_ssie", false,-1);
    tracep->declQuad(c+233,"mtvec_base", false,-1, 61,0);
    tracep->declBus(c+235,"mtvec_mode", false,-1, 1,0);
    tracep->declQuad(c+236,"mscratch_data", false,-1, 63,0);
    tracep->declQuad(c+238,"mepc_data", false,-1, 63,0);
    tracep->declBit(c+240,"mcause_int", false,-1);
    tracep->declQuad(c+241,"mcause_code", false,-1, 62,0);
    tracep->declQuad(c+243,"mtval_data", false,-1, 63,0);
    tracep->declBit(c+245,"mip_meip", false,-1);
    tracep->declBit(c+246,"mip_seip", false,-1);
    tracep->declBit(c+247,"mip_stip", false,-1);
    tracep->declBit(c+248,"mip_msip", false,-1);
    tracep->declBit(c+249,"mip_ssip", false,-1);
    tracep->declQuad(c+250,"mcycle_data", false,-1, 63,0);
    tracep->declQuad(c+252,"minstret_data", false,-1, 63,0);
    tracep->declBus(c+254,"sstatus_lo_lo", false,-1, 5,0);
    tracep->declBus(c+255,"sstatus_lo", false,-1, 16,0);
    tracep->declBit(c+256,"sstatus_sum", false,-1);
    tracep->declBit(c+257,"sstatus_spp", false,-1);
    tracep->declBit(c+258,"sstatus_spie", false,-1);
    tracep->declBit(c+259,"sstatus_sie", false,-1);
    tracep->declBus(c+260,"sie_lo", false,-1, 5,0);
    tracep->declBus(c+261,"sip_lo", false,-1, 5,0);
    tracep->declQuad(c+262,"stvec_base", false,-1, 61,0);
    tracep->declBus(c+264,"stvec_mode", false,-1, 1,0);
    tracep->declQuad(c+265,"sscratch_data", false,-1, 63,0);
    tracep->declQuad(c+267,"sepc_data", false,-1, 63,0);
    tracep->declBit(c+269,"scause_int", false,-1);
    tracep->declQuad(c+270,"scause_code", false,-1, 62,0);
    tracep->declQuad(c+272,"stval_data", false,-1, 63,0);
    tracep->declBus(c+274,"lo", false,-1, 12,0);
    tracep->declBit(c+275,"tmp_meie", false,-1);
    tracep->declBit(c+276,"tmp_mtie", false,-1);
    tracep->declBit(c+277,"tmp_msie", false,-1);
    tracep->declBus(c+278,"lo_7", false,-1, 5,0);
    tracep->declBit(c+279,"sie_ssie", false,-1);
    tracep->declBit(c+280,"sie_stie", false,-1);
    tracep->declBit(c+281,"sie_seie", false,-1);
    tracep->declBit(c+282,"readable", false,-1);
    tracep->declBit(c+283,"writable", false,-1);
    tracep->declBit(c+284,"instValid", false,-1);
    tracep->declBit(c+285,"modeValid", false,-1);
    tracep->declBit(c+286,"valid", false,-1);
    tracep->declQuad(c+4147,"csrData", false,-1, 63,0);
    tracep->declBit(c+287,"writeEn", false,-1);
    tracep->declQuad(c+288,"writeData", false,-1, 63,0);
    tracep->declQuad(c+290,"flagIntS", false,-1, 63,0);
    tracep->declQuad(c+292,"flagIntM", false,-1, 63,0);
    tracep->declBit(c+294,"hasIntS", false,-1);
    tracep->declBit(c+295,"hasIntM", false,-1);
    tracep->declBit(c+296,"hasInt", false,-1);
    tracep->declBit(c+297,"handIntS", false,-1);
    tracep->declBit(c+3734,"hasExc", false,-1);
    tracep->declQuad(c+3735,"excCause", false,-1, 62,0);
    tracep->declBit(c+3669,"hasExcS", false,-1);
    tracep->declBit(c+3737,"handExcS", false,-1);
    tracep->declQuad(c+298,"intCauseS", false,-1, 62,0);
    tracep->declQuad(c+300,"intCause", false,-1, 62,0);
    tracep->declQuad(c+3738,"cause", false,-1, 63,0);
    tracep->declQuad(c+3670,"trapVecS", false,-1, 63,0);
    tracep->declQuad(c+3672,"trapVecM", false,-1, 63,0);
    tracep->declBus(c+302,"sretMode", false,-1, 1,0);
    tracep->declBus(c+3740,"excMode", false,-1, 1,0);
    tracep->declBit(c+303,"tmp_1_sum", false,-1);
    tracep->declBit(c+304,"tmp_1_spp", false,-1);
    tracep->declBit(c+305,"tmp_1_spie", false,-1);
    tracep->declBit(c+306,"tmp_1_sie", false,-1);
    tracep->declBus(c+307,"lo_8", false,-1, 12,0);
    tracep->declBit(c+308,"tmp_2_seie", false,-1);
    tracep->declBus(c+309,"mideleg_data_lo", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr_ptr ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declQuad(c+4147,"regfile_0", false,-1, 63,0);
    tracep->declQuad(c+66,"regfile_1", false,-1, 63,0);
    tracep->declQuad(c+68,"regfile_2", false,-1, 63,0);
    tracep->declQuad(c+70,"regfile_3", false,-1, 63,0);
    tracep->declQuad(c+72,"regfile_4", false,-1, 63,0);
    tracep->declQuad(c+74,"regfile_5", false,-1, 63,0);
    tracep->declQuad(c+76,"regfile_6", false,-1, 63,0);
    tracep->declQuad(c+78,"regfile_7", false,-1, 63,0);
    tracep->declQuad(c+80,"regfile_8", false,-1, 63,0);
    tracep->declQuad(c+82,"regfile_9", false,-1, 63,0);
    tracep->declQuad(c+84,"regfile_10", false,-1, 63,0);
    tracep->declQuad(c+86,"regfile_11", false,-1, 63,0);
    tracep->declQuad(c+88,"regfile_12", false,-1, 63,0);
    tracep->declQuad(c+90,"regfile_13", false,-1, 63,0);
    tracep->declQuad(c+92,"regfile_14", false,-1, 63,0);
    tracep->declQuad(c+94,"regfile_15", false,-1, 63,0);
    tracep->declQuad(c+96,"regfile_16", false,-1, 63,0);
    tracep->declQuad(c+98,"regfile_17", false,-1, 63,0);
    tracep->declQuad(c+100,"regfile_18", false,-1, 63,0);
    tracep->declQuad(c+102,"regfile_19", false,-1, 63,0);
    tracep->declQuad(c+104,"regfile_20", false,-1, 63,0);
    tracep->declQuad(c+106,"regfile_21", false,-1, 63,0);
    tracep->declQuad(c+108,"regfile_22", false,-1, 63,0);
    tracep->declQuad(c+110,"regfile_23", false,-1, 63,0);
    tracep->declQuad(c+112,"regfile_24", false,-1, 63,0);
    tracep->declQuad(c+114,"regfile_25", false,-1, 63,0);
    tracep->declQuad(c+116,"regfile_26", false,-1, 63,0);
    tracep->declQuad(c+118,"regfile_27", false,-1, 63,0);
    tracep->declQuad(c+120,"regfile_28", false,-1, 63,0);
    tracep->declQuad(c+122,"regfile_29", false,-1, 63,0);
    tracep->declQuad(c+124,"regfile_30", false,-1, 63,0);
    tracep->declQuad(c+126,"regfile_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+6,"io_sel", false,-1, 2,0);
    tracep->declQuad(c+54,"io_out", false,-1, 63,0);
    tracep->declBit(c+310,"sign", false,-1);
    tracep->declBus(c+311,"Iimm_lo", false,-1, 11,0);
    tracep->declQuad(c+312,"Iimm", false,-1, 43,0);
    tracep->declBus(c+314,"Simm_lo", false,-1, 11,0);
    tracep->declQuad(c+315,"Simm", false,-1, 43,0);
    tracep->declBus(c+317,"Bimm_lo_1", false,-1, 12,0);
    tracep->declQuad(c+318,"Bimm", false,-1, 44,0);
    tracep->declBus(c+320,"Uimm_lo", false,-1, 31,0);
    tracep->declQuad(c+321,"Uimm", false,-1, 63,0);
    tracep->declBus(c+323,"Jimm_lo_1", false,-1, 20,0);
    tracep->declQuad(c+324,"Jimm", false,-1, 52,0);
    tracep->declBus(c+326,"Zimm_lo", false,-1, 5,0);
    tracep->declQuad(c+327,"Zimm", false,-1, 37,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBit(c+3700,"io_wen", false,-1);
    tracep->declBus(c+57,"io_waddr", false,-1, 4,0);
    tracep->declQuad(c+58,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+60,"io_raddr_0", false,-1, 4,0);
    tracep->declBus(c+61,"io_raddr_1", false,-1, 4,0);
    tracep->declQuad(c+62,"io_rdata_0", false,-1, 63,0);
    tracep->declQuad(c+64,"io_rdata_1", false,-1, 63,0);
    tracep->declQuad(c+66,"io_rdata_4", false,-1, 63,0);
    tracep->declQuad(c+68,"io_rdata_5", false,-1, 63,0);
    tracep->declQuad(c+70,"io_rdata_6", false,-1, 63,0);
    tracep->declQuad(c+72,"io_rdata_7", false,-1, 63,0);
    tracep->declQuad(c+74,"io_rdata_8", false,-1, 63,0);
    tracep->declQuad(c+76,"io_rdata_9", false,-1, 63,0);
    tracep->declQuad(c+78,"io_rdata_10", false,-1, 63,0);
    tracep->declQuad(c+80,"io_rdata_11", false,-1, 63,0);
    tracep->declQuad(c+82,"io_rdata_12", false,-1, 63,0);
    tracep->declQuad(c+84,"io_rdata_13", false,-1, 63,0);
    tracep->declQuad(c+86,"io_rdata_14", false,-1, 63,0);
    tracep->declQuad(c+88,"io_rdata_15", false,-1, 63,0);
    tracep->declQuad(c+90,"io_rdata_16", false,-1, 63,0);
    tracep->declQuad(c+92,"io_rdata_17", false,-1, 63,0);
    tracep->declQuad(c+94,"io_rdata_18", false,-1, 63,0);
    tracep->declQuad(c+96,"io_rdata_19", false,-1, 63,0);
    tracep->declQuad(c+98,"io_rdata_20", false,-1, 63,0);
    tracep->declQuad(c+100,"io_rdata_21", false,-1, 63,0);
    tracep->declQuad(c+102,"io_rdata_22", false,-1, 63,0);
    tracep->declQuad(c+104,"io_rdata_23", false,-1, 63,0);
    tracep->declQuad(c+106,"io_rdata_24", false,-1, 63,0);
    tracep->declQuad(c+108,"io_rdata_25", false,-1, 63,0);
    tracep->declQuad(c+110,"io_rdata_26", false,-1, 63,0);
    tracep->declQuad(c+112,"io_rdata_27", false,-1, 63,0);
    tracep->declQuad(c+114,"io_rdata_28", false,-1, 63,0);
    tracep->declQuad(c+116,"io_rdata_29", false,-1, 63,0);
    tracep->declQuad(c+118,"io_rdata_30", false,-1, 63,0);
    tracep->declQuad(c+120,"io_rdata_31", false,-1, 63,0);
    tracep->declQuad(c+122,"io_rdata_32", false,-1, 63,0);
    tracep->declQuad(c+124,"io_rdata_33", false,-1, 63,0);
    tracep->declQuad(c+126,"io_rdata_34", false,-1, 63,0);
    tracep->declQuad(c+329,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+66,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+68,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+70,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+72,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+74,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+76,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+78,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+80,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+82,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+84,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+86,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+88,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+90,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+92,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+94,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+96,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+98,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+100,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+102,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+104,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+106,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+108,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+110,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+112,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+114,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+116,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+118,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+120,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+122,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+124,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+126,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__icache__0(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__icache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBus(c+3675,"io_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+4147,"io_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+4149,"io_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+4150,"io_cpu_request_rw", false,-1);
    tracep->declBit(c+4151,"io_cpu_request_valid", false,-1);
    tracep->declQuad(c+4143,"io_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3676,"io_cpu_response_ready", false,-1);
    tracep->declBit(c+4150,"io_mem_io_aw_ready", false,-1);
    tracep->declBit(c+21,"io_mem_io_aw_valid", false,-1);
    tracep->declBus(c+22,"io_mem_io_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+23,"io_mem_io_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+4150,"io_mem_io_w_ready", false,-1);
    tracep->declBit(c+24,"io_mem_io_w_valid", false,-1);
    tracep->declQuad(c+3655,"io_mem_io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+25,"io_mem_io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+26,"io_mem_io_w_bits_last", false,-1);
    tracep->declBit(c+27,"io_mem_io_b_ready", false,-1);
    tracep->declBit(c+4150,"io_mem_io_b_valid", false,-1);
    tracep->declBit(c+3680,"io_mem_io_ar_ready", false,-1);
    tracep->declBit(c+28,"io_mem_io_ar_valid", false,-1);
    tracep->declBus(c+29,"io_mem_io_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+30,"io_mem_io_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+31,"io_mem_io_r_ready", false,-1);
    tracep->declBit(c+3681,"io_mem_io_r_valid", false,-1);
    tracep->declQuad(c+4139,"io_mem_io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"io_mem_io_r_bits_last", false,-1);
    tracep->declBit(c+4105,"tag_mem_0_clock", false,-1);
    tracep->declBus(c+331,"tag_mem_0_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+332,"tag_mem_0_io_cache_req_we", false,-1);
    tracep->declBit(c+333,"tag_mem_0_io_tag_write_valid", false,-1);
    tracep->declBit(c+334,"tag_mem_0_io_tag_write_dirty", false,-1);
    tracep->declBus(c+335,"tag_mem_0_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+336,"tag_mem_0_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+337,"tag_mem_0_io_tag_read_valid", false,-1);
    tracep->declBit(c+338,"tag_mem_0_io_tag_read_dirty", false,-1);
    tracep->declBus(c+339,"tag_mem_0_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+340,"tag_mem_0_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_1_clock", false,-1);
    tracep->declBus(c+331,"tag_mem_1_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+341,"tag_mem_1_io_cache_req_we", false,-1);
    tracep->declBit(c+342,"tag_mem_1_io_tag_write_valid", false,-1);
    tracep->declBit(c+343,"tag_mem_1_io_tag_write_dirty", false,-1);
    tracep->declBus(c+344,"tag_mem_1_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+345,"tag_mem_1_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+346,"tag_mem_1_io_tag_read_valid", false,-1);
    tracep->declBit(c+347,"tag_mem_1_io_tag_read_dirty", false,-1);
    tracep->declBus(c+348,"tag_mem_1_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+349,"tag_mem_1_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_2_clock", false,-1);
    tracep->declBus(c+331,"tag_mem_2_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+350,"tag_mem_2_io_cache_req_we", false,-1);
    tracep->declBit(c+351,"tag_mem_2_io_tag_write_valid", false,-1);
    tracep->declBit(c+352,"tag_mem_2_io_tag_write_dirty", false,-1);
    tracep->declBus(c+353,"tag_mem_2_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+354,"tag_mem_2_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+355,"tag_mem_2_io_tag_read_valid", false,-1);
    tracep->declBit(c+356,"tag_mem_2_io_tag_read_dirty", false,-1);
    tracep->declBus(c+357,"tag_mem_2_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+358,"tag_mem_2_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_3_clock", false,-1);
    tracep->declBus(c+331,"tag_mem_3_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+359,"tag_mem_3_io_cache_req_we", false,-1);
    tracep->declBit(c+360,"tag_mem_3_io_tag_write_valid", false,-1);
    tracep->declBit(c+361,"tag_mem_3_io_tag_write_dirty", false,-1);
    tracep->declBus(c+362,"tag_mem_3_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+363,"tag_mem_3_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+364,"tag_mem_3_io_tag_read_valid", false,-1);
    tracep->declBit(c+365,"tag_mem_3_io_tag_read_dirty", false,-1);
    tracep->declBus(c+366,"tag_mem_3_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+367,"tag_mem_3_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"data_mem_0_clock", false,-1);
    tracep->declBus(c+3741,"data_mem_0_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"data_mem_0_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3742,"data_mem_0_io_cache_req_we", false,-1);
    tracep->declArray(c+3743,"data_mem_0_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+368,"data_mem_0_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_1_clock", false,-1);
    tracep->declBus(c+3741,"data_mem_1_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"data_mem_1_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3775,"data_mem_1_io_cache_req_we", false,-1);
    tracep->declArray(c+3776,"data_mem_1_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+400,"data_mem_1_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_2_clock", false,-1);
    tracep->declBus(c+3741,"data_mem_2_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"data_mem_2_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3808,"data_mem_2_io_cache_req_we", false,-1);
    tracep->declArray(c+3809,"data_mem_2_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+432,"data_mem_2_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_3_clock", false,-1);
    tracep->declBus(c+3741,"data_mem_3_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"data_mem_3_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3841,"data_mem_3_io_cache_req_we", false,-1);
    tracep->declArray(c+3842,"data_mem_3_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+464,"data_mem_3_io_data_read_data", false,-1, 1023,0);
    tracep->declBus(c+496,"cache_state", false,-1, 3,0);
    tracep->declBus(c+497,"index", false,-1, 3,0);
    tracep->declBit(c+498,"wrap_wrap", false,-1);
    tracep->declBit(c+499,"fill_block_en", false,-1);
    tracep->declBit(c+500,"last", false,-1);
    tracep->declBus(c+501,"replace", false,-1, 1,0);
    tracep->declBus(c+502,"refill_addr", false,-1, 31,0);
    tracep->declBus(c+503,"writeback_addr", false,-1, 31,0);
    tracep->declBus(c+504,"cpu_request_addr_reg", false,-1, 31,0);
    tracep->declQuad(c+505,"cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+507,"cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+508,"cpu_request_rw", false,-1);
    tracep->declBus(c+331,"cpu_request_addr_index", false,-1, 2,0);
    tracep->declBus(c+509,"cpu_request_addr_tag", false,-1, 21,0);
    tracep->declBit(c+510,"is_match_0", false,-1);
    tracep->declBit(c+511,"is_match_1", false,-1);
    tracep->declBit(c+512,"is_match_2", false,-1);
    tracep->declBit(c+513,"is_match_3", false,-1);
    tracep->declArray(c+514,"response_data", false,-1, 1023,0);
    tracep->declQuad(c+546,"part_0", false,-1, 63,0);
    tracep->declQuad(c+548,"part_1", false,-1, 63,0);
    tracep->declQuad(c+550,"part_2", false,-1, 63,0);
    tracep->declQuad(c+552,"part_3", false,-1, 63,0);
    tracep->declQuad(c+554,"part_4", false,-1, 63,0);
    tracep->declQuad(c+556,"part_5", false,-1, 63,0);
    tracep->declQuad(c+558,"part_6", false,-1, 63,0);
    tracep->declQuad(c+560,"part_7", false,-1, 63,0);
    tracep->declQuad(c+562,"result", false,-1, 63,0);
    tracep->declQuad(c+3874,"cache_data_1", false,-1, 63,0);
    tracep->declQuad(c+3876,"cache_data_0", false,-1, 63,0);
    tracep->declQuad(c+3878,"cache_data_3", false,-1, 63,0);
    tracep->declQuad(c+3880,"cache_data_2", false,-1, 63,0);
    tracep->declQuad(c+3882,"cache_data_5", false,-1, 63,0);
    tracep->declQuad(c+3884,"cache_data_4", false,-1, 63,0);
    tracep->declQuad(c+3886,"cache_data_7", false,-1, 63,0);
    tracep->declQuad(c+3888,"cache_data_6", false,-1, 63,0);
    tracep->declArray(c+3890,"data_mem_0_io_data_write_data_lo", false,-1, 511,0);
    tracep->declQuad(c+3906,"cache_data_9", false,-1, 63,0);
    tracep->declQuad(c+3908,"cache_data_8", false,-1, 63,0);
    tracep->declQuad(c+3910,"cache_data_11", false,-1, 63,0);
    tracep->declQuad(c+3912,"cache_data_10", false,-1, 63,0);
    tracep->declQuad(c+3914,"cache_data_13", false,-1, 63,0);
    tracep->declQuad(c+3916,"cache_data_12", false,-1, 63,0);
    tracep->declQuad(c+3918,"cache_data_15", false,-1, 63,0);
    tracep->declQuad(c+3920,"cache_data_14", false,-1, 63,0);
    tracep->declBus(c+564,"visit_1", false,-1, 7,0);
    tracep->declBus(c+565,"visit_0", false,-1, 7,0);
    tracep->declBus(c+566,"visit_3", false,-1, 7,0);
    tracep->declBus(c+567,"visit_2", false,-1, 7,0);
    tracep->declBit(c+568,"compare_2_3", false,-1);
    tracep->declBit(c+569,"compare_1_0", false,-1);
    tracep->declBit(c+570,"max_01_or_23", false,-1);
    tracep->declBus(c+571,"max", false,-1, 1,0);
    tracep->pushNamePrefix("data_mem_0 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3741,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3742,"io_cache_req_we", false,-1);
    tracep->declArray(c+3743,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+368,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+572+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+828,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+829,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+830,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3743,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+331,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3742,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+828,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+829,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+862,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+894,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_1 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3741,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3775,"io_cache_req_we", false,-1);
    tracep->declArray(c+3776,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+400,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+895+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+1151,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+1152,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+1153,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3776,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+331,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3775,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+1151,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+1152,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+1185,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+1217,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_2 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3741,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3808,"io_cache_req_we", false,-1);
    tracep->declArray(c+3809,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+432,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+1218+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+1474,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+1475,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+1476,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3809,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+331,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3808,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+1474,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+1475,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+1508,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+1540,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_3 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3741,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+331,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3841,"io_cache_req_we", false,-1);
    tracep->declArray(c+3842,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+464,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+1541+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+1797,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+1798,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+1799,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3842,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+331,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3841,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+1797,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+1798,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+1831,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+1863,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_0 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+331,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+332,"io_cache_req_we", false,-1);
    tracep->declBit(c+333,"io_tag_write_valid", false,-1);
    tracep->declBit(c+334,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+335,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+336,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+337,"io_tag_read_valid", false,-1);
    tracep->declBit(c+338,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+339,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+340,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+1864,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+1865,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+1866,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+1867,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+1868,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+1869,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+1870,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+1871,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+1872,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+1873,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+1874,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+1875,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+1876,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+1877,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+1878,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+1879,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+1880,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+1881,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+1882,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+1883,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+1884,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+1885,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+1886,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+1887,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+1888,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+1889,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+1890,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+1891,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+1892,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+1893,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+1894,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+1895,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_1 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+331,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+341,"io_cache_req_we", false,-1);
    tracep->declBit(c+342,"io_tag_write_valid", false,-1);
    tracep->declBit(c+343,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+344,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+345,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+346,"io_tag_read_valid", false,-1);
    tracep->declBit(c+347,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+348,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+349,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+1896,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+1897,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+1898,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+1899,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+1900,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+1901,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+1902,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+1903,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+1904,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+1905,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+1906,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+1907,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+1908,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+1909,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+1910,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+1911,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+1912,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+1913,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+1914,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+1915,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+1916,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+1917,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+1918,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+1919,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+1920,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+1921,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+1922,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+1923,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+1924,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+1925,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+1926,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+1927,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_2 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+331,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+350,"io_cache_req_we", false,-1);
    tracep->declBit(c+351,"io_tag_write_valid", false,-1);
    tracep->declBit(c+352,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+353,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+354,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+355,"io_tag_read_valid", false,-1);
    tracep->declBit(c+356,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+357,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+358,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+1928,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+1929,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+1930,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+1931,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+1932,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+1933,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+1934,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+1935,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+1936,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+1937,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+1938,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+1939,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+1940,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+1941,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+1942,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+1943,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+1944,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+1945,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+1946,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+1947,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+1948,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+1949,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+1950,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+1951,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+1952,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+1953,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+1954,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+1955,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+1956,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+1957,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+1958,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+1959,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_3 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+331,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+359,"io_cache_req_we", false,-1);
    tracep->declBit(c+360,"io_tag_write_valid", false,-1);
    tracep->declBit(c+361,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+362,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+363,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+364,"io_tag_read_valid", false,-1);
    tracep->declBit(c+365,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+366,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+367,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+1960,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+1961,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+1962,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+1963,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+1964,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+1965,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+1966,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+1967,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+1968,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+1969,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+1970,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+1971,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+1972,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+1973,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+1974,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+1975,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+1976,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+1977,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+1978,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+1979,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+1980,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+1981,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+1982,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+1983,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+1984,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+1985,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+1986,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+1987,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+1988,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+1989,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+1990,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+1991,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__dcache__0(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__dcache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBit(c+4106,"reset", false,-1);
    tracep->declBus(c+3677,"io_cpu_request_addr", false,-1, 31,0);
    tracep->declQuad(c+3651,"io_cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+3653,"io_cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+3678,"io_cpu_request_rw", false,-1);
    tracep->declBit(c+3679,"io_cpu_request_valid", false,-1);
    tracep->declQuad(c+4145,"io_cpu_response_data", false,-1, 63,0);
    tracep->declBit(c+3654,"io_cpu_response_ready", false,-1);
    tracep->declBit(c+3682,"io_mem_io_aw_ready", false,-1);
    tracep->declBit(c+32,"io_mem_io_aw_valid", false,-1);
    tracep->declBus(c+33,"io_mem_io_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+34,"io_mem_io_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+3683,"io_mem_io_w_ready", false,-1);
    tracep->declBit(c+35,"io_mem_io_w_valid", false,-1);
    tracep->declQuad(c+3657,"io_mem_io_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+36,"io_mem_io_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+3684,"io_mem_io_w_bits_last", false,-1);
    tracep->declBit(c+37,"io_mem_io_b_ready", false,-1);
    tracep->declBit(c+3685,"io_mem_io_b_valid", false,-1);
    tracep->declBit(c+3686,"io_mem_io_ar_ready", false,-1);
    tracep->declBit(c+38,"io_mem_io_ar_valid", false,-1);
    tracep->declBus(c+39,"io_mem_io_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"io_mem_io_ar_bits_len", false,-1, 7,0);
    tracep->declBit(c+41,"io_mem_io_r_ready", false,-1);
    tracep->declBit(c+3687,"io_mem_io_r_valid", false,-1);
    tracep->declQuad(c+4139,"io_mem_io_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+4141,"io_mem_io_r_bits_last", false,-1);
    tracep->declBit(c+4105,"tag_mem_0_clock", false,-1);
    tracep->declBus(c+1992,"tag_mem_0_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+1993,"tag_mem_0_io_cache_req_we", false,-1);
    tracep->declBit(c+1994,"tag_mem_0_io_tag_write_valid", false,-1);
    tracep->declBit(c+1995,"tag_mem_0_io_tag_write_dirty", false,-1);
    tracep->declBus(c+1996,"tag_mem_0_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+1997,"tag_mem_0_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+1998,"tag_mem_0_io_tag_read_valid", false,-1);
    tracep->declBit(c+1999,"tag_mem_0_io_tag_read_dirty", false,-1);
    tracep->declBus(c+2000,"tag_mem_0_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2001,"tag_mem_0_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_1_clock", false,-1);
    tracep->declBus(c+1992,"tag_mem_1_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2002,"tag_mem_1_io_cache_req_we", false,-1);
    tracep->declBit(c+2003,"tag_mem_1_io_tag_write_valid", false,-1);
    tracep->declBit(c+2004,"tag_mem_1_io_tag_write_dirty", false,-1);
    tracep->declBus(c+2005,"tag_mem_1_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2006,"tag_mem_1_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2007,"tag_mem_1_io_tag_read_valid", false,-1);
    tracep->declBit(c+2008,"tag_mem_1_io_tag_read_dirty", false,-1);
    tracep->declBus(c+2009,"tag_mem_1_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2010,"tag_mem_1_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_2_clock", false,-1);
    tracep->declBus(c+1992,"tag_mem_2_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2011,"tag_mem_2_io_cache_req_we", false,-1);
    tracep->declBit(c+2012,"tag_mem_2_io_tag_write_valid", false,-1);
    tracep->declBit(c+2013,"tag_mem_2_io_tag_write_dirty", false,-1);
    tracep->declBus(c+2014,"tag_mem_2_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2015,"tag_mem_2_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2016,"tag_mem_2_io_tag_read_valid", false,-1);
    tracep->declBit(c+2017,"tag_mem_2_io_tag_read_dirty", false,-1);
    tracep->declBus(c+2018,"tag_mem_2_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2019,"tag_mem_2_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"tag_mem_3_clock", false,-1);
    tracep->declBus(c+1992,"tag_mem_3_io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2020,"tag_mem_3_io_cache_req_we", false,-1);
    tracep->declBit(c+2021,"tag_mem_3_io_tag_write_valid", false,-1);
    tracep->declBit(c+2022,"tag_mem_3_io_tag_write_dirty", false,-1);
    tracep->declBus(c+2023,"tag_mem_3_io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2024,"tag_mem_3_io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2025,"tag_mem_3_io_tag_read_valid", false,-1);
    tracep->declBit(c+2026,"tag_mem_3_io_tag_read_dirty", false,-1);
    tracep->declBus(c+2027,"tag_mem_3_io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2028,"tag_mem_3_io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+4105,"data_mem_0_clock", false,-1);
    tracep->declBus(c+3922,"data_mem_0_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"data_mem_0_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3923,"data_mem_0_io_cache_req_we", false,-1);
    tracep->declArray(c+3924,"data_mem_0_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2029,"data_mem_0_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_1_clock", false,-1);
    tracep->declBus(c+3922,"data_mem_1_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"data_mem_1_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3956,"data_mem_1_io_cache_req_we", false,-1);
    tracep->declArray(c+3957,"data_mem_1_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2061,"data_mem_1_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_2_clock", false,-1);
    tracep->declBus(c+3922,"data_mem_2_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"data_mem_2_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3989,"data_mem_2_io_cache_req_we", false,-1);
    tracep->declArray(c+3990,"data_mem_2_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2093,"data_mem_2_io_data_read_data", false,-1, 1023,0);
    tracep->declBit(c+4105,"data_mem_3_clock", false,-1);
    tracep->declBus(c+3922,"data_mem_3_io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"data_mem_3_io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+4022,"data_mem_3_io_cache_req_we", false,-1);
    tracep->declArray(c+4023,"data_mem_3_io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2125,"data_mem_3_io_data_read_data", false,-1, 1023,0);
    tracep->declBus(c+2157,"cache_state", false,-1, 3,0);
    tracep->declBus(c+2158,"index", false,-1, 3,0);
    tracep->declBit(c+2159,"wrap_wrap", false,-1);
    tracep->declBit(c+4055,"fill_block_en", false,-1);
    tracep->declBit(c+4056,"last", false,-1);
    tracep->declBus(c+2160,"replace", false,-1, 1,0);
    tracep->declBus(c+2161,"refill_addr", false,-1, 31,0);
    tracep->declBus(c+2162,"writeback_addr", false,-1, 31,0);
    tracep->declBus(c+2163,"cpu_request_addr_reg", false,-1, 31,0);
    tracep->declQuad(c+2164,"cpu_request_data", false,-1, 63,0);
    tracep->declBus(c+2166,"cpu_request_mask", false,-1, 7,0);
    tracep->declBit(c+2167,"cpu_request_rw", false,-1);
    tracep->declBus(c+1992,"cpu_request_addr_index", false,-1, 2,0);
    tracep->declBus(c+2168,"cpu_request_addr_tag", false,-1, 21,0);
    tracep->declBit(c+2169,"is_match_0", false,-1);
    tracep->declBit(c+2170,"is_match_1", false,-1);
    tracep->declBit(c+2171,"is_match_2", false,-1);
    tracep->declBit(c+2172,"is_match_3", false,-1);
    tracep->declArray(c+2173,"response_data", false,-1, 1023,0);
    tracep->declQuad(c+2205,"part_0", false,-1, 63,0);
    tracep->declQuad(c+2207,"part_1", false,-1, 63,0);
    tracep->declQuad(c+2209,"part_2", false,-1, 63,0);
    tracep->declQuad(c+2211,"part_3", false,-1, 63,0);
    tracep->declQuad(c+2213,"part_4", false,-1, 63,0);
    tracep->declQuad(c+2215,"part_5", false,-1, 63,0);
    tracep->declQuad(c+2217,"part_6", false,-1, 63,0);
    tracep->declQuad(c+2219,"part_7", false,-1, 63,0);
    tracep->declQuad(c+2221,"result", false,-1, 63,0);
    tracep->declQuad(c+4057,"cache_data_1", false,-1, 63,0);
    tracep->declQuad(c+4059,"cache_data_0", false,-1, 63,0);
    tracep->declQuad(c+4061,"cache_data_3", false,-1, 63,0);
    tracep->declQuad(c+4063,"cache_data_2", false,-1, 63,0);
    tracep->declQuad(c+4065,"cache_data_5", false,-1, 63,0);
    tracep->declQuad(c+4067,"cache_data_4", false,-1, 63,0);
    tracep->declQuad(c+4069,"cache_data_7", false,-1, 63,0);
    tracep->declQuad(c+4071,"cache_data_6", false,-1, 63,0);
    tracep->declArray(c+4073,"data_mem_0_io_data_write_data_lo", false,-1, 511,0);
    tracep->declQuad(c+4089,"cache_data_9", false,-1, 63,0);
    tracep->declQuad(c+4091,"cache_data_8", false,-1, 63,0);
    tracep->declQuad(c+4093,"cache_data_11", false,-1, 63,0);
    tracep->declQuad(c+4095,"cache_data_10", false,-1, 63,0);
    tracep->declQuad(c+4097,"cache_data_13", false,-1, 63,0);
    tracep->declQuad(c+4099,"cache_data_12", false,-1, 63,0);
    tracep->declQuad(c+4101,"cache_data_15", false,-1, 63,0);
    tracep->declQuad(c+4103,"cache_data_14", false,-1, 63,0);
    tracep->declBus(c+2223,"visit_1", false,-1, 7,0);
    tracep->declBus(c+2224,"visit_0", false,-1, 7,0);
    tracep->declBus(c+2225,"visit_3", false,-1, 7,0);
    tracep->declBus(c+2226,"visit_2", false,-1, 7,0);
    tracep->declBit(c+2227,"compare_2_3", false,-1);
    tracep->declBit(c+2228,"compare_1_0", false,-1);
    tracep->declBit(c+2229,"max_01_or_23", false,-1);
    tracep->declBus(c+2230,"max", false,-1, 1,0);
    tracep->pushNamePrefix("data_mem_0 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3922,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3923,"io_cache_req_we", false,-1);
    tracep->declArray(c+3924,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2029,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+2231+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+2487,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+2488,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+2489,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3924,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+1992,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3923,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+2487,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+2488,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+2521,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+2553,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_1 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3922,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3956,"io_cache_req_we", false,-1);
    tracep->declArray(c+3957,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2061,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+2554+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+2810,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+2811,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+2812,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3957,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+1992,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3956,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+2810,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+2811,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+2844,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+2876,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_2 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3922,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+3989,"io_cache_req_we", false,-1);
    tracep->declArray(c+3990,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2093,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+2877+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+3133,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+3134,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+3135,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+3990,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+1992,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+3989,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+3133,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+3134,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+3167,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+3199,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_3 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+3922,"io_cache_req_index", false,-1, 2,0);
    tracep->declBus(c+1992,"io_cache_req_write_index", false,-1, 2,0);
    tracep->declBit(c+4022,"io_cache_req_we", false,-1);
    tracep->declArray(c+4023,"io_data_write_data", false,-1, 1023,0);
    tracep->declArray(c+2125,"io_data_read_data", false,-1, 1023,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+3200+i*32,"data_mem_data", true,(i+0), 1023,0);
    }
    tracep->declBit(c+3456,"data_mem_data_readData_en", false,-1);
    tracep->declBus(c+3457,"data_mem_data_readData_addr", false,-1, 2,0);
    tracep->declArray(c+3458,"data_mem_data_readData_data", false,-1, 1023,0);
    tracep->declArray(c+4023,"data_mem_data_MPORT_data", false,-1, 1023,0);
    tracep->declBus(c+1992,"data_mem_data_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+4151,"data_mem_data_MPORT_mask", false,-1);
    tracep->declBit(c+4022,"data_mem_data_MPORT_en", false,-1);
    tracep->declBit(c+3456,"data_mem_data_readData_en_pipe_0", false,-1);
    tracep->declBus(c+3457,"data_mem_data_readData_addr_pipe_0", false,-1, 2,0);
    tracep->declArray(c+3490,"wDataReg_data", false,-1, 1023,0);
    tracep->declBit(c+3522,"doForwardReg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_0 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+1992,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+1993,"io_cache_req_we", false,-1);
    tracep->declBit(c+1994,"io_tag_write_valid", false,-1);
    tracep->declBit(c+1995,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+1996,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+1997,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+1998,"io_tag_read_valid", false,-1);
    tracep->declBit(c+1999,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+2000,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2001,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+3523,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+3524,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+3525,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+3526,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+3527,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+3528,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+3529,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+3530,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+3531,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+3532,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+3533,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+3534,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+3535,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+3536,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+3537,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+3538,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+3539,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+3540,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+3541,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+3542,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+3543,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+3544,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+3545,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+3546,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+3547,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+3548,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+3549,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+3550,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+3551,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+3552,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+3553,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+3554,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_1 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+1992,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2002,"io_cache_req_we", false,-1);
    tracep->declBit(c+2003,"io_tag_write_valid", false,-1);
    tracep->declBit(c+2004,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+2005,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2006,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2007,"io_tag_read_valid", false,-1);
    tracep->declBit(c+2008,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+2009,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2010,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+3555,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+3556,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+3557,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+3558,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+3559,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+3560,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+3561,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+3562,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+3563,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+3564,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+3565,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+3566,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+3567,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+3568,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+3569,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+3570,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+3571,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+3572,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+3573,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+3574,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+3575,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+3576,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+3577,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+3578,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+3579,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+3580,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+3581,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+3582,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+3583,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+3584,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+3585,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+3586,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_2 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+1992,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2011,"io_cache_req_we", false,-1);
    tracep->declBit(c+2012,"io_tag_write_valid", false,-1);
    tracep->declBit(c+2013,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+2014,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2015,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2016,"io_tag_read_valid", false,-1);
    tracep->declBit(c+2017,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+2018,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2019,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+3587,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+3588,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+3589,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+3590,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+3591,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+3592,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+3593,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+3594,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+3595,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+3596,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+3597,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+3598,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+3599,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+3600,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+3601,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+3602,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+3603,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+3604,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+3605,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+3606,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+3607,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+3608,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+3609,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+3610,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+3611,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+3612,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+3613,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+3614,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+3615,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+3616,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+3617,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+3618,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem_3 ");
    tracep->declBit(c+4105,"clock", false,-1);
    tracep->declBus(c+1992,"io_cache_req_index", false,-1, 2,0);
    tracep->declBit(c+2020,"io_cache_req_we", false,-1);
    tracep->declBit(c+2021,"io_tag_write_valid", false,-1);
    tracep->declBit(c+2022,"io_tag_write_dirty", false,-1);
    tracep->declBus(c+2023,"io_tag_write_visit", false,-1, 7,0);
    tracep->declBus(c+2024,"io_tag_write_tag", false,-1, 21,0);
    tracep->declBit(c+2025,"io_tag_read_valid", false,-1);
    tracep->declBit(c+2026,"io_tag_read_dirty", false,-1);
    tracep->declBus(c+2027,"io_tag_read_visit", false,-1, 7,0);
    tracep->declBus(c+2028,"io_tag_read_tag", false,-1, 21,0);
    tracep->declBit(c+3619,"tag_mem_0_valid", false,-1);
    tracep->declBit(c+3620,"tag_mem_0_dirty", false,-1);
    tracep->declBus(c+3621,"tag_mem_0_visit", false,-1, 7,0);
    tracep->declBus(c+3622,"tag_mem_0_tag", false,-1, 21,0);
    tracep->declBit(c+3623,"tag_mem_1_valid", false,-1);
    tracep->declBit(c+3624,"tag_mem_1_dirty", false,-1);
    tracep->declBus(c+3625,"tag_mem_1_visit", false,-1, 7,0);
    tracep->declBus(c+3626,"tag_mem_1_tag", false,-1, 21,0);
    tracep->declBit(c+3627,"tag_mem_2_valid", false,-1);
    tracep->declBit(c+3628,"tag_mem_2_dirty", false,-1);
    tracep->declBus(c+3629,"tag_mem_2_visit", false,-1, 7,0);
    tracep->declBus(c+3630,"tag_mem_2_tag", false,-1, 21,0);
    tracep->declBit(c+3631,"tag_mem_3_valid", false,-1);
    tracep->declBit(c+3632,"tag_mem_3_dirty", false,-1);
    tracep->declBus(c+3633,"tag_mem_3_visit", false,-1, 7,0);
    tracep->declBus(c+3634,"tag_mem_3_tag", false,-1, 21,0);
    tracep->declBit(c+3635,"tag_mem_4_valid", false,-1);
    tracep->declBit(c+3636,"tag_mem_4_dirty", false,-1);
    tracep->declBus(c+3637,"tag_mem_4_visit", false,-1, 7,0);
    tracep->declBus(c+3638,"tag_mem_4_tag", false,-1, 21,0);
    tracep->declBit(c+3639,"tag_mem_5_valid", false,-1);
    tracep->declBit(c+3640,"tag_mem_5_dirty", false,-1);
    tracep->declBus(c+3641,"tag_mem_5_visit", false,-1, 7,0);
    tracep->declBus(c+3642,"tag_mem_5_tag", false,-1, 21,0);
    tracep->declBit(c+3643,"tag_mem_6_valid", false,-1);
    tracep->declBit(c+3644,"tag_mem_6_dirty", false,-1);
    tracep->declBus(c+3645,"tag_mem_6_visit", false,-1, 7,0);
    tracep->declBus(c+3646,"tag_mem_6_tag", false,-1, 21,0);
    tracep->declBit(c+3647,"tag_mem_7_valid", false,-1);
    tracep->declBit(c+3648,"tag_mem_7_dirty", false,-1);
    tracep->declBus(c+3649,"tag_mem_7_visit", false,-1, 7,0);
    tracep->declBus(c+3650,"tag_mem_7_tag", false,-1, 21,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VmyCPU___024root__trace_init_top(VmyCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmyCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmyCPU___024root__trace_init_top\n"); );
    // Body
    VmyCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("myCPU ");
    tracep->pushNamePrefix("dcache ");
    VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__dcache__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    VmyCPU___024root__trace_init_sub__TOP__myCPU__DOT__icache__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    VlWide<32>/*1023:0*/ __Vtemp_h72ab39f9__0;
    VlWide<32>/*1023:0*/ __Vtemp_hca088026__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6bb3fbe7__0;
    VlWide<32>/*1023:0*/ __Vtemp_h529c559b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6c7da4e8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h289ee4ea__0;
    VlWide<32>/*1023:0*/ __Vtemp_h327ef941__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9ca679d2__0;
    VlWide<4>/*127:0*/ __Vtemp_h5b59ca91__0;
    VlWide<4>/*127:0*/ __Vtemp_hb8bb06dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9d535a65__0;
    VlWide<4>/*127:0*/ __Vtemp_h32f52a8b__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0c0d54e__0;
    VlWide<3>/*95:0*/ __Vtemp_hfbd62a2a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc57a16a0__0;
    VlWide<16>/*511:0*/ __Vtemp_h5c328a0a__0;
    VlWide<16>/*511:0*/ __Vtemp_h7af7ad94__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst),32);
    bufp->fullCData(oldp+2,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 1U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_199))))))))),2);
    bufp->fullBit(oldp+3,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x67U == (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    | ((0x63U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x1063U 
                                           != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x5063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x6063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_265))))))))))));
    bufp->fullBit(oldp+4,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                           & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                              & ((0x6fU != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                 & ((0x67U != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                    & ((0x63U != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                       & ((0x1063U 
                                           != (0x707fU 
                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                             & ((0x5063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                & ((0x6063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                   & ((0x7063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                      & ((3U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                         & ((0x1003U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                            & ((0x2003U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                               & ((0x4003U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                  & ((0x5003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                     & ((0x6003U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                        & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_326)))))))))))))))))));
    bufp->fullCData(oldp+5,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                             ? 0U
                                                             : 
                                                            ((0x4003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_396)))))))))))))))),2);
    bufp->fullCData(oldp+6,(vlSelf->myCPU__DOT__control_io_imm_sel),3);
    bufp->fullCData(oldp+7,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                          ? 4U
                                                          : 0U))))))))))),3);
    bufp->fullCData(oldp+8,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_676)))))))),3);
    bufp->fullCData(oldp+9,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                              ? 0U : ((0x17U == (0x7fU 
                                                 & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                       ? 0U : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_748)))),3);
    bufp->fullCData(oldp+10,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0U : ((0x17U == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                        ? 0U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                 ? 2U
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 2U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_810)))))))))),2);
    bufp->fullBit(oldp+11,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            | ((0x17U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          | ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             | ((0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                | ((0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   | ((0x5003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      | ((0x6003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                         | ((0x3003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                            | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                               & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_868)))))))))))))))))))));
    bufp->fullCData(oldp+12,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0xbU : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538))))))))))),4);
    bufp->fullBit(oldp+13,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                             ? 0U : ((0x17U == (0x7fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                      ? 0U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))));
    bufp->fullCData(oldp+14,(vlSelf->myCPU__DOT__control_io_csr_cmd),3);
    bufp->fullBit(oldp+15,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x6fU != (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  & ((0x67U != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     & ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x2003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x4003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1076)))))))))))))))));
    bufp->fullBit(oldp+16,(((0x37U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                            & ((0x17U != (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                               & ((0x6fU == (0x7fU 
                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                  | ((0x67U == (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                     | ((0x63U != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                           & ((0x4063U 
                                               != (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                              & ((0x5063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                    & ((0x7063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                             & ((0x2003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                & ((0x4003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                   & ((0x5003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)) 
                                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_1143))))))))))))))))));
    bufp->fullQData(oldp+17,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_pc),64);
    bufp->fullIData(oldp+19,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst),32);
    bufp->fullBit(oldp+20,(vlSelf->myCPU__DOT__datapath__DOT__started));
    bufp->fullBit(oldp+21,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                            & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  | ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        & ((5U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           & ((7U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              & ((0xaU 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((9U 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)))))))))))));
    bufp->fullIData(oldp+22,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                               : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                   : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                       : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                           : ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                               : ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__writeback_addr
                                                       : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg))))))))))),32);
    bufp->fullCData(oldp+23,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                               ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                          ? 0xfU : 
                                         ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0U : 0xfU)))),8);
    bufp->fullBit(oldp+24,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                            & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     & ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        | ((5U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           & ((7U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              & ((0xaU 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((9U 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & ((0xbU 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                       & (8U 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))))))))))))));
    bufp->fullCData(oldp+25,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                               ? 0xffU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0xffU : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0xffU
                                            : ((3U 
                                                == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                ? 0xffU
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_mask)
                                                    : 0xffU)))))),8);
    bufp->fullBit(oldp+26,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                             ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                             : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                 ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                 : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                     ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                     : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                         ? (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last)
                                         : ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                            | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last))))))));
    bufp->fullBit(oldp+27,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                            & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                               & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                  & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                     & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                        & ((5U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                           | ((7U != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                              & ((0xaU 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                 & ((9U 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                    & ((0xbU 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                       & ((8U 
                                                           != (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)) 
                                                          & (0xcU 
                                                             == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state)))))))))))))));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_ar_valid));
    bufp->fullIData(oldp+29,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                               : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                   : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                       : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                           : ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                               : ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr
                                                     : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg))))))))),32);
    bufp->fullCData(oldp+30,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                               ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                          ? 0U : 0xfU))),8);
    bufp->fullBit(oldp+31,(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_r_ready));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_aw_valid));
    bufp->fullIData(oldp+33,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                               : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                   : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                       : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                           : ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                               : ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__writeback_addr
                                                       : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))))),32);
    bufp->fullCData(oldp+34,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                               ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                          ? 0xfU : 
                                         ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? 0U : 0xfU)))),8);
    bufp->fullBit(oldp+35,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_valid));
    bufp->fullCData(oldp+36,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                               ? 0xffU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? 0xffU : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0xffU
                                            : ((3U 
                                                == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                ? 0xffU
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_mask)
                                                    : 0xffU)))))),8);
    bufp->fullBit(oldp+37,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                            & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                               & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                  & ((3U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                     & ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                        & ((5U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                           | ((7U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                              & ((0xaU 
                                                  != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                 & ((9U 
                                                     != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                    & ((0xbU 
                                                        != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                       & ((8U 
                                                           != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                          & (0xcU 
                                                             == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)))))))))))))));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_ar_valid));
    bufp->fullIData(oldp+39,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                               : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                   : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                       : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                           : ((4U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                               : ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr
                                                     : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))),32);
    bufp->fullCData(oldp+40,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                               ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                          ? 0U : 0xfU))),8);
    bufp->fullBit(oldp+41,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_r_ready));
    bufp->fullBit(oldp+42,(((IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_aw_valid) 
                            & (6U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)))));
    bufp->fullBit(oldp+43,(((IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_valid) 
                            & (3U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)))));
    bufp->fullBit(oldp+44,(vlSelf->myCPU__DOT__arb_io_axi_out_b_ready));
    bufp->fullBit(oldp+45,((((IData)(vlSymsp->TOP__myCPU__DOT__icache.io_mem_io_ar_valid) 
                             | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_ar_valid)) 
                            & ((4U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state)) 
                               | (5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))))));
    bufp->fullIData(oldp+46,(((5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))
                               ? ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                   : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                       : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                           : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                               : ((4U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr
                                                      : vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg))))))))
                               : ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                   : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                       : ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                           : ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                               ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                               : ((4U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr
                                                      : vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg)))))))))),32);
    bufp->fullCData(oldp+47,(((5U == (IData)(vlSelf->myCPU__DOT__arb__DOT__state))
                               ? ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                   ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                              ? 0U : 0xfU))
                               : ((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                   ? 0xfU : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                              ? 0U : 0xfU)))),8);
    bufp->fullBit(oldp+48,(vlSelf->myCPU__DOT__arb_io_axi_out_r_ready));
    bufp->fullCData(oldp+49,(vlSelf->myCPU__DOT__arb__DOT__state),3);
    bufp->fullCData(oldp+50,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0xbU : ((0x17U == 
                                          (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                        ? 0U
                                                        : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_538)))))))))),5);
    bufp->fullCData(oldp+51,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                               ? 0U : ((0x17U == (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                        ? 0U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))),2);
    bufp->fullCData(oldp+52,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wd_type),2);
    bufp->fullCData(oldp+53,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_alu_op),4);
    bufp->fullQData(oldp+54,(((6U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                               ? (((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                                >> 0xfU)))) 
                                                                             >> 0x25U)))))))) 
                                   << 0x26U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   >> 0xfU)))))
                               : ((4U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                   ? (((QData)((IData)(
                                                       (0x7ffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm 
                                                                                >> 0x34U)))))))) 
                                       << 0x35U) | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm)
                                   : ((3U == (IData)(vlSelf->myCPU__DOT__control_io_imm_sel))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))
                                       : (((QData)((IData)(
                                                           (0x7ffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7 
                                                                                >> 0x2cU)))))))) 
                                           << 0x2dU) 
                                          | vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT___io_out_T_7))))),64);
    bufp->fullCData(oldp+56,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type),3);
    bufp->fullCData(oldp+57,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_dest),5);
    bufp->fullQData(oldp+58,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wdata),64);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                       >> 0x14U))),5);
    bufp->fullQData(oldp+62,(((0U == (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                               >> 0xfU)))
                               ? 0ULL : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0xfU)))
                                          ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27
                                                    : vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT___GEN_90))))))),64);
    bufp->fullQData(oldp+64,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_rdata_1),64);
    bufp->fullQData(oldp+66,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_1),64);
    bufp->fullQData(oldp+68,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_2),64);
    bufp->fullQData(oldp+70,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_3),64);
    bufp->fullQData(oldp+72,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_4),64);
    bufp->fullQData(oldp+74,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_5),64);
    bufp->fullQData(oldp+76,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_6),64);
    bufp->fullQData(oldp+78,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_7),64);
    bufp->fullQData(oldp+80,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_8),64);
    bufp->fullQData(oldp+82,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_9),64);
    bufp->fullQData(oldp+84,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_10),64);
    bufp->fullQData(oldp+86,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_11),64);
    bufp->fullQData(oldp+88,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_12),64);
    bufp->fullQData(oldp+90,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_13),64);
    bufp->fullQData(oldp+92,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_14),64);
    bufp->fullQData(oldp+94,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_15),64);
    bufp->fullQData(oldp+96,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_16),64);
    bufp->fullQData(oldp+98,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_17),64);
    bufp->fullQData(oldp+100,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_18),64);
    bufp->fullQData(oldp+102,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_19),64);
    bufp->fullQData(oldp+104,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_20),64);
    bufp->fullQData(oldp+106,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_21),64);
    bufp->fullQData(oldp+108,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_22),64);
    bufp->fullQData(oldp+110,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_23),64);
    bufp->fullQData(oldp+112,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_24),64);
    bufp->fullQData(oldp+114,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_25),64);
    bufp->fullQData(oldp+116,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_26),64);
    bufp->fullQData(oldp+118,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_27),64);
    bufp->fullQData(oldp+120,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_28),64);
    bufp->fullQData(oldp+122,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_29),64);
    bufp->fullQData(oldp+124,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_30),64);
    bufp->fullQData(oldp+126,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_31),64);
    bufp->fullCData(oldp+128,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op),3);
    bufp->fullSData(oldp+129,((vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+130,(((0xc00U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                           >> 0x14U))
                                ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data
                                : ((0xc02U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                               >> 0x14U))
                                    ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data
                                    : ((0x100U == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                   >> 0x14U))
                                        ? (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                        >> 0x12U))))) 
                                            << 0x12U) 
                                           | (QData)((IData)(
                                                             ((0x100U 
                                                               & ((IData)(
                                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                           >> 8U)) 
                                                                  << 8U)) 
                                                              | ((0x20U 
                                                                  & ((IData)(
                                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                              >> 5U)) 
                                                                     << 5U)) 
                                                                 | (2U 
                                                                    & ((IData)(
                                                                               (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                                                >> 1U)) 
                                                                       << 1U)))))))
                                        : ((0x104U 
                                            == (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                >> 0x14U))
                                            ? vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_1
                                            : ((0x105U 
                                                == 
                                                (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                                 >> 0x14U))
                                                ? (
                                                   (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                                    << 2U) 
                                                   | (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode)))
                                                : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_96)))))),64);
    bufp->fullCData(oldp+132,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+133,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+134,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_write_data),64);
    bufp->fullBit(oldp+136,((0x13U != vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullIData(oldp+137,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_illegal_inst),32);
    bufp->fullCData(oldp+138,(((0x37U == (0x7fU & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                ? 0U : ((0x17U == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                         ? 0U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947)))))))))),2);
    bufp->fullBit(oldp+139,((0ULL != (3ULL & vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc))));
    bufp->fullQData(oldp+140,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_addr),64);
    bufp->fullBit(oldp+142,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_jump_taken));
    bufp->fullBit(oldp+143,((0x10200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullBit(oldp+144,((0x30200073U == vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_inst)));
    bufp->fullQData(oldp+145,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc),64);
    bufp->fullBit(oldp+147,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable));
    bufp->fullBit(oldp+148,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_enable));
    bufp->fullBit(oldp+149,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable));
    bufp->fullBit(oldp+150,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_enable));
    bufp->fullQData(oldp+151,(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_pc),64);
    bufp->fullIData(oldp+153,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst),32);
    bufp->fullQData(oldp+154,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_imm),64);
    bufp->fullQData(oldp+156,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs1),64);
    bufp->fullQData(oldp+158,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr),64);
    bufp->fullQData(oldp+160,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_rs2),64);
    bufp->fullQData(oldp+162,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src2_addr),64);
    bufp->fullQData(oldp+164,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+166,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+167,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+168,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_csr_write_data),64);
    bufp->fullCData(oldp+170,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_dest),5);
    bufp->fullBit(oldp+171,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_A_sel));
    bufp->fullBit(oldp+172,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_B_sel));
    bufp->fullCData(oldp+173,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc_sel),2);
    bufp->fullCData(oldp+174,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_st_type),3);
    bufp->fullCData(oldp+175,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_ld_type),3);
    bufp->fullCData(oldp+176,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+177,(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_wb_en));
    bufp->fullQData(oldp+178,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out),64);
    bufp->fullQData(oldp+180,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+182,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_op),3);
    bufp->fullSData(oldp+183,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_addr),12);
    bufp->fullQData(oldp+184,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_csr_write_data),64);
    bufp->fullQData(oldp+186,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_jump_addr),64);
    bufp->fullBit(oldp+188,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_jump_taken));
    bufp->fullQData(oldp+189,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_data),64);
    bufp->fullCData(oldp+191,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_type),3);
    bufp->fullCData(oldp+192,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type),3);
    bufp->fullCData(oldp+193,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+194,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en));
    bufp->fullCData(oldp+195,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest),5);
    bufp->fullQData(oldp+196,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_pc),64);
    bufp->fullIData(oldp+198,(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_inst),32);
    bufp->fullQData(oldp+199,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_load_data),64);
    bufp->fullQData(oldp+201,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_alu_out),64);
    bufp->fullQData(oldp+203,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_csr_read_data),64);
    bufp->fullCData(oldp+205,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_sel),2);
    bufp->fullBit(oldp+206,(vlSelf->myCPU__DOT__datapath__DOT__mw_pipe_reg_wb_en));
    bufp->fullCData(oldp+207,(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush),4);
    bufp->fullBit(oldp+208,(vlSelf->myCPU__DOT__datapath__DOT__jmp_occur));
    bufp->fullBit(oldp+209,((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))));
    bufp->fullWData(oldp+210,(vlSelf->myCPU__DOT__datapath__DOT__pc),65);
    bufp->fullBit(oldp+213,(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst));
    bufp->fullCData(oldp+214,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+215,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode),2);
    bufp->fullBit(oldp+216,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sum));
    bufp->fullCData(oldp+217,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+218,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp));
    bufp->fullBit(oldp+219,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie));
    bufp->fullBit(oldp+220,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie));
    bufp->fullBit(oldp+221,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+222,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie));
    bufp->fullQData(oldp+223,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data),64);
    bufp->fullQData(oldp+225,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data),64);
    bufp->fullBit(oldp+227,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_meie));
    bufp->fullBit(oldp+228,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_seie));
    bufp->fullBit(oldp+229,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_mtie));
    bufp->fullBit(oldp+230,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie));
    bufp->fullBit(oldp+231,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie));
    bufp->fullBit(oldp+232,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie));
    bufp->fullQData(oldp+233,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base),62);
    bufp->fullCData(oldp+235,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode),2);
    bufp->fullQData(oldp+236,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mscratch_data),64);
    bufp->fullQData(oldp+238,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mepc_data),64);
    bufp->fullBit(oldp+240,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_int));
    bufp->fullQData(oldp+241,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcause_code),63);
    bufp->fullQData(oldp+243,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtval_data),64);
    bufp->fullBit(oldp+245,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_meip));
    bufp->fullBit(oldp+246,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_seip));
    bufp->fullBit(oldp+247,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip));
    bufp->fullBit(oldp+248,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip));
    bufp->fullBit(oldp+249,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip));
    bufp->fullQData(oldp+250,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mcycle_data),64);
    bufp->fullQData(oldp+252,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__minstret_data),64);
    bufp->fullCData(oldp+254,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                           << 1U)))),6);
    bufp->fullIData(oldp+255,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpp) 
                                << 0xbU) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spp) 
                                             << 8U) 
                                            | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mpie) 
                                                << 7U) 
                                               | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_spie) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_mie) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie) 
                                                        << 1U))))))),17);
    bufp->fullBit(oldp+256,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+257,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 8U)))));
    bufp->fullBit(oldp+258,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 5U)))));
    bufp->fullBit(oldp+259,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                           >> 1U)))));
    bufp->fullCData(oldp+260,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_stie) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_msie) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mie_ssie) 
                                           << 1U)))),6);
    bufp->fullCData(oldp+261,((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_stip) 
                                << 5U) | (((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_msip) 
                                           << 3U) | 
                                          ((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mip_ssip) 
                                           << 1U)))),6);
    bufp->fullQData(oldp+262,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base),62);
    bufp->fullCData(oldp+264,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode),2);
    bufp->fullQData(oldp+265,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sscratch_data),64);
    bufp->fullQData(oldp+267,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__sepc_data),64);
    bufp->fullBit(oldp+269,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_int));
    bufp->fullQData(oldp+270,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__scause_code),63);
    bufp->fullQData(oldp+272,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stval_data),64);
    bufp->fullSData(oldp+274,(((0x100U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                   >> 5U)) 
                                          << 5U)) | 
                                (2U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                                >> 1U)) 
                                       << 1U))))),13);
    bufp->fullBit(oldp+275,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+276,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 7U)))));
    bufp->fullBit(oldp+277,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                           >> 3U)))));
    bufp->fullCData(oldp+278,(((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                  >> 5U)) 
                                         << 5U)) | 
                               ((8U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                >> 3U)) 
                                       << 3U)) | (2U 
                                                  & ((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sie_T 
                                                              >> 1U)) 
                                                     << 1U))))),6);
    bufp->fullBit(oldp+279,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 1U)))));
    bufp->fullBit(oldp+280,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 5U)))));
    bufp->fullBit(oldp+281,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___T_163 
                                           >> 9U)))));
    bufp->fullBit(oldp+282,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable));
    bufp->fullBit(oldp+283,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable));
    bufp->fullBit(oldp+284,((1U & (((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                     ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                     : ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                         ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                         : ((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                             ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___instValid_T)
                                             : ((2U 
                                                 == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))
                                                 ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writable)
                                                 : 
                                                ((1U 
                                                  != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op)) 
                                                 | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__readable)))))) 
                                   | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
    bufp->fullBit(oldp+285,((1U & (((((3U & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_inst 
                                             >> 0x1cU)) 
                                      <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                     | (0U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_r_op))) 
                                    & (((0x37U == (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                         ? 0U : ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (IData)(vlSelf->myCPU__DOT__control__DOT___ctrlSignals_T_947))))))))) 
                                       <= (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode))) 
                                   | (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_enable))))));
    bufp->fullBit(oldp+286,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__valid));
    bufp->fullBit(oldp+287,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeEn));
    bufp->fullQData(oldp+288,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData),64);
    bufp->fullQData(oldp+290,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS),64);
    bufp->fullQData(oldp+292,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM),64);
    bufp->fullBit(oldp+294,((((1U > (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                              | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mode)) 
                                 & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mstatus_sie))) 
                             & (0U != (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                       & vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mideleg_data)))));
    bufp->fullBit(oldp+295,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasIntM));
    bufp->fullBit(oldp+296,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt));
    bufp->fullBit(oldp+297,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handIntS));
    bufp->fullQData(oldp+298,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                              >> 9U)))
                                ? 9ULL : ((1U & (IData)(
                                                        (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                         >> 1U)))
                                           ? 1ULL : 5ULL))),63);
    bufp->fullQData(oldp+300,(((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                              >> 0xbU)))
                                ? 0xbULL : ((1U & (IData)(
                                                          (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                           >> 3U)))
                                             ? 3ULL
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntM 
                                                            >> 7U)))
                                                 ? 7ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                             >> 9U)))
                                                  ? 9ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__flagIntS 
                                                              >> 1U)))
                                                   ? 1ULL
                                                   : 5ULL)))))),63);
    bufp->fullCData(oldp+302,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT___sstatus_T 
                                             >> 8U)))),2);
    bufp->fullBit(oldp+303,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+304,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 8U)))));
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 5U)))));
    bufp->fullBit(oldp+306,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 1U)))));
    bufp->fullSData(oldp+307,(((0x100U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                   >> 5U)) 
                                          << 5U)) | 
                                (2U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                >> 1U)) 
                                       << 1U))))),13);
    bufp->fullBit(oldp+308,((1U & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                           >> 9U)))));
    bufp->fullCData(oldp+309,(((0x20U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                  >> 5U)) 
                                         << 5U)) | 
                               ((8U & ((IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                >> 3U)) 
                                       << 3U)) | (2U 
                                                  & ((IData)(
                                                             (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__writeData 
                                                              >> 1U)) 
                                                     << 1U))))),6);
    bufp->fullBit(oldp+310,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                             >> 0x1fU)));
    bufp->fullSData(oldp+311,((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+312,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Iimm),44);
    bufp->fullSData(oldp+314,(((0xfe0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 7U)))),12);
    bufp->fullQData(oldp+315,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                  >> 7U))))))),44);
    bufp->fullSData(oldp+317,(((0x1000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                 >> 7U)))))),13);
    bufp->fullQData(oldp+318,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                                        >> 7U))))))))),45);
    bufp->fullIData(oldp+320,((0xfffff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst)),32);
    bufp->fullQData(oldp+321,((((QData)((IData)(((vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst))))),64);
    bufp->fullIData(oldp+323,(((0x100000U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst) 
                                  | ((0x800U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                            >> 0x14U))))))),21);
    bufp->fullQData(oldp+324,(vlSelf->myCPU__DOT__datapath__DOT__immGen__DOT__Jimm),53);
    bufp->fullCData(oldp+326,((0x1fU & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                        >> 0xfU))),6);
    bufp->fullQData(oldp+327,((QData)((IData)((0x1fU 
                                               & (vlSelf->myCPU__DOT__datapath__DOT__fd_pipe_reg_inst 
                                                  >> 0xfU))))),38);
    bufp->fullQData(oldp+329,(vlSelf->myCPU__DOT__datapath__DOT__regFile__DOT__reg_0),64);
    bufp->fullCData(oldp+331,((7U & (vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg 
                                     >> 7U))),3);
    bufp->fullBit(oldp+332,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_cache_req_we));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_valid));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_dirty));
    bufp->fullCData(oldp+335,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_visit),8);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_write_tag),22);
    bufp->fullBit(oldp+337,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_valid));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_dirty));
    bufp->fullCData(oldp+339,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_visit),8);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0_io_tag_read_tag),22);
    bufp->fullBit(oldp+341,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_cache_req_we));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_valid));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_dirty));
    bufp->fullCData(oldp+344,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_visit),8);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_write_tag),22);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_valid));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_dirty));
    bufp->fullCData(oldp+348,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_visit),8);
    bufp->fullIData(oldp+349,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1_io_tag_read_tag),22);
    bufp->fullBit(oldp+350,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_cache_req_we));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_valid));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_dirty));
    bufp->fullCData(oldp+353,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_visit),8);
    bufp->fullIData(oldp+354,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_write_tag),22);
    bufp->fullBit(oldp+355,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_valid));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_dirty));
    bufp->fullCData(oldp+357,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_visit),8);
    bufp->fullIData(oldp+358,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2_io_tag_read_tag),22);
    bufp->fullBit(oldp+359,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_cache_req_we));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_valid));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_dirty));
    bufp->fullCData(oldp+362,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_visit),8);
    bufp->fullIData(oldp+363,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_write_tag),22);
    bufp->fullBit(oldp+364,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_valid));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_dirty));
    bufp->fullCData(oldp+366,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_visit),8);
    bufp->fullIData(oldp+367,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3_io_tag_read_tag),22);
    bufp->fullWData(oldp+368,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_data_read_data),1024);
    bufp->fullWData(oldp+400,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_data_read_data),1024);
    bufp->fullWData(oldp+432,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_data_read_data),1024);
    bufp->fullWData(oldp+464,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_data_read_data),1024);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state),4);
    bufp->fullCData(oldp+497,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__index),4);
    bufp->fullBit(oldp+498,((0xfU == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__index))));
    bufp->fullBit(oldp+499,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__fill_block_en));
    bufp->fullBit(oldp+500,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__last));
    bufp->fullCData(oldp+501,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace),2);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__refill_addr),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__writeback_addr),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg),32);
    bufp->fullQData(oldp+505,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_data),64);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_mask),8);
    bufp->fullBit(oldp+508,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw));
    bufp->fullIData(oldp+509,((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_addr_reg 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+510,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1));
    bufp->fullBit(oldp+512,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2));
    bufp->fullBit(oldp+513,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3));
    bufp->fullWData(oldp+514,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__response_data),1024);
    bufp->fullQData(oldp+546,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_0_T_22))
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+548,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_1_T_22))
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+550,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_2_T_22))
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+552,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_3_T_22))
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+554,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_4_T_22
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+556,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_5_T_22
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+558,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_6_T_22
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+560,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                           ? 0ULL : 
                                          ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 
                                                  (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                    | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_rw)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3)
                                                      ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                      : 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)
                                                       ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)
                                                        ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0)
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___part_7_T_22
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))))))),64);
    bufp->fullQData(oldp+562,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__result),64);
    bufp->fullCData(oldp+564,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_1),8);
    bufp->fullCData(oldp+565,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_0),8);
    bufp->fullCData(oldp+566,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_3),8);
    bufp->fullCData(oldp+567,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__visit_2),8);
    bufp->fullBit(oldp+568,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__compare_2_3));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__compare_1_0));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__max_01_or_23));
    bufp->fullCData(oldp+571,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__max),2);
    bufp->fullWData(oldp+572,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+604,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+636,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+668,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+700,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+732,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+764,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+796,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+828,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+829,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h72ab39f9__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h72ab39f9__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h72ab39f9__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h72ab39f9__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h72ab39f9__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h72ab39f9__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h72ab39f9__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h72ab39f9__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h72ab39f9__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h72ab39f9__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h72ab39f9__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h72ab39f9__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h72ab39f9__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h72ab39f9__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h72ab39f9__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h72ab39f9__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h72ab39f9__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h72ab39f9__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h72ab39f9__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h72ab39f9__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h72ab39f9__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h72ab39f9__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h72ab39f9__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h72ab39f9__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h72ab39f9__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h72ab39f9__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h72ab39f9__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h72ab39f9__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h72ab39f9__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h72ab39f9__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h72ab39f9__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h72ab39f9__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+830,(__Vtemp_h72ab39f9__0),1024);
    bufp->fullWData(oldp+862,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+894,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0__DOT__doForwardReg));
    bufp->fullWData(oldp+895,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+927,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+959,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+991,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+1023,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+1055,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+1087,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+1119,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+1151,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+1152,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_hca088026__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_hca088026__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_hca088026__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_hca088026__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_hca088026__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_hca088026__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_hca088026__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_hca088026__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_hca088026__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_hca088026__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_hca088026__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_hca088026__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_hca088026__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_hca088026__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_hca088026__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_hca088026__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_hca088026__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_hca088026__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_hca088026__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_hca088026__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_hca088026__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_hca088026__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_hca088026__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_hca088026__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_hca088026__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_hca088026__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_hca088026__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_hca088026__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_hca088026__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_hca088026__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_hca088026__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_hca088026__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+1153,(__Vtemp_hca088026__0),1024);
    bufp->fullWData(oldp+1185,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+1217,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1__DOT__doForwardReg));
    bufp->fullWData(oldp+1218,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+1250,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+1282,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+1314,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+1346,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+1378,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+1410,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+1442,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+1474,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+1475,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h6bb3fbe7__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h6bb3fbe7__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h6bb3fbe7__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h6bb3fbe7__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h6bb3fbe7__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h6bb3fbe7__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h6bb3fbe7__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h6bb3fbe7__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h6bb3fbe7__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h6bb3fbe7__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h6bb3fbe7__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h6bb3fbe7__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h6bb3fbe7__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h6bb3fbe7__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h6bb3fbe7__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h6bb3fbe7__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h6bb3fbe7__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h6bb3fbe7__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h6bb3fbe7__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h6bb3fbe7__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h6bb3fbe7__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h6bb3fbe7__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h6bb3fbe7__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h6bb3fbe7__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h6bb3fbe7__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h6bb3fbe7__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h6bb3fbe7__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h6bb3fbe7__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h6bb3fbe7__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h6bb3fbe7__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h6bb3fbe7__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h6bb3fbe7__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+1476,(__Vtemp_h6bb3fbe7__0),1024);
    bufp->fullWData(oldp+1508,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+1540,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2__DOT__doForwardReg));
    bufp->fullWData(oldp+1541,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+1573,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+1605,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+1637,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+1669,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+1701,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+1733,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+1765,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+1797,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+1798,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h529c559b__0[0U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h529c559b__0[1U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h529c559b__0[2U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h529c559b__0[3U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h529c559b__0[4U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h529c559b__0[5U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h529c559b__0[6U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h529c559b__0[7U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h529c559b__0[8U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h529c559b__0[9U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h529c559b__0[0xaU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h529c559b__0[0xbU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h529c559b__0[0xcU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h529c559b__0[0xdU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h529c559b__0[0xeU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h529c559b__0[0xfU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h529c559b__0[0x10U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h529c559b__0[0x11U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h529c559b__0[0x12U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h529c559b__0[0x13U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h529c559b__0[0x14U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h529c559b__0[0x15U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h529c559b__0[0x16U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h529c559b__0[0x17U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h529c559b__0[0x18U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h529c559b__0[0x19U] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h529c559b__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h529c559b__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h529c559b__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h529c559b__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h529c559b__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h529c559b__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+1799,(__Vtemp_h529c559b__0),1024);
    bufp->fullWData(oldp+1831,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+1863,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3__DOT__doForwardReg));
    bufp->fullBit(oldp+1864,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+1865,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+1866,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+1867,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+1868,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+1869,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+1870,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+1871,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+1872,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+1873,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+1874,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+1875,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+1876,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+1877,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+1878,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+1879,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+1880,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+1881,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+1882,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+1883,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+1884,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+1885,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+1886,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+1887,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+1888,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+1889,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+1890,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+1891,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+1892,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+1893,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+1894,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+1895,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_0__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+1896,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+1897,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+1898,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+1899,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+1900,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+1901,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+1902,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+1903,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+1904,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+1905,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+1906,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+1907,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+1908,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+1909,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+1910,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+1911,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+1912,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+1913,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+1914,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+1915,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+1916,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+1917,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+1918,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+1919,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+1920,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+1921,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+1922,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+1923,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+1924,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+1925,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+1926,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+1927,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_1__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+1928,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+1929,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+1930,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+1931,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+1932,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+1933,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+1934,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+1935,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+1936,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+1937,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+1938,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+1939,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+1940,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+1941,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+1942,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+1943,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+1944,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+1945,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+1946,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+1947,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+1948,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+1949,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+1950,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+1951,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+1952,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+1953,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+1954,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+1955,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+1956,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+1957,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+1958,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+1959,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_2__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+1960,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+1961,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+1962,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+1963,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+1964,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+1965,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+1966,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+1967,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+1968,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+1969,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+1970,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+1971,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+1972,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+1973,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+1974,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+1975,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+1976,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+1977,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+1978,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+1979,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+1980,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+1981,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+1982,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+1983,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+1984,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+1985,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+1986,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+1987,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+1988,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+1989,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+1990,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+1991,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__tag_mem_3__DOT__tag_mem_7_tag),22);
    bufp->fullCData(oldp+1992,((7U & (vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg 
                                      >> 7U))),3);
    bufp->fullBit(oldp+1993,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_cache_req_we));
    bufp->fullBit(oldp+1994,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_valid));
    bufp->fullBit(oldp+1995,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_dirty));
    bufp->fullCData(oldp+1996,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_visit),8);
    bufp->fullIData(oldp+1997,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_write_tag),22);
    bufp->fullBit(oldp+1998,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_valid));
    bufp->fullBit(oldp+1999,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_dirty));
    bufp->fullCData(oldp+2000,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_visit),8);
    bufp->fullIData(oldp+2001,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0_io_tag_read_tag),22);
    bufp->fullBit(oldp+2002,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_cache_req_we));
    bufp->fullBit(oldp+2003,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_valid));
    bufp->fullBit(oldp+2004,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_dirty));
    bufp->fullCData(oldp+2005,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_visit),8);
    bufp->fullIData(oldp+2006,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_write_tag),22);
    bufp->fullBit(oldp+2007,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_valid));
    bufp->fullBit(oldp+2008,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_dirty));
    bufp->fullCData(oldp+2009,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_visit),8);
    bufp->fullIData(oldp+2010,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1_io_tag_read_tag),22);
    bufp->fullBit(oldp+2011,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_cache_req_we));
    bufp->fullBit(oldp+2012,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_valid));
    bufp->fullBit(oldp+2013,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_dirty));
    bufp->fullCData(oldp+2014,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_visit),8);
    bufp->fullIData(oldp+2015,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_write_tag),22);
    bufp->fullBit(oldp+2016,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_valid));
    bufp->fullBit(oldp+2017,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_dirty));
    bufp->fullCData(oldp+2018,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_visit),8);
    bufp->fullIData(oldp+2019,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2_io_tag_read_tag),22);
    bufp->fullBit(oldp+2020,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_cache_req_we));
    bufp->fullBit(oldp+2021,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_valid));
    bufp->fullBit(oldp+2022,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_dirty));
    bufp->fullCData(oldp+2023,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_visit),8);
    bufp->fullIData(oldp+2024,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_write_tag),22);
    bufp->fullBit(oldp+2025,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_valid));
    bufp->fullBit(oldp+2026,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_dirty));
    bufp->fullCData(oldp+2027,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_visit),8);
    bufp->fullIData(oldp+2028,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3_io_tag_read_tag),22);
    bufp->fullWData(oldp+2029,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_data_read_data),1024);
    bufp->fullWData(oldp+2061,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_data_read_data),1024);
    bufp->fullWData(oldp+2093,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_data_read_data),1024);
    bufp->fullWData(oldp+2125,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_data_read_data),1024);
    bufp->fullCData(oldp+2157,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state),4);
    bufp->fullCData(oldp+2158,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__index),4);
    bufp->fullBit(oldp+2159,((0xfU == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__index))));
    bufp->fullCData(oldp+2160,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace),2);
    bufp->fullIData(oldp+2161,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__refill_addr),32);
    bufp->fullIData(oldp+2162,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__writeback_addr),32);
    bufp->fullIData(oldp+2163,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg),32);
    bufp->fullQData(oldp+2164,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_data),64);
    bufp->fullCData(oldp+2166,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_mask),8);
    bufp->fullBit(oldp+2167,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw));
    bufp->fullIData(oldp+2168,((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_addr_reg 
                                >> 0xaU)),22);
    bufp->fullBit(oldp+2169,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0));
    bufp->fullBit(oldp+2170,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1));
    bufp->fullBit(oldp+2171,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2));
    bufp->fullBit(oldp+2172,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3));
    bufp->fullWData(oldp+2173,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__response_data),1024);
    bufp->fullQData(oldp+2205,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_0_T_22))
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2207,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_1_T_22))
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2209,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_2_T_22))
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2211,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? (QData)((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_3_T_22))
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2213,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_4_T_22
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2215,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_5_T_22
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2217,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_6_T_22
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2219,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_rw)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)
                                                       ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                       : 
                                                      ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)
                                                        ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                        : 
                                                       ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)
                                                         ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                         : 
                                                        ((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0)
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___part_7_T_22
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+2221,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__result),64);
    bufp->fullCData(oldp+2223,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_1),8);
    bufp->fullCData(oldp+2224,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_0),8);
    bufp->fullCData(oldp+2225,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_3),8);
    bufp->fullCData(oldp+2226,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__visit_2),8);
    bufp->fullBit(oldp+2227,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__compare_2_3));
    bufp->fullBit(oldp+2228,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__compare_1_0));
    bufp->fullBit(oldp+2229,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__max_01_or_23));
    bufp->fullCData(oldp+2230,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__max),2);
    bufp->fullWData(oldp+2231,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+2263,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+2295,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+2327,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+2359,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+2391,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+2423,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+2455,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+2487,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+2488,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h6c7da4e8__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h6c7da4e8__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h6c7da4e8__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h6c7da4e8__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h6c7da4e8__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h6c7da4e8__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h6c7da4e8__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h6c7da4e8__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h6c7da4e8__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h6c7da4e8__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h6c7da4e8__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h6c7da4e8__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h6c7da4e8__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h6c7da4e8__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h6c7da4e8__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h6c7da4e8__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h6c7da4e8__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h6c7da4e8__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h6c7da4e8__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h6c7da4e8__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h6c7da4e8__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h6c7da4e8__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h6c7da4e8__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h6c7da4e8__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h6c7da4e8__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h6c7da4e8__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h6c7da4e8__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h6c7da4e8__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h6c7da4e8__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h6c7da4e8__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h6c7da4e8__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h6c7da4e8__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+2489,(__Vtemp_h6c7da4e8__0),1024);
    bufp->fullWData(oldp+2521,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+2553,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0__DOT__doForwardReg));
    bufp->fullWData(oldp+2554,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+2586,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+2618,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+2650,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+2682,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+2714,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+2746,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+2778,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+2810,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+2811,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h289ee4ea__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h289ee4ea__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h289ee4ea__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h289ee4ea__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h289ee4ea__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h289ee4ea__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h289ee4ea__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h289ee4ea__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h289ee4ea__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h289ee4ea__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h289ee4ea__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h289ee4ea__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h289ee4ea__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h289ee4ea__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h289ee4ea__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h289ee4ea__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h289ee4ea__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h289ee4ea__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h289ee4ea__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h289ee4ea__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h289ee4ea__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h289ee4ea__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h289ee4ea__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h289ee4ea__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h289ee4ea__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h289ee4ea__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h289ee4ea__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h289ee4ea__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h289ee4ea__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h289ee4ea__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h289ee4ea__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h289ee4ea__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+2812,(__Vtemp_h289ee4ea__0),1024);
    bufp->fullWData(oldp+2844,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+2876,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1__DOT__doForwardReg));
    bufp->fullWData(oldp+2877,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+2909,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+2941,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+2973,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+3005,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+3037,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+3069,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+3101,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+3133,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+3134,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h327ef941__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h327ef941__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h327ef941__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h327ef941__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h327ef941__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h327ef941__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h327ef941__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h327ef941__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h327ef941__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h327ef941__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h327ef941__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h327ef941__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h327ef941__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h327ef941__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h327ef941__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h327ef941__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h327ef941__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h327ef941__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h327ef941__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h327ef941__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h327ef941__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h327ef941__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h327ef941__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h327ef941__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h327ef941__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h327ef941__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h327ef941__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h327ef941__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h327ef941__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h327ef941__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h327ef941__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h327ef941__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+3135,(__Vtemp_h327ef941__0),1024);
    bufp->fullWData(oldp+3167,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+3199,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2__DOT__doForwardReg));
    bufp->fullWData(oldp+3200,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[0]),1024);
    bufp->fullWData(oldp+3232,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[1]),1024);
    bufp->fullWData(oldp+3264,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[2]),1024);
    bufp->fullWData(oldp+3296,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[3]),1024);
    bufp->fullWData(oldp+3328,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[4]),1024);
    bufp->fullWData(oldp+3360,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[5]),1024);
    bufp->fullWData(oldp+3392,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[6]),1024);
    bufp->fullWData(oldp+3424,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data[7]),1024);
    bufp->fullBit(oldp+3456,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_en_pipe_0));
    bufp->fullCData(oldp+3457,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0),3);
    __Vtemp_h9ca679d2__0[0U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0U];
    __Vtemp_h9ca679d2__0[1U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][1U];
    __Vtemp_h9ca679d2__0[2U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][2U];
    __Vtemp_h9ca679d2__0[3U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][3U];
    __Vtemp_h9ca679d2__0[4U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][4U];
    __Vtemp_h9ca679d2__0[5U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][5U];
    __Vtemp_h9ca679d2__0[6U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][6U];
    __Vtemp_h9ca679d2__0[7U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][7U];
    __Vtemp_h9ca679d2__0[8U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][8U];
    __Vtemp_h9ca679d2__0[9U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][9U];
    __Vtemp_h9ca679d2__0[0xaU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xaU];
    __Vtemp_h9ca679d2__0[0xbU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xbU];
    __Vtemp_h9ca679d2__0[0xcU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xcU];
    __Vtemp_h9ca679d2__0[0xdU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xdU];
    __Vtemp_h9ca679d2__0[0xeU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xeU];
    __Vtemp_h9ca679d2__0[0xfU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0xfU];
    __Vtemp_h9ca679d2__0[0x10U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x10U];
    __Vtemp_h9ca679d2__0[0x11U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x11U];
    __Vtemp_h9ca679d2__0[0x12U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x12U];
    __Vtemp_h9ca679d2__0[0x13U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x13U];
    __Vtemp_h9ca679d2__0[0x14U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x14U];
    __Vtemp_h9ca679d2__0[0x15U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x15U];
    __Vtemp_h9ca679d2__0[0x16U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x16U];
    __Vtemp_h9ca679d2__0[0x17U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x17U];
    __Vtemp_h9ca679d2__0[0x18U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x18U];
    __Vtemp_h9ca679d2__0[0x19U] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x19U];
    __Vtemp_h9ca679d2__0[0x1aU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1aU];
    __Vtemp_h9ca679d2__0[0x1bU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1bU];
    __Vtemp_h9ca679d2__0[0x1cU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1cU];
    __Vtemp_h9ca679d2__0[0x1dU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1dU];
    __Vtemp_h9ca679d2__0[0x1eU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1eU];
    __Vtemp_h9ca679d2__0[0x1fU] = vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data
        [vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__data_mem_data_readData_addr_pipe_0][0x1fU];
    bufp->fullWData(oldp+3458,(__Vtemp_h9ca679d2__0),1024);
    bufp->fullWData(oldp+3490,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__wDataReg_data),1024);
    bufp->fullBit(oldp+3522,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3__DOT__doForwardReg));
    bufp->fullBit(oldp+3523,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+3524,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+3525,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+3526,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+3527,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+3528,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+3529,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+3530,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+3531,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+3532,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+3533,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+3534,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+3535,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+3536,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+3537,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+3538,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+3539,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+3540,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+3541,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+3542,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+3543,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+3544,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+3545,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+3546,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+3547,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+3548,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+3549,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+3550,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+3551,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+3552,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+3553,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+3554,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_0__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+3555,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+3556,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+3557,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+3558,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+3559,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+3560,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+3561,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+3562,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+3563,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+3564,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+3565,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+3566,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+3567,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+3568,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+3569,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+3570,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+3571,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+3572,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+3573,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+3574,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+3575,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+3576,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+3577,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+3578,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+3579,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+3580,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+3581,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+3582,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+3583,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+3584,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+3585,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+3586,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_1__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+3587,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+3588,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+3589,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+3590,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+3591,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+3592,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+3593,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+3594,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+3595,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+3596,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+3597,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+3598,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+3599,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+3600,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+3601,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+3602,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+3603,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+3604,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+3605,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+3606,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+3607,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+3608,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+3609,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+3610,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+3611,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+3612,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+3613,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+3614,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+3615,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+3616,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+3617,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+3618,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_2__DOT__tag_mem_7_tag),22);
    bufp->fullBit(oldp+3619,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_valid));
    bufp->fullBit(oldp+3620,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_dirty));
    bufp->fullCData(oldp+3621,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_visit),8);
    bufp->fullIData(oldp+3622,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_0_tag),22);
    bufp->fullBit(oldp+3623,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_valid));
    bufp->fullBit(oldp+3624,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_dirty));
    bufp->fullCData(oldp+3625,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_visit),8);
    bufp->fullIData(oldp+3626,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_1_tag),22);
    bufp->fullBit(oldp+3627,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_valid));
    bufp->fullBit(oldp+3628,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_dirty));
    bufp->fullCData(oldp+3629,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_visit),8);
    bufp->fullIData(oldp+3630,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_2_tag),22);
    bufp->fullBit(oldp+3631,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_valid));
    bufp->fullBit(oldp+3632,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_dirty));
    bufp->fullCData(oldp+3633,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_visit),8);
    bufp->fullIData(oldp+3634,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_3_tag),22);
    bufp->fullBit(oldp+3635,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_valid));
    bufp->fullBit(oldp+3636,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_dirty));
    bufp->fullCData(oldp+3637,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_visit),8);
    bufp->fullIData(oldp+3638,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_4_tag),22);
    bufp->fullBit(oldp+3639,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_valid));
    bufp->fullBit(oldp+3640,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_dirty));
    bufp->fullCData(oldp+3641,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_visit),8);
    bufp->fullIData(oldp+3642,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_5_tag),22);
    bufp->fullBit(oldp+3643,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_valid));
    bufp->fullBit(oldp+3644,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_dirty));
    bufp->fullCData(oldp+3645,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_visit),8);
    bufp->fullIData(oldp+3646,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_6_tag),22);
    bufp->fullBit(oldp+3647,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_valid));
    bufp->fullBit(oldp+3648,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_dirty));
    bufp->fullCData(oldp+3649,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_visit),8);
    bufp->fullIData(oldp+3650,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__tag_mem_3__DOT__tag_mem_7_tag),22);
    VL_EXTEND_WQ(127,64, __Vtemp_h5b59ca91__0, vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_st_data);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hb8bb06dd__0, __Vtemp_h5b59ca91__0, 
                  (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out) 
                            << 3U)));
    VL_EXTEND_WQ(127,64, __Vtemp_h9d535a65__0, vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h32f52a8b__0, __Vtemp_h9d535a65__0, 
                  (0x38U & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out) 
                            << 3U)));
    bufp->fullQData(oldp+3651,((((QData)((IData)(((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                                   ? 
                                                  __Vtemp_hb8bb06dd__0[1U]
                                                   : 
                                                  __Vtemp_h32f52a8b__0[1U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                                               ? 
                                                              __Vtemp_hb8bb06dd__0[0U]
                                                               : 
                                                              __Vtemp_h32f52a8b__0[0U]))))),64);
    bufp->fullCData(oldp+3653,((0xffU & ((0xffU == (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask))
                                          ? (IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask)
                                          : ((IData)(vlSelf->myCPU__DOT__datapath__DOT__stall)
                                              ? (0x7fffU 
                                                 & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_alu_out))))
                                              : (0x7fffU 
                                                 & ((IData)(vlSelf->myCPU__DOT__datapath__DOT__st_mask) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out)))))))),8);
    bufp->fullBit(oldp+3654,(((0U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                              & ((1U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                 & ((2U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                    & ((3U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                        ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_r_valid)
                                        : ((4U != (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                           & ((5U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                               ? (IData)(vlSelf->myCPU__DOT__arb_io_dcache_b_valid)
                                               : ((7U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state)) 
                                                  & ((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3)))))))))));
    bufp->fullQData(oldp+3655,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__icache.__PVT__cpu_request_data
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                         ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                          ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                           ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__replace))
                                                            ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___GEN_1143
                                                            : 0ULL))))
                                                        : 0ULL)))))))))))),64);
    bufp->fullQData(oldp+3657,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cpu_request_data
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 0ULL
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                     ? 0ULL
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                      ? 0ULL
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                       ? 0ULL
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                         ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                          ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                           ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__replace))
                                                            ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___GEN_1143
                                                            : 0ULL))))
                                                        : 0ULL)))))))))))),64);
    bufp->fullBit(oldp+3659,((((((((3U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                   & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)) 
                                  | ((6U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                     & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))) 
                                 | ((2U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                    & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt))) 
                                | ((5U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                   & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))) 
                               | ((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))) 
                              | ((4U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_br_type)) 
                                 & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu))))));
    VL_EXTEND_WQ(65,64, __Vtemp_hf0c0d54e__0, vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec);
    VL_EXTEND_WQ(65,64, __Vtemp_hfbd62a2a__0, (4ULL 
                                               + vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_pc));
    if (vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap) {
        __Vtemp_hc57a16a0__0[0U] = __Vtemp_hf0c0d54e__0[0U];
        __Vtemp_hc57a16a0__0[1U] = __Vtemp_hf0c0d54e__0[1U];
        __Vtemp_hc57a16a0__0[2U] = __Vtemp_hf0c0d54e__0[2U];
    } else if ((0U != (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_atomic_flush))) {
        __Vtemp_hc57a16a0__0[0U] = __Vtemp_hfbd62a2a__0[0U];
        __Vtemp_hc57a16a0__0[1U] = __Vtemp_hfbd62a2a__0[1U];
        __Vtemp_hc57a16a0__0[2U] = __Vtemp_hfbd62a2a__0[2U];
    } else if (vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_5) {
        __Vtemp_hc57a16a0__0[0U] = vlSelf->myCPU__DOT__datapath__DOT__pc[0U];
        __Vtemp_hc57a16a0__0[1U] = vlSelf->myCPU__DOT__datapath__DOT__pc[1U];
        __Vtemp_hc57a16a0__0[2U] = vlSelf->myCPU__DOT__datapath__DOT__pc[2U];
    } else {
        __Vtemp_hc57a16a0__0[0U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[0U];
        __Vtemp_hc57a16a0__0[1U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[1U];
        __Vtemp_hc57a16a0__0[2U] = vlSelf->myCPU__DOT__datapath__DOT___next_pc_T_11[2U];
    }
    bufp->fullWData(oldp+3660,(__Vtemp_hc57a16a0__0),65);
    bufp->fullIData(oldp+3663,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                   | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                  | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                 | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                 ? 0x13U : vlSelf->myCPU__DOT__datapath__DOT___inst_T_7)),32);
    bufp->fullCData(oldp+3664,((0x1fU & ((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__started) 
                                             | (IData)(vlSelf->myCPU__DOT__datapath__DOT__is_kill_inst)) 
                                            | (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken)) 
                                           | (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap))
                                           ? 0x13U : vlSelf->myCPU__DOT__datapath__DOT___inst_T_7) 
                                         >> 7U))),5);
    bufp->fullQData(oldp+3665,(((1U == (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_ld_type))
                                 ? vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_5
                                 : vlSelf->myCPU__DOT__datapath__DOT___load_data_ext_hazard_T_34)),64);
    bufp->fullQData(oldp+3667,((((((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_enable) 
                                   & (IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_wb_en)) 
                                  & (vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr 
                                     == (QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__em_pipe_reg_dest)))) 
                                 & (0ULL != vlSelf->myCPU__DOT__datapath__DOT__de_pipe_reg_src1_addr))
                                 ? vlSelf->myCPU__DOT__datapath__DOT___GEN_54
                                 : vlSelf->myCPU__DOT__datapath__DOT___GEN_56)),64);
    bufp->fullBit(oldp+3669,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc) 
                              & (IData)((vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__medeleg_data 
                                         >> (0x1fU 
                                             & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause)))))));
    bufp->fullQData(oldp+3670,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_mode) 
                                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                  ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base 
                                     + (QData)((IData)(
                                                       (0x3fffffffU 
                                                        & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                  : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__stvec_base) 
                                << 2U)),64);
    bufp->fullQData(oldp+3672,(((((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_mode) 
                                  & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasInt))
                                  ? (vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base 
                                     + (QData)((IData)(
                                                       (0x3fffffffU 
                                                        & (IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause)))))
                                  : vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__mtvec_base) 
                                << 2U)),64);
    bufp->fullBit(oldp+3674,((1U & ((~ (IData)(vlSymsp->TOP__myCPU__DOT__icache.io_cpu_response_ready)) 
                                    | (IData)(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall)))));
    bufp->fullIData(oldp+3675,(vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U]),32);
    bufp->fullBit(oldp+3676,(vlSymsp->TOP__myCPU__DOT__icache.io_cpu_response_ready));
    bufp->fullIData(oldp+3677,((IData)(vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T)),32);
    bufp->fullBit(oldp+3678,(vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_rw));
    bufp->fullBit(oldp+3679,(vlSelf->myCPU__DOT__datapath_io_dcache_cpu_request_valid));
    bufp->fullBit(oldp+3680,(vlSelf->myCPU__DOT__arb_io_icache_ar_ready));
    bufp->fullBit(oldp+3681,(vlSelf->myCPU__DOT__arb_io_icache_r_valid));
    bufp->fullBit(oldp+3682,(vlSelf->myCPU__DOT__arb_io_dcache_aw_ready));
    bufp->fullBit(oldp+3683,(vlSelf->myCPU__DOT__arb_io_dcache_w_ready));
    bufp->fullBit(oldp+3684,(vlSymsp->TOP__myCPU__DOT__dcache.io_mem_io_w_bits_last));
    bufp->fullBit(oldp+3685,(vlSelf->myCPU__DOT__arb_io_dcache_b_valid));
    bufp->fullBit(oldp+3686,(vlSelf->myCPU__DOT__arb_io_dcache_ar_ready));
    bufp->fullBit(oldp+3687,(vlSelf->myCPU__DOT__arb_io_dcache_r_valid));
    bufp->fullQData(oldp+3688,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_A),64);
    bufp->fullQData(oldp+3690,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_B),64);
    bufp->fullQData(oldp+3692,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_out),64);
    bufp->fullQData(oldp+3694,(vlSelf->myCPU__DOT__datapath__DOT__alu_io_sum),64);
    bufp->fullQData(oldp+3696,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs1),64);
    bufp->fullQData(oldp+3698,(vlSelf->myCPU__DOT__datapath__DOT__brCond_io_rs2),64);
    bufp->fullBit(oldp+3700,(vlSelf->myCPU__DOT__datapath__DOT__regFile_io_wen));
    bufp->fullCData(oldp+3701,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_flush_mask),4);
    bufp->fullBit(oldp+3702,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_load_misalign));
    bufp->fullBit(oldp+3703,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_store_misalign));
    bufp->fullQData(oldp+3704,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_excValue),64);
    bufp->fullQData(oldp+3706,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trapVec),64);
    bufp->fullBit(oldp+3708,(vlSelf->myCPU__DOT__datapath__DOT__stall));
    bufp->fullBit(oldp+3709,(vlSelf->myCPU__DOT__datapath__DOT__csr_io_trap));
    bufp->fullBit(oldp+3710,(vlSelf->myCPU__DOT__datapath__DOT__dcache_stall));
    bufp->fullBit(oldp+3711,(vlSelf->myCPU__DOT__datapath__DOT__brCond_taken));
    bufp->fullBit(oldp+3712,(vlSelf->myCPU__DOT__datapath__DOT__flush_fd));
    bufp->fullBit(oldp+3713,(vlSelf->myCPU__DOT__datapath__DOT__flush_de));
    bufp->fullBit(oldp+3714,(vlSelf->myCPU__DOT__datapath__DOT__flush_em));
    bufp->fullBit(oldp+3715,(vlSelf->myCPU__DOT__datapath__DOT__flush_mw));
    bufp->fullQData(oldp+3716,(vlSelf->myCPU__DOT__datapath__DOT__load_data_hazard),64);
    bufp->fullQData(oldp+3718,(vlSelf->myCPU__DOT__datapath__DOT__A_data),64);
    bufp->fullQData(oldp+3720,(vlSelf->myCPU__DOT__datapath__DOT__B_data),64);
    bufp->fullCData(oldp+3722,(vlSelf->myCPU__DOT__datapath__DOT__st_mask),8);
    bufp->fullCData(oldp+3723,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__shamt),6);
    bufp->fullQData(oldp+3724,(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT__sum),64);
    bufp->fullQData(oldp+3726,((((QData)((IData)(vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->myCPU__DOT__datapath__DOT__alu__DOT___out_T_88[0U])))),64);
    bufp->fullBit(oldp+3728,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq));
    bufp->fullBit(oldp+3729,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__eq)))));
    bufp->fullBit(oldp+3730,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt));
    bufp->fullBit(oldp+3731,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__lt)))));
    bufp->fullBit(oldp+3732,(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu));
    bufp->fullBit(oldp+3733,((1U & (~ (IData)(vlSelf->myCPU__DOT__datapath__DOT__brCond__DOT__ltu)))));
    bufp->fullBit(oldp+3734,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__hasExc));
    bufp->fullQData(oldp+3735,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__excCause),63);
    bufp->fullBit(oldp+3737,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS));
    bufp->fullQData(oldp+3738,(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__cause),64);
    bufp->fullCData(oldp+3740,(((IData)(vlSelf->myCPU__DOT__datapath__DOT__csr__DOT__handExcS)
                                 ? 1U : 3U)),2);
    bufp->fullCData(oldp+3741,((7U & (vlSelf->myCPU__DOT__datapath__DOT___io_icache_cpu_request_addr_T_2[0U] 
                                      >> 7U))),3);
    bufp->fullBit(oldp+3742,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_cache_req_we));
    bufp->fullWData(oldp+3743,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_0_io_data_write_data),1024);
    bufp->fullBit(oldp+3775,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_cache_req_we));
    bufp->fullWData(oldp+3776,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_1_io_data_write_data),1024);
    bufp->fullBit(oldp+3808,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_cache_req_we));
    bufp->fullWData(oldp+3809,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_2_io_data_write_data),1024);
    bufp->fullBit(oldp+3841,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_cache_req_we));
    bufp->fullWData(oldp+3842,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__data_mem_3_io_data_write_data),1024);
    bufp->fullQData(oldp+3874,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1),64);
    bufp->fullQData(oldp+3876,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0),64);
    bufp->fullQData(oldp+3878,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3),64);
    bufp->fullQData(oldp+3880,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2),64);
    bufp->fullQData(oldp+3882,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5),64);
    bufp->fullQData(oldp+3884,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4),64);
    bufp->fullQData(oldp+3886,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7),64);
    bufp->fullQData(oldp+3888,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6),64);
    __Vtemp_h5c328a0a__0[0U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0);
    __Vtemp_h5c328a0a__0[1U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_0 
                                        >> 0x20U));
    __Vtemp_h5c328a0a__0[2U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1);
    __Vtemp_h5c328a0a__0[3U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_1 
                                        >> 0x20U));
    __Vtemp_h5c328a0a__0[4U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2);
    __Vtemp_h5c328a0a__0[5U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_2 
                                        >> 0x20U));
    __Vtemp_h5c328a0a__0[6U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3);
    __Vtemp_h5c328a0a__0[7U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_3 
                                        >> 0x20U));
    __Vtemp_h5c328a0a__0[8U] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4);
    __Vtemp_h5c328a0a__0[9U] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_4 
                                        >> 0x20U));
    __Vtemp_h5c328a0a__0[0xaU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5);
    __Vtemp_h5c328a0a__0[0xbU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_5 
                                          >> 0x20U));
    __Vtemp_h5c328a0a__0[0xcU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6);
    __Vtemp_h5c328a0a__0[0xdU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_6 
                                          >> 0x20U));
    __Vtemp_h5c328a0a__0[0xeU] = (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7);
    __Vtemp_h5c328a0a__0[0xfU] = (IData)((vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_7 
                                          >> 0x20U));
    bufp->fullWData(oldp+3890,(__Vtemp_h5c328a0a__0),512);
    bufp->fullQData(oldp+3906,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_9),64);
    bufp->fullQData(oldp+3908,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_8),64);
    bufp->fullQData(oldp+3910,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_11),64);
    bufp->fullQData(oldp+3912,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_10),64);
    bufp->fullQData(oldp+3914,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_13),64);
    bufp->fullQData(oldp+3916,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_12),64);
    bufp->fullQData(oldp+3918,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_15),64);
    bufp->fullQData(oldp+3920,(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_data_14),64);
    bufp->fullCData(oldp+3922,((7U & (IData)((vlSelf->myCPU__DOT__datapath__DOT___io_dcache_cpu_request_addr_T 
                                              >> 7U)))),3);
    bufp->fullBit(oldp+3923,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_cache_req_we));
    bufp->fullWData(oldp+3924,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_0_io_data_write_data),1024);
    bufp->fullBit(oldp+3956,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_cache_req_we));
    bufp->fullWData(oldp+3957,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_1_io_data_write_data),1024);
    bufp->fullBit(oldp+3989,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_cache_req_we));
    bufp->fullWData(oldp+3990,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_2_io_data_write_data),1024);
    bufp->fullBit(oldp+4022,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_cache_req_we));
    bufp->fullWData(oldp+4023,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__data_mem_3_io_data_write_data),1024);
    bufp->fullBit(oldp+4055,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__fill_block_en));
    bufp->fullBit(oldp+4056,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__last));
    bufp->fullQData(oldp+4057,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1),64);
    bufp->fullQData(oldp+4059,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0),64);
    bufp->fullQData(oldp+4061,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3),64);
    bufp->fullQData(oldp+4063,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2),64);
    bufp->fullQData(oldp+4065,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5),64);
    bufp->fullQData(oldp+4067,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4),64);
    bufp->fullQData(oldp+4069,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7),64);
    bufp->fullQData(oldp+4071,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6),64);
    __Vtemp_h7af7ad94__0[0U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0);
    __Vtemp_h7af7ad94__0[1U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_0 
                                        >> 0x20U));
    __Vtemp_h7af7ad94__0[2U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1);
    __Vtemp_h7af7ad94__0[3U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_1 
                                        >> 0x20U));
    __Vtemp_h7af7ad94__0[4U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2);
    __Vtemp_h7af7ad94__0[5U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_2 
                                        >> 0x20U));
    __Vtemp_h7af7ad94__0[6U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3);
    __Vtemp_h7af7ad94__0[7U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_3 
                                        >> 0x20U));
    __Vtemp_h7af7ad94__0[8U] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4);
    __Vtemp_h7af7ad94__0[9U] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_4 
                                        >> 0x20U));
    __Vtemp_h7af7ad94__0[0xaU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5);
    __Vtemp_h7af7ad94__0[0xbU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_5 
                                          >> 0x20U));
    __Vtemp_h7af7ad94__0[0xcU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6);
    __Vtemp_h7af7ad94__0[0xdU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_6 
                                          >> 0x20U));
    __Vtemp_h7af7ad94__0[0xeU] = (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7);
    __Vtemp_h7af7ad94__0[0xfU] = (IData)((vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_7 
                                          >> 0x20U));
    bufp->fullWData(oldp+4073,(__Vtemp_h7af7ad94__0),512);
    bufp->fullQData(oldp+4089,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_9),64);
    bufp->fullQData(oldp+4091,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_8),64);
    bufp->fullQData(oldp+4093,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_11),64);
    bufp->fullQData(oldp+4095,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_10),64);
    bufp->fullQData(oldp+4097,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_13),64);
    bufp->fullQData(oldp+4099,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_12),64);
    bufp->fullQData(oldp+4101,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_15),64);
    bufp->fullQData(oldp+4103,(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_data_14),64);
    bufp->fullBit(oldp+4105,(vlSelf->clock));
    bufp->fullBit(oldp+4106,(vlSelf->reset));
    bufp->fullQData(oldp+4107,(vlSelf->io_pc_debug),64);
    bufp->fullIData(oldp+4109,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+4110,(vlSelf->io_start));
    bufp->fullBit(oldp+4111,(vlSelf->io_stall));
    bufp->fullBit(oldp+4112,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+4113,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+4114,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+4115,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+4116,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+4117,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+4118,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+4119,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+4120,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+4121,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+4123,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+4124,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+4125,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+4126,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+4127,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+4128,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+4129,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+4130,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+4131,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+4132,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+4133,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+4134,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+4135,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+4136,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+4137,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+4138,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+4139,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+4141,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+4142,(vlSelf->io_master_rid),4);
    bufp->fullQData(oldp+4143,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                 ? vlSelf->io_master_rdata
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__icache.__PVT__is_match_3))
                                                     ? vlSymsp->TOP__myCPU__DOT__icache.__PVT___io_cpu_response_data_T_70
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+4145,(((0U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                 ? 0ULL : ((1U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                            ? 0ULL : 
                                           ((2U == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                             ? 0ULL
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                 ? vlSelf->io_master_rdata
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__cache_state))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_0) 
                                                       | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_1)) 
                                                      | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_2)) 
                                                     | (IData)(vlSymsp->TOP__myCPU__DOT__dcache.__PVT__is_match_3))
                                                     ? vlSymsp->TOP__myCPU__DOT__dcache.__PVT___io_cpu_response_data_T_70
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->fullQData(oldp+4147,(0ULL),64);
    bufp->fullCData(oldp+4149,(0U),8);
    bufp->fullBit(oldp+4150,(0U));
    bufp->fullBit(oldp+4151,(1U));
}
