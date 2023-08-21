import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);

module ifu(
  input                 clk,
  input                 rst,
  input                 bj_load_cft,
  input                 npc_jump_en_i,
  input [63:0]          npc_jump_addr_i,
  output reg [63:0]     if_pc_o,
  output [31:0]         if_inst_o
);

//generate next pc
always@(posedge clk)begin
  if(rst)begin
    if_pc_o <= 64'h80000000;
  end
  else if(bj_load_cft)begin
    if_pc_o <= if_pc_o;
  end
  else if(npc_jump_en_i)begin
    if_pc_o <= npc_jump_addr_i;
  end
  else begin
    if_pc_o <= if_pc_o + 64'h4;
  end
end

//fetch insturction

/* verilator lint_off UNUSED */
wire [63:0] rdata;
/* verilator lint_on UNUSED */

/* verilator lint_off LATCH */
always @(*) begin
  mem_read(if_pc_o, rdata);
end
/* verilator lint_on LATCH */

assign if_inst_o = rdata[31:0];


endmodule
