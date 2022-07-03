import "DPI-C" function void sim_ebreak();
import "DPI-C" function void invalid_inst_o();

module ysyx_22040237_exu(
  input clk,
  input rst,

  input rd_wr_en_i,
  input [4:0] rd_idx_i,

  input [63:0] op1_i,  
  input [63:0] op2_i,
  input [63:0] op1_jp_i,
  input [63:0] op2_jp_i,
  input [14:0] exu_info_bus_i,

  output rd_wr_en_o,
  output [4:0] rd_idx_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] alu_res_o,

  output pc_jump_flag_o,
  output [`ysyx_22040237_REG_WIDTH-1:0] pc_jump_addr_o,




/*************************DPI_C sim end***************************************/
  input invalid_inst
/*****************************************************************************/

);

/*************************DPI_C sim end***************************************/
wire ebreak = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_EBREAK];

always@(posedge clk)begin
  if(ebreak) sim_ebreak();
end
/*****************************************************************************/

/*************************DPI_C identify invalid inst, sim stop***************/
always@(posedge clk)begin
  if((!rst) && invalid_inst)begin
    invalid_inst_o(); 
  end
end
/******************************************************************************/

assign rd_wr_en_o = rd_wr_en_i;
assign rd_idx_o = rd_idx_i;

//**********identify alu bjp...**********//
wire alu_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_ALU;
wire bjp_req = exu_info_bus_i[2:0] == `ysyx_22040237_EXU_INFO_BJP;

//**********alu req**********//
//add
wire op_add = ( ( alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_ADD] ) | 
                op_jal |
                op_jalr
              );

wire op_sub = ( ( alu_req & exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SUB] ) | 
                 op_slt_sltu |
                 op_beq |
                 op_bne |
                 op_blt |
                 op_bge |
                 op_bltu |
                 op_bgeu
              );

wire op_add_sub = op_add | op_sub;

wire [`ysyx_22040237_REG_WIDTH : 0] adder_in1;
wire [`ysyx_22040237_REG_WIDTH : 0] adder_in2;
wire [`ysyx_22040237_REG_WIDTH : 0]adder_cin;
wire [`ysyx_22040237_REG_WIDTH : 0] adder_res;

wire [`ysyx_22040237_REG_WIDTH : 0] adder_op1 = { op1_i[`ysyx_22040237_REG_WIDTH-1], op1_i};
wire [`ysyx_22040237_REG_WIDTH : 0] adder_op2 = { op2_i[`ysyx_22040237_REG_WIDTH-1], op2_i};

assign adder_in1 = adder_op1; //{64{op_add_sub}} & op1_i;
assign adder_in2 = (op_sub ? ~adder_op2 : adder_op2); //{64{op_add_sub}} & (op_sub ? ~op2_i : op2_i);
assign adder_cin = op_sub ? 65'h1 : 65'h0;

assign adder_res = adder_in1 + adder_in2 + adder_cin;

//sll slli
//wire sll_res[`ysyx_22040237_REG_WIDTH-1 :0];
wire op_sll = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLL];

wire [63:0] sll_res = op1_i << op2_i[5:0];
//assign sll_res = op1_i << op2_i[5:0];

//slt sltu
wire [`ysyx_22040237_REG_WIDTH-1:0] slt_sltu_res;
wire op_slt_sltu = alu_req & ( exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLT] |
                               exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SLTU]  );
wire slt_sltu_cmp_res = op_slt_sltu & adder_res[`ysyx_22040237_REG_WIDTH];

assign slt_sltu_res = slt_sltu_cmp_res ? 64'h1 : 64'h0;

//xor
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_res;
wire op_xor = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_XOR]; 
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_in1 = op1_i;
wire [`ysyx_22040237_REG_WIDTH-1:0] xor_in2 = op2_i;

assign xor_res = xor_in1 ^ xor_in2;

//srl 
wire [`ysyx_22040237_REG_WIDTH-1:0] srl_res;
wire op_srl = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SRL];

assign srl_res = op1_i >> op2_i[5:0];

//sra
wire [`ysyx_22040237_REG_WIDTH-1:0] sra_res;
wire op_sra = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_SRA];
wire [`ysyx_22040237_REG_WIDTH-1:0] sra_shift_mask = 64'b1 >> op2_i[5:0];

assign sra_res = srl_res | (~sra_shift_mask);

//or
wire [`ysyx_22040237_REG_WIDTH-1:0] or_res;
wire op_or = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_OR];

assign or_res = op1_i | op2_i;

//and
wire [`ysyx_22040237_REG_WIDTH-1:0] and_res;
wire op_and = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_AND];

assign and_res = op1_i & op2_i;

//lui
wire [`ysyx_22040237_REG_WIDTH-1:0] lui_res;
wire op_lui = alu_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_ALU_LUI];

assign lui_res = op2_i;



//**************bjp req***************//
assign pc_jump_flag_o = op_jal | op_jalr | beq_res | bne_res | blt_res | bge_res | bltu_res | bgeu_res;
assign pc_jump_addr_o = op1_jp_i + op2_jp_i;

//jal
wire op_jal = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_JAL];

//jalr
wire op_jalr = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_JALR];

//beq judge sub result 
//wire [`ysyx_22040237_REG_WIDTH:0] bjp_sub_res = adder_res;

//beq
wire op_beq = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BEQ];
wire beq_res = op_beq && (adder_res == 65'b0);

//bne
wire op_bne = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BNE];
wire bne_res = op_bne & (!beq_res);

//blt
wire op_blt = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BLT];
wire blt_res = op_blt & (!adder_res[`ysyx_22040237_REG_WIDTH]);

//bge
wire op_bge = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BGE];
wire bge_res = op_bge & (!blt_res);

//bltu
wire op_bltu = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BLTU];
wire bltu_res = op_bltu & (adder_res[`ysyx_22040237_REG_WIDTH]);

//bgeu
wire op_bgeu = bjp_req && exu_info_bus_i[`ysyx_22040237_EXU_INFO_BJP_BGEU];
wire bgeu_res = op_bgeu & (!bltu_res);


//alu result

assign alu_res_o = ( ( {64{op_add_sub}} & adder_res[`ysyx_22040237_REG_WIDTH-1 : 0] ) | 
                   ( {64{op_sll}} & sll_res ) |
                   ( {64{op_slt_sltu}} & slt_sltu_res ) |
                   ( {64{op_xor}} & xor_res ) |
                   ( {64{op_srl}} & srl_res ) |
                   ( {64{op_sra}} & sra_res ) |
                   ( {64{op_or}} & or_res ) | 
                   ( {64{op_and}} & and_res) |
                   ( {64{op_lui}} & lui_res)  
                );


endmodule
