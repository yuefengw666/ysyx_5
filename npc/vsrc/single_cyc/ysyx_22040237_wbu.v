import "DPI-C" function void mem_write(
  input longint waddr, input longint wdata, input byte wmask);

module ysyx_22040237_wbu(
  //input clk,
  //input rst,
  input rd_wr_en_i,
  input [4:0] rd_idx_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] rd_data_i,

  input mem_wen_i,
  input [7:0] mem_wmask_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] mem_waddr_i,
  input [`ysyx_22040237_REG_RESET-1:0] mem_wdata_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] rd_data_o
  
);

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;
assign rd_data_o = rd_data_i;

always@(*)begin
  if(mem_wen_i) mem_write(mem_waddr_i, mem_wdata_i, mem_wmask_i);
end

endmodule
