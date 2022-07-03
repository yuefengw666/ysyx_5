module ysyx_22040237_idu(
  input [31:0] inst_i,
  input [63:0] pc_i,
  
  input [63:0] rs1_data_i,
  input [63:0] rs2_data_i,

  output rd_wr_en_o,
  output rs1_read_en_o,
  output rs2_read_en_o,
  output [4:0] rd_idx_o, 
  output [4:0] rs1_idx_o,
  output [4:0] rs2_idx_o,

  output [63:0] op1_o,
  output [63:0] op2_o,
  output [63:0] op1_jp_o,
  output [63:0] op2_jp_o,

  output [14:0] exu_info_bus_o,

  //**************DPI_C identify invalid inst for sim*****************/
  output invalid_inst
  /*******************************************************************/
);

  //**************DPI_C identify invalid inst for sim*****************/
assign invalid_inst = ~( rv64_R | rv64_I | rv64_L | rv64_S | rv64_B | 
                        rv64_JAL | rv64_JALR | rv64_AUIPC | rv64_LUI | rv64_EBREAK);
  /*******************************************************************/


wire [6:0] opcode = inst_i[6:0];
wire [4:0] rd     = inst_i[11:7];
wire [2:0] funct3 = inst_i[14:12];
wire [6:0] funct7 = inst_i[31:25];
wire [4:0] rs1    = inst_i[19:15];
wire [4:0] rs2    = inst_i[24:20];

assign rd_idx_o = rd;
assign rs1_idx_o = rs1;
assign rs2_idx_o = rs2;

/*************decode inst opcode**********/
//RV64I Rtype  and  RV64M Rtype   0110011
wire rv64_R = !opcode[6] & opcode[5] & opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

//RV64I Itype   0010011
wire rv64_I = !opcode[6] & !opcode[5] & opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

//RV64I load type 0000011
wire rv64_L = !opcode[6] & !opcode[5] & !opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

//RV64I Stype 0100011
wire rv64_S = !opcode[6] & opcode[5] & !opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

//RV64I Btype 1100011
wire rv64_B = opcode[6] & opcode[5] & !opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

//RV64I jump    JAL:1101111    JALR:1100111
wire rv64_JAL = opcode[6] & opcode[5] & !opcode[4] & opcode[3] & opcode[2] & opcode[1] & opcode[0];
wire rv64_JALR = opcode[6] & opcode[5] & !opcode[4] & !opcode[3] & opcode[2] & opcode[1] & opcode[0];

//RV64I Utype   lui:0110111    auipc:0010111
wire rv64_LUI = !opcode[6] & opcode[5] & opcode[4] & !opcode[3] & opcode[2] & opcode[1] & opcode[0];
wire rv64_AUIPC = !opcode[6] & !opcode[5] & opcode[4] & !opcode[3] & opcode[2] & opcode[1] & opcode[0];

//RV64I environment call(1110011) and break(1110011)
//wire inst_type_ECALL = opcode[6] & opcode[5] & opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];
wire rv64_EBREAK = opcode[6] & opcode[5] & opcode[4] & !opcode[3] & !opcode[2] & opcode[1] & opcode[0];

/*************decode imm****************/
wire [63:0] imm_i = { { 52{inst_i[31]} }, inst_i[31:20] };
wire [63:0] imm_s = { { 52{inst_i[31]} }, inst_i[31:25], inst_i[11:7] };
wire [63:0] imm_b = { { 51{inst_i[31]} }, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0 };
wire [63:0] imm_u = { { 32{inst_i[31]} }, inst_i[31:12], 12'b0 };
wire [63:0] imm_j = { { 43{inst_i[31]} }, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0 };

wire [63:0] imm_u_sl = imm_u << 12;

wire imm_11_5_0x00 = imm_i[11:5] == 7'b0;
wire imm_11_5_0x20 = imm_i[11:5] == 7'b010_0000;

/******decode funct3******/
wire funct3_0x0 = funct3 == 3'b000;
wire funct3_0x1 = funct3 == 3'b001;
wire funct3_0x2 = funct3 == 3'b010;
wire funct3_0x3 = funct3 == 3'b011;
wire funct3_0x4 = funct3 == 3'b100;
wire funct3_0x5 = funct3 == 3'b101;
wire funct3_0x6 = funct3 == 3'b110;
wire funct3_0x7 = funct3 == 3'b111;

wire funct7_0x00 = funct7 == 7'b000_0000;
wire funct7_0x20 = funct7 == 7'b010_0000;


//----------------------------identify inst--------------------------------------//
/*****RV64I R*****/
wire add = rv64_R & funct3_0x0 & funct7_0x00;
wire sub = rv64_R & funct3_0x0 & funct7_0x20;
wire sll = rv64_R & funct3_0x1 & funct7_0x00;
wire slt = rv64_R & funct3_0x2 & funct7_0x00;
wire sltu = rv64_R & funct3_0x3 & funct7_0x00;
wire xor_ = rv64_R & funct3_0x4 & funct7_0x00;
wire srl = rv64_R & funct3_0x5 & funct7_0x00;
wire sra = rv64_R & funct3_0x5 & funct7_0x20;
wire or_ = rv64_R & funct3_0x6 & funct7_0x00;
wire and_ = rv64_R & funct3_0x7 & funct7_0x00;

/*****RV64I Itype inst*****/
wire addi = rv64_I & funct3_0x0;
wire slli = rv64_I & funct3_0x1 & imm_11_5_0x00;
wire slti = rv64_I & funct3_0x2;
wire sltiu = rv64_I & funct3_0x3;
wire xori = rv64_I & funct3_0x4;
wire srli = rv64_I & funct3_0x5 & imm_11_5_0x00;
wire srai = rv64_I & funct3_0x5 & imm_11_5_0x20;
wire ori = rv64_I & funct3_0x6;
wire andi = rv64_I & funct3_0x7;

//****RV64I load inst*****/
//wire lw = rv64_L & funct3_0x2;

//RV64I B type inst
wire beq = rv64_B & funct3_0x0;
wire bne = rv64_B & funct3_0x1;
wire blt = rv64_B & funct3_0x4;
wire bge = rv64_B & funct3_0x5;
wire bltu = rv64_B & funct3_0x6;
wire bgeu = rv64_B & funct3_0x7;

//RV64I Stype inst
//wire sb = rv64_S & funct3_0x0;
//wire sd = rv64_S & funct3_0x3;

//RV64I jump inst
wire jal = rv64_JAL;
wire jalr = rv64_JALR & funct3_0x0;

//RV64I Utype inst
wire lui = rv64_LUI;
wire auipc = rv64_AUIPC;

//RV64I E 
wire ebreak = rv64_EBREAK & funct3_0x0 & (imm_i == 'b1);


// confirm imm
wire [`ysyx_22040237_REG_WIDTH-1:0] imm = ( ( {64{rv64_I |  rv64_L | jalr} } & imm_i ) | 
                                          ( {64{rv64_S}} & imm_s ) | 
                                          ( {64{rv64_B}} & imm_b ) |
                                          ( {64{jal}} & imm_j) | 
                                          ( {64{auipc | lui}} & imm_u_sl ) 
                                          );

//---------------------------------------------------------------
//wire rs1_0x = rs1 == 5'b00000;
//wire rs2_0x = rs2 == 5'b00000;
wire rd_idx_0x = rd == 5'b00000;
wire rs1_need = ~( jal | lui | auipc | ebreak ); 
wire rs2_need = ( rv64_R | rv64_S | rv64_B );
wire rd_need = (~rd_idx_0x) & ( ~( rv64_S | rv64_B | ebreak));

assign rs1_read_en_o = rs1_need;
assign rs2_read_en_o = rs2_need;
assign rd_wr_en_o = rd_need;

//identify operation data
wire op1_rs1_need = ~( jal | jalr | lui | auipc |  ebreak );
wire op1_pc_need = auipc | jal | jalr;

wire op2_rs2_need = rv64_R | rv64_B;
wire op2_imm_need = rv64_I | rv64_L | rv64_S | auipc | lui;
wire op2_0x4_need = jal | jalr;

wire op1_jp_rs1_need = jalr; 
wire op1_jp_pc_need = rv64_B | jal;

wire op2_jp_imm_need = jal | jalr | rv64_B;

assign op1_o = ( ( {64{op1_rs1_need}} & rs1_data_i) |   
                 ( {64{op1_pc_need}} & pc_i ));

assign op2_o = ( ( {64{op2_rs2_need}} & rs2_data_i ) |
                 ( {64{op2_imm_need}} & imm ) |
                 ( {64{op2_0x4_need}} & 64'h4 ) );

assign op1_jp_o = ( ( {64{op1_jp_rs1_need}} & rs1_data_i) | 
                      ( {64{op1_jp_pc_need}} & pc_i) );

assign op2_jp_o = ( {64{op2_jp_imm_need}} & imm ); 


//operation need alu
wire alu_op = rv64_R | rv64_I | auipc | lui;

wire alu_info_bus[14:0];
assign alu_info_bus[0] = alu_op ? 1'b0 : 1'b0;
assign alu_info_bus[1] = alu_op ? 1'b0 : 1'b0;
assign alu_info_bus[2] = alu_op ? 1'b0 : 1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_ADD] = alu_op ? (add | addi | auipc  ) : 1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SUB] = alu_op ? (sub) : 1'b0;                 
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SLL] = alu_op ? (sll | slli) : 1'b0;                 
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SLT] = alu_op ? (slt | slti) : 1'b0;                 
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SLTU] = alu_op ? (sltu | sltiu) : 1'b0;                
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_XOR] = alu_op ? (xor_ | xori): 1'b0;                
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SRL] = alu_op ? (srl | srli) :1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_SRA] = alu_op ? (sra | srai): 1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_OR] = alu_op ? (or_ | ori) :1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_AND] = alu_op ? (and_ | andi) : 1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_LUI] = alu_op ? lui : 1'b0;
assign alu_info_bus[`ysyx_22040237_EXU_INFO_ALU_EBREAK] = alu_op ? ebreak : 1'b0;


//bjp_info_bus
wire bjp_op = rv64_B | jal | jalr;
wire bjp_info_bus[14:0];


assign bjp_info_bus[0] = 1'b1;
assign bjp_info_bus[1] = 1'b0;
assign bjp_info_bus[2] = 1'b0;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_JAL]  = jal;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_JALR] = jalr;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BEQ] = beq;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BNE] = bne;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BLT] = blt;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BGE] = bge;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BLTU] = bltu;
assign bjp_info_bus[`ysyx_22040237_EXU_INFO_BJP_BGEU] = bgeu;
assign bjp_info_bus[11] = 1'b0;
assign bjp_info_bus[12] = 1'b0;
assign bjp_info_bus[13] = 1'b0;
assign bjp_info_bus[14] = 1'b0;

/*
//ls_info_bus
wire ls_info_bus[];
assign ls_info_bus[2:0] = `ysyx_22040237_EXU_INFO_LS;
assign ls_info_bus[`ysyx_22040237_EXU_INFO_LS_LOAD] = rv64_L;
assign ls_info_bus[`ysyx_22040237_EXU_INFO_LS_STORE] = rv64_S;
assign ls_info_bus[`ysyx_22040237_EXU_INFO_LS_SIZE] =  1'b0;
*/

assign exu_info_bus_o = alu_info_bus;

//assign exu_info_bus_o = ({15{alu_op}} & alu_info_bus) | ({15{bjp_op}} & bjp_info_bus);

endmodule
