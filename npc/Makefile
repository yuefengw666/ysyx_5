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
CSRCS += $(shell find $(abspath ./csrc) -name "*.cc")

TOP_DESIGN_NAME = cpu_top
TOP = top
VDEFINE = $(VSRC_PATH)ysyx_22040237_defines.v

#---------Verilator flags---------
VERILATOR = verilator
VERILATOR_FLAGS += -Wall -MMD --trace -cc --build
#High performance optimizations
VERILATOR_FLAGS += -O3

#---------G++ Compilation flags-------------
LDFLAGS += -lpthread -lSDL2 -fsanitize=address -ldl
#readline link
RLLIB = /lib/x86_64-linux-gnu/libreadline.so -CFLAGS -lreadline -CFLAGS -lncurses
#llvm link
LLVMLIB += -I/usr/lib/llvm-12/include
LDFLAGS += $(shell llvm-config --cxxflags) 
LDFLAGS += -fPIE $(shell llvm-config --libs)
#---------NPC exec args--------------------
IMG ?=
ARGS ?=
#DIFF_REF_SO = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
#DIFF_ARGS += --diff=$(DIFF_REF_SO) #/ -d $(DIFF_REF_SO)

#---------Build director--------------------
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOP)

######################################################################

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

$(BIN): $(VDEFINE) $(VSRCS) $(CSRCS)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@rm -rf $(OBJ_DIR)

	@echo
	@echo "-- Verilator design "

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top $(TOP_DESIGN_NAME) $^ \
		$(addprefix -CFLAGS , $(INC_FLAG)) \
		$(addprefix -CFLAGS , $(LLVMLIB)) \
		$(RLLIB)\
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
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
	@rm -rf $(BUILD_DIR)/wave.vcd
	@$^ $(ARGS) $(IMG)

	@echo
	@echo "-- DONE --------------------"
	@echo

gtk:
	gtkwave $(BUILD_DIR)/wave.vcd &

clean:
	rm -rf $(BUILD_DIR)

.PHONY:clean run gtk

include ../Makefile
