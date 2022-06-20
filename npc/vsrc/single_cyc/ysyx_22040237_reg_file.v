import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

module ysyx_22040237_reg_file(
  input clk,
  input rst,
  
  //----------------------transfer pc value to sim for dpi_c;
  input [31:0] pc,
  //-----------------------
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

//!!---------------------for DPI_C--------------------------!!
wire [63:0] rf[32:0];
assign rf[0] = regs[0];
assign rf[1] = regs[1];
assign rf[2] = regs[2];
assign rf[3] = regs[3];
assign rf[4] = regs[4];
assign rf[5] = regs[5];
assign rf[6] = regs[6];
assign rf[7] = regs[7];
assign rf[8] = regs[8];
assign rf[9] = regs[9];
assign rf[10] = regs[10];
assign rf[11] = regs[11];
assign rf[12] = regs[12];
assign rf[13] = regs[13];
assign rf[14] = regs[14];
assign rf[15] = regs[15];
assign rf[16] = regs[16];
assign rf[17] = regs[17];
assign rf[18] = regs[18];
assign rf[19] = regs[19];
assign rf[20] = regs[20];
assign rf[21] = regs[21];
assign rf[22] = regs[22];
assign rf[23] = regs[23];
assign rf[24] = regs[24];
assign rf[25] = regs[25];
assign rf[26] = regs[26];
assign rf[27] = regs[27];
assign rf[28] = regs[28];
assign rf[29] = regs[29];
assign rf[30] = regs[30];
assign rf[31] = regs[31];
assign rf[32] = {32'b0,pc}; 
//transfer registers pointer
initial set_gpr_ptr(rf);
//!!--------------------------------------------------------!!

assign reg1_rd_data = reg1_rd_en ? regs[reg1_rd_addr] : `ysyx_22040237_REGS_INIT;
assign reg2_rd_data = reg2_rd_en ? regs[reg2_rd_addr] : `ysyx_22040237_REGS_INIT;

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
