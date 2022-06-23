# verilator

## 1 verilator仿真全流程

1. 调用` verilator  source_of_verilog` 将文件编译为C++模型或者System C模型。
2. 用户编写一个C++的 `wrapper` 模块，其中包含 `main` 函数。
3. 使用C++编译器，将verilator编译好的模型和 `wrapper` 和verilator库函数链接成可执行文件。
4. 执行可执行文件，完成仿真。

### 1.1 例子解析

``` verilog
module our;
    initial beign $display("Hello World"); $finish; end
endmodule
```

``` c++
#include "Vour.h"
#include "verilated.h"
int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Vour *top = new Vour;
    while (!Verilated::gotFinish()){ top->eval(); }
    delete top;
    return 0;
}
```

```shell
verilator -wall --cc our.v --exe --build sim_main.cpp
```

​	`--cc` 和 `--sc` 选项，Verilator 会将代码分别转化为`C++` 和 `SystemC` 代码；`--lint-only` ，Verilator会为代码生成警告但是不会生成任何输出文件，`--xml-only`；`--xml-only` 选项，Verilator 会输出XML文件，用于用来满足其他的设计工具。`-E` 将会会通过IEEE处理规则来处理代码，并通过标准输出进行输出。

## 2. C++ 与 SystemC 代码生成

​	Verilator 会将 verilog 的代码转化为 `C++`的代码或者 `SystemC`的代码，当使用下面这些选项时：

```markdown
1.  Verilator 读入输入的 verilog 代码， 确定了所有的 “top modules”，即那些不用作其他单元格下的实例的模块和程序。
2.  Verilator 将会生成 `C++/SystemC` 代码到输出文件到 `--Mdir` 选项指定的目录，或者默认的`obj_dir` 。前缀可以通过 `--prefix` 设置，或者默认就是顶部模块的名字。
3.  如果使用了`--exe` 选项，Verilator将生成makefile来生成模拟程序，否则makefile会生成包含objects的archive文件。
4.  如果使用了 `--build`，将会使用`GNU Make` 或者 `CMake` 来生成模型。
```

​	一旦模型生成，它就可以运行。

## 3. 一生一芯

### 3.1 配置环境

``` verilog
//双控开关
module top(
	input a,
    input b,
    output f
);
    assign f = a ^ b;
endmodule
```

``` c++
#include "Vtop.h" 					//我们编译生成地model
#include "verilated.h" 				//verilator库
#include "verilated_vcd_c.h"		//用于生成波形文件
#include <stdlib.h>					//本文件中使用了rand
#include <stdio.h>					//标准输入输出
#include <assert.h>					//assert进行结果验证

VerilatedContext *contextp = NULL;	//verilator的上下文
VerilatedVcdC *tfp = NULL;			//用于生成波形

static Vtop *top;					//执行模型的指针

void step_and_dump_wave()			//模型利用输入计算输出，同时记录时钟前进一个周期的波形
{
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init()						
{
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);	//上下文开启追踪功能，用于生成波形
    top->trace(tfp,0);				//模型记录结果在tfp
    tfp->open("dump.vcd");			//最后的波形文件的指定
}

void sim_exit()
{
    step_and_dump_wave();			
    tfp->close();
}

int main(void)
{
    sim_init();
	while(!contextp->gotFinished())	
    {
        a = rand()%2;
        b = rand()%2;
        top->a = a;					//引脚输入
        top->b = b;					//引脚输入
        step_and_dump_wave();		//输出波形
        printf("a=%d, b=%d, f=%d\n", a, b, top->f);
        assert(top->f == a ^ b);	//校验结果
    }
}
```

```makefile
verilator -Wall --cc top.v --build --exe main.cpp --trace
```

​	verilator会生成 `Vtop` 的相关文件在 `obj_dir` 下，通过将 Verilog 转化为 `C++` 类，从而可以用 `C++` 代码方便地操纵。

​	同时下 `sudo apt-get install gtkwave` , 使用`gtkwave dump.vcd `可以观察波形。

### 3.2 NVBOARD

​	在github中可以直接获取 `nvboard` 的源代码，并且在 `example` 中带了可以实际的例子，修改 `nvboard.a` 可以直接利用 `example`中的 `makefile` 进行修改。`nvboard` 的例子如下：

```verilog
module top(
        input a,
        input b,
        output f
);
        assign f = a ^ b;
endmodule
```

```c++
#include <nvboard.h>
#include <stdlib.h>
#include "Vtop.h"

static Vtop dut;

void nvboard_bind_all_pins(Vtop* top);
static void single_cycle()
{
        dut.a = rand()%2;
        dut.b = rand()%2;
        dut.eval();
}

int main()
{
        nvboard_bind_all_pins(&dut);
        nvboard_init();
    
        while(1)
        {
                nvboard_update();
                single_cycle();
        }
}
```

`nvboard`的原理如下：

```c++
typedef struct PinMap {
  int len;
  bool is_output;
  union {				//其中存储了连接的对应nvboard的引脚
    uint16_t pin;
    uint16_t *pins;
  };
  void *signal; 		//指向verilator信号
  PinMap *next;
} PinMap;

```

```c++
void nvboard_bind_pin(void *signal, bool is_rt, bool is_output, int len, ...) {
  PinMap *p = new PinMap;							//绑定引脚的函数用于，将nvboard中信息和verilator连接起来
  p->is_output = is_output;	
  p->len = len;
  assert(len < 64);

  va_list ap;										//遍历变参中引脚
  va_start(ap, len);
  if (len == 1)
  {
          p->pin = (uint16_t)va_arg(ap, int);
  }
  else {											//如果信号是个向量的话需要为每一个pin记录对应在nvboard上的编号
    p->pins = new uint16_t[p->len];
    /*
    	值得注意的是，如果是output，我们的nvboard中传入的第一个引脚实际对应signal中的最高位引脚，
    	如果是input，则相反
    */
    for (int i = 0; i < len; i ++)					
    {
      uint16_t pin = va_arg(ap, int);				
      if (is_output)
              p->pins[len - 1 - i] = pin;
      else
              p->pins[i] = pin;
    }
  }
  va_end(ap);

  //signal of veirlator
  p->signal = signal;

  //是否需要实时更新
  if (is_rt)
  {
          p->next = rt_pin_map;
          rt_pin_map = p;
  }
  else
  {
          p->next = pin_map;
          pin_map = p;
  }

}
 
```

```c++
static void nvboard_update_input(PinMap *p) {
  void *ptr = p->signal;
  //现在引脚和信号一一对应，外设如果对某个input设置了信息，在扫描中就会被检测到输入给verilator
  if (p->len == 1) {
    uint8_t val = input_map[p->pin];
    *(uint8_t *)ptr = val;
    return;
  }

  int len = p->len;
  uint64_t val = 0;
  for (int i = 0; i < len; i ++) {
    val <<= 1;
    val |= input_map[p->pins[i]];
  }
  if (len <= 8) { *(uint8_t *)ptr = val; }
  else if (len <= 16) { *(uint16_t *)ptr = val; }
  else if (len <= 32) { *(uint32_t *)ptr = val; }
  else if (len <= 64) { *(uint64_t *)ptr = val; }
}
```

```makefile
verilator -MMD --build -cc -O3 --x-assign fast --x-initial fast --noassert --exe
         --top-module top ./vsrc/top.v  ./csrc/main.cpp ./obj_dir/auto_bind.cpp $(NVBOARD_HOME)/build/nvboard.a -CFLAGS -I$(NVBOARD_HOME)/include -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image
```

### 流水灯

```c++
#include <nvboard.h>
#include <stdio.h>
#include "Vtop.h"

static Vtop dut;
void nvboard_bind_all_pins(Vtop* top);

void single_cycle()
{
        dut.clk = 0; dut.eval();
        dut.clk = 1; dut.eval();
}

void reset(int n)
{
        dut.rst = 1;
        while(n-- > 0) single_cycle();
        dut.rst = 0;
}

int main(void)
{
        nvboard_bind_all_pins(&dut);
        nvboard_init();
        reset(1);
        printf("reset over\n");
        while(true)
        {
                nvboard_update();
                single_cycle();
        }
}
```

```verilog
module light(
  input clk,
  input rst,
  output reg [15:0] led
);
  reg [31:0] count;
  always @(posedge clk) begin
    if (rst) begin led <= 1; count <= 0; end
    else begin
      if (count == 0) led <= {led[14:0], led[15]};
      count <= (count >= 5000000 ? 32'b0 : count + 1);
    end
  end
endmodule
```

这里注意引脚顺序，输入的第一位会被赋值位output高位。reg表示一定要有触发，输出才会反应输入的状态。
