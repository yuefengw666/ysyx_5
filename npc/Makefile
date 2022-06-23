######################################################################
# Check for sanity to avoid later confusion
 
ifneq ($(words $(CURDIR)),1)
  $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

#---------set source--------------
VSRC_PATH = vsrc/single_cyc/
INC_PATH = $(NPC_HOME)/csrc/include
INC_FLAG = $(addprefix -I, $(INC_PATH))

VSRCS += $(shell find $(abspath $(VSRC_PATH)) -name "*.v")
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp")

TOP_DESIGN_NAME = ysyx_22040237_rv_single_cyc_cpu_top
TOP = top
VDEFINE = $(VSRC_PATH)ysyx_22040237_defines.v

#---------Verilator flags---------
VERILATOR = verilator
VERILATOR_FLAGS += -Wall -MMD --trace -cc --build
#High performance optimizations
VERILATOR_FLAGS += -O3
#include path
#VERILATOR_FLAGS += -I$(VSRC_PATH)

#---------G++ Compilation flags-------------
LDFLAGS = "-lpthread -lSDL2 -fsanitize=address -ldl"
#readline link
RLFLGAS = /lib/x86_64-linux-gnu/libreadline.so -CFLAGS -lreadline -CFLAGS -lncurses

#---------NPC exec args--------------------
DIFF_REF_SO = "$(NEMU_HOME)/build/riscv64-nemu-interpreter-so"
ARGS_DIFF = "-d $(DIFF_REF_SO)"

#---------Build director--------------------
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOP)

######################################################################

default: $(BIN)

$(shell mkdir -p $(OBJ_DIR))

$(BIN): $(VDEFINE) $(VSRCS) $(CSRCS)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@rm -rf $(OBJ_DIR)

	@echo
	@echo "-- Verilator design "

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $^ --top $(TOP_DESIGN_NAME)\
	$(addprefix -CFLAGS, $(INC_FLAG))\
	$(RLFLGAS)\
	$(addprefix -LDFLAGS, $(LDFLAGS))\
	--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

	@echo
	@echo "-- BUILD -------------------"
# To compile, we can either
# 1*. Pass --build to Verilator by editing VERILATOR_FLAGS above. 
# 2. Or, run the make rules Verilator does:
#	$(MAKE) -j -C obj_dir -f Vtop.mk Vtop
#--> -C obj_dir tells make to work in obj_dir directory, -f Vtop.mk tell make
#to build the target Vtop, which is name of executable
# 3. Or, call a submakefile where we can override the rules ourselves:
#	$(MAKE) -j -C obj_dir -f ../Makefile_obj

run: $(BIN)
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf $(BUILD_DIR)/wave
	@mkdir -p $(BUILD_DIR)/wave
	@$^ $(IMG) $(ARGS_DIFF)

	@echo
	@echo "-- DONE --------------------"
	@echo

gtk:
	gtkwave $(BUILD_DIR)/wave.vcd &

clean:
	rm -rf $(BUILD_DIR)

.PHONY:clean run gtk

include ../Makefile
