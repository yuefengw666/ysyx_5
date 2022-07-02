module ysyx_22040237_pc_reg(
  input clk,
  input rst,
  input pc_jump_flag_i,
  input [`ysyx_22040237_REG_WIDTH-1:0] pc_jump_addr_i,
  output reg [`ysyx_22040237_REG_WIDTH-1:0] pc_o
);

always@(posedge clk)begin
  if(rst)begin
    pc_o <= `ysyx_22040237_PC_RESET_ADDR;
  end
  else if(pc_jump_flag_i)begin
    pc_o <= pc_jump_addr_i;
  end
  else begin
    pc_o <= pc_o + 64'h4;
  end
end

endmodule
