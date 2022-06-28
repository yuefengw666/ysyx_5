# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22040237_rv_single_cyc_cpu_top.mk

default: Vysyx_22040237_rv_single_cyc_cpu_top__ALL.a

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_22040237_rv_single_cyc_cpu_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22040237_rv_single_cyc_cpu_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/yfwu/ysyx-workbench/npc/csrc/include \
	-lreadline \
	-lncurses \
	-I/usr/lib/llvm-12/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/lib/x86_64-linux-gnu/libreadline.so \
	-lpthread \
	-lSDL2 \
	-fsanitize=address \
	-ldl \
	-I/usr/lib/llvm-12/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \
	-lLLVM-12 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	dpi \
	difftest \
	mem \
	monitor \
	expr \
	sdb \
	watchpoint \
	interrupt \
	npc_reg \
	npc_sim \
	single_core_tb \
	disasm \
	log \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/yfwu/ysyx-workbench/npc/csrc \
	/home/yfwu/ysyx-workbench/npc/csrc/DPI_C \
	/home/yfwu/ysyx-workbench/npc/csrc/difftest \
	/home/yfwu/ysyx-workbench/npc/csrc/mem \
	/home/yfwu/ysyx-workbench/npc/csrc/monitor \
	/home/yfwu/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/yfwu/ysyx-workbench/npc/csrc/npc_sim \
	/home/yfwu/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_22040237_rv_single_cyc_cpu_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

# Verilated -*- Makefile -*-
