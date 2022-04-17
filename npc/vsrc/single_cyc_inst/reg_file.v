module reg_file(
  input clk,
  input rstn,
  input [4:0] r1_rd_addr,//r1 read address
  
  input reg_wr;
  input [4:0] wr_addr,//write address
  input [63:0] wr_data,//write data

  output reg [63:0] r1_rd_data
);

parameter REGS_INIT = 64'h0000_0000_0000_0000;

reg [63:0] regs[0:31];

wire wr_en;

assign r1_rd_data = regs[r1_rd_addr];

assign wr_en = reg_wr && (wr_addr != 5'b0000);

always@(posedge clk)begin
  if(!rstn)begin
    regs[0] <= REGS_INIT;
    regs[1] <= REGS_INIT;
    regs[2] <= REGS_INIT;
    regs[3] <= REGS_INIT;
    regs[4] <= REGS_INIT;
    regs[5] <= REGS_INIT;
    regs[6] <= REGS_INIT;
    regs[7] <= REGS_INIT;
    regs[8] <= REGS_INIT;
    regs[9] <= REGS_INIT;
    regs[10] <= REGS_INIT;
    regs[11] <= REGS_INIT;
    regs[12] <= REGS_INIT;
    regs[13] <= REGS_INIT;
    regs[14] <= REGS_INIT;
    regs[15] <= REGS_INIT;
    regs[16] <= REGS_INIT;
    regs[17] <= REGS_INIT;
    regs[18] <= REGS_INIT;
    regs[19] <= REGS_INIT;
    regs[20] <= REGS_INIT;
    regs[21] <= REGS_INIT;
    regs[22] <= REGS_INIT;
    regs[23] <= REGS_INIT;
    regs[24] <= REGS_INIT;
    regs[25] <= REGS_INIT;
    regs[26] <= REGS_INIT;
    regs[27] <= REGS_INIT;
    regs[28] <= REGS_INIT;
    regs[29] <= REGS_INIT;
    regs[30] <= REGS_INIT;
    regs[31] <= REGS_INIT;
  end
  else if(wr_en)begin
    regs[wr_addr] <= wr_data;
  end
end


endmodule

