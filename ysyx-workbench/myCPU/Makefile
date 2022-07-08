.PHONY: run clean

DST = ./obj_dir
TARGET = VmyCPU
SRCS = $(abspath $(shell find ./vsrc -name "*.v"))
SRCS += $(abspath $(shell find ./csrc -name "*.cpp"))
SRCS += $(abspath $(shell find ./csrc -name "*.c"))
VERILATOR = verilator
PWD := $(shell pwd)
INC_PATH = $(PWD)/include
FLAGS = --cc --build --exe --trace -Mdir obj_dir
HEAD_PATH = -I$(INC_PATH)
LOG_FILE = log.txt 
IMG_FILE = 
LREADLINE = -lreadline
run : $(TARGET)
	$(DST)/$(TARGET) -l $(LOG_FILE) $(IMG_FILE)

$(TARGET) : $(SRCS)
	$(VERILATOR) $(FLAGS) -CFLAGS $(HEAD_PATH) -LDFLAGS $(LREADLINE)  $(SRCS)

clean:
	rm $(DST) -rf
