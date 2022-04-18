#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"

#define CONFIG_MSIZE  0x06000000
#define CONFIG_MBASE  0x80000000

#define imm  0
#define rs1  0
#define funt3  0 //addi 0
#define rd  1
#define opcode_addi  19//addi 0010011
#define opcode_ebreak 115//ebreak 1110011

char mem[CONFIG_MSIZE];

int32_t mread(uint32_t raddr){
  printf("pc:%x\n",raddr);
  uint32_t ra = raddr - CONFIG_MBASE;
  printf("read mem address : %x\n",ra);
  return *((int32_t *)&mem[ra]);
}

void mwrite(uint32_t waddr,int32_t wdata){
  *((int32_t *)&mem[waddr]) = wdata;
}

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void ebreak_en(){
  contextp->timeInc(1);
  top->eval();
  tfp->dump(contextp->time());
  delete top;
  delete contextp;
  tfp->close();
  exit(0);
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 99);
  tfp->open("./logs/wave.vcd");
}

void step_and_dump_wave(){
  top->eval();
  tfp->dump(contextp->time());
}

void sim_exit(){
  contextp->timeInc(1);
  top->eval();
  tfp->dump(contextp->time());
  delete top;
  delete contextp;
  tfp->close();
}

int main() {
  sim_init();
  top->clk = 0;
  top->rstn=0;
	step_and_dump_wave();
  //top->inst = 0;
  mwrite(0,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);//imm = 1 , rs1 =0 ,  rd = 1 //inst0: 1+ reg0 = reg1  reg1:1
  mwrite(4,((imm+2)<<20) | ((rs1+1)<<15) | (funt3<<12) | (rd<<7) | opcode_addi); //inst1:reg1 = 2+ reg1   reg1:3
  mwrite(8,((imm+3)<<20) | ((rs1+1)<<15) | (funt3<<12) | (rd<<7) | opcode_addi); //inst1:reg1 = 3+ reg1   reg1:6
  mwrite(12,((imm+1)<<20) | ((rs1)<<15) | (funt3<<12) | (rd-1<<7) | opcode_ebreak); //inst1:reg1 = 3+ reg1   reg1:6
  
  //if(false && argc && argv && env){}
  //contextp->commandArgs(argc, argv);
  while (contextp->time() < 16  && !contextp->gotFinish()){
	step_and_dump_wave();
  contextp->timeInc(1);
  top->clk = !top->clk;
  if(!top->clk){
    if(contextp->time() > 1)
    printf("top->pc : %x\n",top->pc);
    top->inst = mread(top->pc);
    printf("top->inst: %x\n",top->inst);
  }
	//rst
	if(!top->clk){
		if(contextp->time() < 2){
			top->rstn = 0;
	  }
	  else {
			top->rstn = 1;
		}
	}
  
	/*//en
	if(!top->clk){
		if(contextp->time() < 10 || contextp->time()>480){
			top->inst = ;
		}
		else top->en = 1;
	}
	
	//pause
	if(!top->clk){
		if(contextp->time() > 150 && contextp->time() < 160){
			top->pause = 1;
		}
		else top->pause = 0;
	}
*/
  }

  sim_exit();
  return 0;
}

