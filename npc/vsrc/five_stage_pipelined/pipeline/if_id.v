module if_id(
    input clk,
    input rst,
    input id_ready_i,
    input [63:0] if_id_pc_i,
    input [31:0] if_id_inst_i,
    
    output [63:0] if_id_pc_o,
    output [31:0] if_id_inst_o
);

always@(posedge clk)begin
  if(rst)begin
    if_id_pc_o   <= 'b0;
    if_id_inst_o <= 'b0;
  end
  else if(id_ready_i)begin
    if_id_pc_o   <= if_id_pc_i;
    if_id_inst_o <= if_id_inst_i;
  end
end

endmodule