#used for linking pin
NXDC_FILES = ./constr/top.nxdc
SRC_AUTO_BIN = ./obj_dir/auto_bind.cpp
AUTO_BIN_SCRIPT = $(NVBOARD_HOME)/scripts/auto_pin_bind.py

#directroy
VSRC = ./vsrc
CSRC = ./csrc
OBJ_DIR = ./obj_dir

#source file
CFILES = $(shell find $(CSRC) -name *.cpp)
VFILES = $(shell find $(VSRC) -name *.v)
NVBOARD_ARCHIVE = $(NVBOARD_HOME)/build/nvboard.a
TOP_NAME = top

#verilator
VERILATOR = verilator

#python
PYTHON = python3

#FLAGS
VERILATOR_CFLAGS += --build --cc --exe --MMD
CFLAGS = -CFLAGS -I$(NVBOARD_HOME)/include
LDFLAGS += -LDFLAGS -lSDL2
LDFLAGS += -LDFLAGS -lSDL2_image

#target


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	-@verilator --cc --exe --build --trace ./csrc/main.cpp ./vsrc/top.v 

$(SRC_AUTO_BIN):
	$(shell mkdir -p $(OBJ_DIR))
	$(PYTHON) $(AUTO_BIN_SCRIPT) $(NXDC_FILES) $(SRC_AUTO_BIN) 

nvboard: $(CFILES) $(VFILES) $(SRC_AUTO_BIN) $(NVBOARD_ARCHIVE) 
	$(VERILATOR) $(VERILATOR_CFLAGS) $^ $(CFLAGS) $(LDFLAGS) 

clean:
	rm $(OBJ_DIR) -rf

.PHONY: all sim nvboard clean
include ../Makefile
