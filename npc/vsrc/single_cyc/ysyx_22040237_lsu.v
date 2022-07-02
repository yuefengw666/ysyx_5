import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);

module ysyx_22040237_lsu(
  //input clk,
  //input rst,
  input rd_wr_en_i,
  input [4:0] rd_idx_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] alu_res_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] rd_data_o
  
  //input mem_wr_en_i,
  //input [63:0] mem_wr_addr_i,
  //input [64:0] mem_wr_data_i,

  //input mem_rd_en_i,
  //input [63:0] mem_rd_addr_i,
  //input [63:0] mem_rd_data_i,

);

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;
assign rd_data_o = alu_res_i;

endmodule
