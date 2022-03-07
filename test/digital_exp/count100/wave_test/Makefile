######################################################################
#DESCRIPTION: Verilator Example: Small Makefile


######################################################################
# Check for sanity to avoid later confusion
 
ifneq ($(words $(CURDIR)),1)
  $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
#set input file name
DESIGN_NAME = count100
SIM_NAME = cwave

######################################################################
# Set up variables

VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage

# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Make waveforms
VERILATOR_FLAGS += --trace
# The option calls GNU Make or CMake to build the model.
VERILATOR_FLAGS += --build
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
#timescale
#VERILATOR_FLAGS += --timescale-override 1ns/1ps
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
VERILATOR_INPUT = $(DESIGN_NAME).v $(SIM_NAME).cpp

######################################################################
default: run

run:
	@echo
	@echo "-- Verilator design "

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	#@echo
	#@echo "-- BUILD -------------------"

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/V$(DESIGN_NAME) +trace

	#@echo
	#@echo "-- COVERAGE ----------------"
	#@rm -rf logs/annotated
	#$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open wave.vcd in a waveform viewer"
	@echo

##*.dmp #*.vpd #coverage.dat #core

gtk:
	gtkwave ./logs/wave.vcd &

clean:
	rm -rf obj_dir logs *.log
