import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte mask);
import "DPI-C" function void pc_read(input longint raddr, output longint rdata);
module Mem(input clock, 
	input reset,
	input [63:0] pc_addr,
	output [63:0] pc_data,
	input[63:0] addr,
        input[63:0] wdata,
	input[7:0] mask,
	output[63:0] rdata,
	input enable,
	input wen);
	/* verilator lint_off LATCH */
	always @(*) begin
		if(enable && !clock) begin
			if(wen) begin
				pmem_write(addr, wdata, mask);
			end
			else begin
				pmem_read(addr, rdata);
			end
		end
	end

	always @(*)
		if(!reset && !clock)
			pc_read(pc_addr, pc_data);
endmodule
		
