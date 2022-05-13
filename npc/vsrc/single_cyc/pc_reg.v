module ysyx_22040237_pc_reg(
  input clk,
  input rst,
  output reg [31:0] pc_reg 
);

always@(posedge clk)begin
  if(rst)begin
    pc_reg <= `ysyx_22040237_PC_RESET_ADDR;
  end
  else begin
    pc_reg <= pc_reg + 32'h4;
  end
end

endmodule
