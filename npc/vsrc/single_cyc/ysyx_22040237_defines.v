
`define ysyx_22040237_INST_WIDTH 32
`define ysyx_22040237_REG_WIDTH 64
`define ysyx_22040237_PC_RESET_ADDR 64'h80000000
`define ysyx_22040237_ZERO_REG 5'b0_0000
`define ysyx_22040237_REG_RESET 64'b0

//different type of inst_info_bus 
`define ysyx_22040237_EXU_INFO_ALU 3'd0;
`define ysyx_22040237_EXU_INFO_BJP 3'd1;
`define ysyx_22040237_EXU_INFO_LS  3'd2;
`define ysyx_22040237_EXU_INFO_MDU  3'd3;


//alu_info_bus has
`define ysyx_22040237_EXU_INFO_ALU_ADD     3
`define ysyx_22040237_EXU_INFO_ALU_SUB     4
`define ysyx_22040237_EXU_INFO_ALU_SLL     5
`define ysyx_22040237_EXU_INFO_ALU_SLT     6
`define ysyx_22040237_EXU_INFO_ALU_SLTU    7
`define ysyx_22040237_EXU_INFO_ALU_XOR     8
`define ysyx_22040237_EXU_INFO_ALU_SRL     9
`define ysyx_22040237_EXU_INFO_ALU_SRA     10
`define ysyx_22040237_EXU_INFO_ALU_OR      11
`define ysyx_22040237_EXU_INFO_ALU_AND     12
`define ysyx_22040237_EXU_INFO_ALU_LUI     13
`define ysyx_22040237_EXU_INFO_ALU_EBREAK  14
`define ysyx_22040237_EXU_INFO_ALU_WOP     15


//bjp_info_bus has
`define ysyx_22040237_EXU_INFO_BJP_JAL 3
`define ysyx_22040237_EXU_INFO_BJP_JALR 4
`define ysyx_22040237_EXU_INFO_BJP_BEQ  5
`define ysyx_22040237_EXU_INFO_BJP_BNE  6
`define ysyx_22040237_EXU_INFO_BJP_BLT  7
`define ysyx_22040237_EXU_INFO_BJP_BGE  8
`define ysyx_22040237_EXU_INFO_BJP_BLTU 9
`define ysyx_22040237_EXU_INFO_BJP_BGEU 10

//ls_info_bus
`define ysyx_22040237_EXU_INFO_LS_LOAD     3
`define ysyx_22040237_EXU_INFO_LS_STORE    4
`define ysyx_22040237_EXU_INFO_LS_USIGN    5
`define ysyx_22040237_EXU_INFO_LS_BYTE     6
`define ysyx_22040237_EXU_INFO_LS_DB       7
`define ysyx_22040237_EXU_INFO_LS_WORD     8
`define ysyx_22040237_EXU_INFO_LS_DW       9

//mdu_info_bus
`define ysyx_22040237_EXU_INFO_MDU_WOP     3
`define ysyx_22040237_EXU_INFO_MDU_MUL     4
`define ysyx_22040237_EXU_INFO_MDU_MULH    5
`define ysyx_22040237_EXU_INFO_MDU_MULHSU  6
`define ysyx_22040237_EXU_INFO_MDU_MULHU   7
`define ysyx_22040237_EXU_INFO_MDU_DIV     8
`define ysyx_22040237_EXU_INFO_MDU_DIVU    9
`define ysyx_22040237_EXU_INFO_MDU_REM     10
`define ysyx_22040237_EXU_INFO_MDU_REMU    11








