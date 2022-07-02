import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

module ysyx_22040237_wbu(
  //input clk,
  //input rst,
  input rd_wr_en_i,
  input [4:0] rd_idx_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] rd_data_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] rd_data_o,
  
  //input mem_wr_en_i,
  //input [63:0] mem_wr_addr_i,
  //input [64:0] mem_wr_data_i,

  //input mem_rd_en_i,
  //input [63:0] mem_rd_addr_i,
  //input [63:0] mem_rd_data_i,

);

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;
assign rd_data_o = rd_data_i;

endmodule
