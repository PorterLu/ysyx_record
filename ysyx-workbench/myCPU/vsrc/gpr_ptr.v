import "DPI-C" function void set_gpr_ptr(input logic [63:0] regfile_0,input logic [63:0] regfile_1,input logic [63:0] regfile_2,input logic [63:0] regfile_3,input logic [63:0] regfile_4,input logic [63:0] regfile_5,input logic [63:0] regfile_6,input logic [63:0] regfile_7,input logic [63:0] regfile_8,input logic [63:0] regfile_9,input logic [63:0] regfile_10,input logic [63:0] regfile_11,input logic [63:0] regfile_12,input logic [63:0] regfile_13,input logic [63:0] regfile_14,input logic [63:0] regfile_15,input logic [63:0] regfile_16,input logic [63:0] regfile_17,input logic [63:0] regfile_18,input logic [63:0] regfile_19,input logic [63:0] regfile_20,input logic [63:0] regfile_21,input logic [63:0] regfile_22,input logic [63:0] regfile_23,input logic [63:0] regfile_24,input logic [63:0] regfile_25,input logic [63:0] regfile_26,input logic [63:0] regfile_27,input logic [63:0] regfile_28,input logic [63:0] regfile_29,input logic [63:0] regfile_30,input logic [63:0] regfile_31);
module gpr_ptr(input clock,
	input reset,
	input [63:0] regfile_0,
       	input [63:0] regfile_1, 
	input [63:0] regfile_2,
	input [63:0] regfile_3,
	input [63:0] regfile_4,
	input [63:0] regfile_5,
	input [63:0] regfile_6,
	input [63:0] regfile_7,
	input [63:0] regfile_8,
	input [63:0] regfile_9,
	input [63:0] regfile_10,
	input [63:0] regfile_11,
	input [63:0] regfile_12,
	input [63:0] regfile_13,
	input [63:0] regfile_14,
	input [63:0] regfile_15,
	input [63:0] regfile_16,
	input [63:0] regfile_17,
	input [63:0] regfile_18,
	input [63:0] regfile_19,
	input [63:0] regfile_20,
	input [63:0] regfile_21,
	input [63:0] regfile_22,
	input [63:0] regfile_23,
	input [63:0] regfile_24,
	input [63:0] regfile_25,
	input [63:0] regfile_26,
	input [63:0] regfile_27,
	input [63:0] regfile_28,
	input [63:0] regfile_29,
	input [63:0] regfile_30,
	input [63:0] regfile_31
);

	always @(posedge clock)
		if(!reset)
			set_gpr_ptr(regfile_0, regfile_1, regfile_2, regfile_3, regfile_4,regfile_5,regfile_6,regfile_7,regfile_8,regfile_9,regfile_10,regfile_11,regfile_12,regfile_13,regfile_14,regfile_15,regfile_16,regfile_17,regfile_18,regfile_19,regfile_20,regfile_21,regfile_22,regfile_23,regfile_24,regfile_25,regfile_26,regfile_27,regfile_28,regfile_29,regfile_30,regfile_31);
endmodule