import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);

module ysyx_22040237_ifu(
  //input clk,
  //input rst,
  input [`ysyx_22040237_REG_WIDTH-1:0] pc_i,

  output [`ysyx_22040237_REG_WIDTH-1:0] pc_o,
  output [`ysyx_22040237_INST_WIDTH-1:0] inst_o
);
wire [63:0] rdata;

always @(*) begin
  mem_read(pc_i, rdata);
end

assign pc_o = pc_i;
assign inst_o = rdata[`ysyx_22040237_INST_WIDTH-1:0];

endmodule
