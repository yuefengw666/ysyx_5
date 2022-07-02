import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);

module ysyx_22040237_ifu(
  //input clk,
  //input rst,
  input [`ysyx_22040237_REG_WIDTH-1:0] pc_i,

  output [`ysyx_22040237_REG_WIDTH-1:0] pc_o,
  output [`ysyx_22040237_INST_WIDTH-1:0] inst_o,

  output rdata_63_32

);
wire [63:0] rdata;

//!!!!!!!!!!!!!!!!!!!exclude warning!!!!!!!!!!!!!!!!!!//

assign rdata_63_32 = |rdata[63:32];

always @(*) begin
  mem_read(pc_i, rdata);
end

assign pc_o = pc_i;
assign inst_o = rdata[`ysyx_22040237_INST_WIDTH-1:0];

endmodule
