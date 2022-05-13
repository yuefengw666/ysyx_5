module ysyx_22040237_reg_file(
  input clk,
  input rst,
  
  input reg_wr_en,
  input [4:0] wr_addr,
  input [63:0] wr_data,
  
  input reg1_rd_en,
  input reg2_rd_en,
  input [4:0] reg1_rd_addr,
  input [4:0] reg2_rd_addr,
  output [63:0] reg1_rd_data,
  output [63:0] reg2_rd_data
);

reg [63:0] regs[0:31];

wire r_wr_en;

assign rd1_data = reg1_rd_en ? regs[rd1_addr] : `ysyx_22040237_REGS_INIT;
assign rd2_data = reg2_rd_en ? regs[rd2_addr] : `ysyx_22040237_REGS_INIT;

assign r_wr_en = reg_wr_en && (wr_addr !=5'b0);

always@(posedge clk)begin
  if(rst)begin
    regs[0] <= `ysyx_22040237_REGS_INIT;
    regs[1] <= `ysyx_22040237_REGS_INIT;
    regs[2] <= `ysyx_22040237_REGS_INIT;
    regs[3] <= `ysyx_22040237_REGS_INIT;
    regs[4] <= `ysyx_22040237_REGS_INIT;
    regs[5] <= `ysyx_22040237_REGS_INIT;
    regs[6] <= `ysyx_22040237_REGS_INIT;
    regs[7] <= `ysyx_22040237_REGS_INIT;
    regs[8] <= `ysyx_22040237_REGS_INIT;
    regs[9] <= `ysyx_22040237_REGS_INIT;
    regs[10] <= `ysyx_22040237_REGS_INIT;
    regs[11] <= `ysyx_22040237_REGS_INIT;
    regs[12] <= `ysyx_22040237_REGS_INIT;
    regs[13] <= `ysyx_22040237_REGS_INIT;
    regs[14] <= `ysyx_22040237_REGS_INIT;
    regs[15] <= `ysyx_22040237_REGS_INIT;
    regs[16] <= `ysyx_22040237_REGS_INIT;
    regs[17] <= `ysyx_22040237_REGS_INIT;
    regs[18] <= `ysyx_22040237_REGS_INIT;
    regs[19] <= `ysyx_22040237_REGS_INIT;
    regs[20] <= `ysyx_22040237_REGS_INIT;
    regs[21] <= `ysyx_22040237_REGS_INIT;
    regs[22] <= `ysyx_22040237_REGS_INIT;
    regs[23] <= `ysyx_22040237_REGS_INIT;
    regs[24] <= `ysyx_22040237_REGS_INIT;
    regs[25] <= `ysyx_22040237_REGS_INIT;
    regs[26] <= `ysyx_22040237_REGS_INIT;
    regs[27] <= `ysyx_22040237_REGS_INIT;
    regs[28] <= `ysyx_22040237_REGS_INIT;
    regs[29] <= `ysyx_22040237_REGS_INIT;
    regs[30] <= `ysyx_22040237_REGS_INIT;
    regs[31] <= `ysyx_22040237_REGS_INIT;
  end
  else begin
    if(r_wr_en)begin
      regs[wr_addr] <= wr_data;
    end
  end
end

endmodule
