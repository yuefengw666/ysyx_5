import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

module ysyx_22040237_regs(
  input clk,
  input rst,
  
  /*----------transfer pc value to sim for dpi_c;------------*/
  input [63:0] pc_i,
  /*---------------------------------------------------------*/
  input rd_wr_en_i,
  input [4:0] rd_wr_idx_i,
  input [`ysyx_22040237_REG_WIDTH -1 :0] rd_wr_data_i,
  
  input rs1_read_en_i,
  input rs2_read_en_i,
  input [4:0] rs1_idx_i,
  input [4:0] rs2_idx_i,
  output [63:0] rs1_data_o,
  output [63:0] rs2_data_o
);

reg [`ysyx_22040237_REG_WIDTH-1:0] regs[0:31];
wire r_wr_en;

/*--------DPI_C to get gpr state ot simulation  environment--------------*/
integer i;

reg [63:0] rf[0:32];

always@(*)begin
  for(i=0; i<32; i++)begin
    rf[i] = regs[i];
  end
  rf[32] = pc_i;
end

always@(*)begin
  set_gpr_ptr(rf);
end
/*-----------------------------------------------------------------------*/

assign rs1_data_o = rs1_read_en_i ? regs[rs1_idx_i] : `ysyx_22040237_REG_RESET;
assign rs2_data_o = rs2_read_en_i ? regs[rs2_idx_i] : `ysyx_22040237_REG_RESET;

assign regs_wr_en = rd_wr_en_i && (rd_idx_i !=5'b0);

always@(posedge clk)begin
  if(rst)begin
    regs[0] <= `ysyx_22040237_REG_RESET;
    regs[1] <= `ysyx_22040237_REG_RESET;
    regs[2] <= `ysyx_22040237_REG_RESET;
    regs[3] <= `ysyx_22040237_REG_RESET;
    regs[4] <= `ysyx_22040237_REG_RESET;
    regs[5] <= `ysyx_22040237_REG_RESET;
    regs[6] <= `ysyx_22040237_REG_RESET;
    regs[7] <= `ysyx_22040237_REG_RESET;
    regs[8] <= `ysyx_22040237_REG_RESET;
    regs[9] <= `ysyx_22040237_REG_RESET;
    regs[10] <= `ysyx_22040237_REG_RESET;
    regs[11] <= `ysyx_22040237_REG_RESET;
    regs[12] <= `ysyx_22040237_REG_RESET;
    regs[13] <= `ysyx_22040237_REG_RESET;
    regs[14] <= `ysyx_22040237_REG_RESET;
    regs[15] <= `ysyx_22040237_REG_RESET;
    regs[16] <= `ysyx_22040237_REG_RESET;
    regs[17] <= `ysyx_22040237_REG_RESET;
    regs[18] <= `ysyx_22040237_REG_RESET;
    regs[19] <= `ysyx_22040237_REG_RESET;
    regs[20] <= `ysyx_22040237_REG_RESET;
    regs[21] <= `ysyx_22040237_REG_RESET;
    regs[22] <= `ysyx_22040237_REG_RESET;
    regs[23] <= `ysyx_22040237_REG_RESET;
    regs[24] <= `ysyx_22040237_REG_RESET;
    regs[25] <= `ysyx_22040237_REG_RESET;
    regs[26] <= `ysyx_22040237_REG_RESET;
    regs[27] <= `ysyx_22040237_REG_RESET;
    regs[28] <= `ysyx_22040237_REG_RESET;
    regs[29] <= `ysyx_22040237_REG_RESET;
    regs[30] <= `ysyx_22040237_REG_RESET;
    regs[31] <= `ysyx_22040237_REG_RESET;
  end
  else begin
    if(regs_wr_en)begin
      regs[rd_idx] <= rd_wr_data_i;
    end
  end
end

endmodule
