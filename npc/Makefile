######################################################################
# Check for sanity to avoid later confusion
 
ifneq ($(words $(CURDIR)),1)
  $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

#set source
VSRC_PATH = vsrc/single_cyc/
INC_PATH = csrc/include/
INC_FLAG = $(addprefix -I -CFLAGS, $(INC_PATH))

TOP_DESIGN_NAME = ysyx_22040237_rv_single_cyc_cpu_top
VSRC = $(shell find $(abspath ./vsrc/single_cyc/) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp")
#CSRC = ./csrc/single_tb.cpp

IMG = ""

######################################################################
# Set up variables

VERILATOR = verilator
#VERILATOR_COVERAGE = verilator_coverage

# Warn abount lint issues; may not want this on less solid designs
#VERILATOR_FLAGS += -Wall
# Generate C++ in executable form
#VERILATOR_FLAGS += -cc --exe
# Make waveforms
#VERILATOR_FLAGS += --trace
# The option calls GNU Make or CMake to build the model.
#VERILATOR_FLAGS += --build
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
#timescale
#VERILATOR_FLAGS += --timescale 1ns/1ps
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
#VERILATOR_INPUT = $(DESIGN_NAME).v $(SIM_NAME).cpp

######################################################################
	#@ech
	#@echo "-- COVERAGE ----------------"
	#@rm -rf logs/annotated
	#$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
######################################################################

default: run

run: $(VSRC) $(CSRC)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo
	@echo "-- Verilator design "

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) -Wall $(INC_FLAG) --trace -cc $(VSRC_PATH)/ysyx_22040237_defines.v $(VSRC) -exe --build $(CSRC) -top $(TOP_DESIGN_NAME)

	@echo
	@echo "-- BUILD -------------------"

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/V$(TOP_DESIGN_NAME) $(IMG)

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open wave.vcd in a waveform viewer"
	@echo

##*.dmp #*.vpd #coverage.dat #core

gtk:
	gtkwave ./logs/wave.vcd &

.PHONY:clean
clean:
	rm -rf obj_dir logs *.log

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
