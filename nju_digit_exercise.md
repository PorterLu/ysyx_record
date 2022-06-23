# 数据逻辑与计算机组成原理

## 实验一 选择器

​	选择器时数字逻辑系统的常用电路，是组合逻辑电路中的主要组成元件之一，它是由多路的数据输入、一位或者多位的选择控制端和一路的数据输出端组成的，选择控制信号决定了输出的是第几路信号。数字电路中存在大量的并行计算，我们将可能用到的信号都先计算出来，在利用选择器最终决定输出那一路的信号。

### 二选一多路选择器

​	<img src="C:\Users\Porterlu\Desktop\picture\MUX2.png" style="zoom:50%;" />

当 s 的值为1时选择 b，当 s 的值为0时选择 a 。卡诺图如下所示：

 <img src="C:\Users\Porterlu\Desktop\picture\MUX2k.png" style="zoom:50%;" />

最终得到了 $y = \overline{s}a+sb$

 #### 数据流建模

数据流建模主要就是通过连续赋值语句 `assign` 来描述电路的功能。根据这一逻辑电路图，利用Verilog HDL 实现2选1选择器的逻辑电路：

```verilog
module m_mux21(a,b,s,y);
    input a,b,s;
    output y;
    
    assign y = (~s&a)|(s&b);
endmodule
```

#### 结构化建模

结构化建模主要是指通过逐层实例化子模块的方式来描述电路的功能。

``` verilog
module my_add(a, b, c)
    input a,b;
    output c;
    
    assign c =  a & b;
endmodule

module my_or(a, b, c);
    input a, b;
    output c;
    
    assign c = a | b;
endmodule

module my_not(a, b)
    input a;
    output b;
    
    assign b = ~a;
endmodule

module mux21b(a, b, s, y);
    input a, b, s;
    output y;
    
    wire l, r, s_n;
    my_not i1(.a(s), .b(s_n)); 			//实现 ~s
    my_and i2(.a(s_n), .b(a), .c(l));	//实现 (~s&a)
    my_and i3(.a(s)), .b(b), .c(r));	//实现 (s&b)
    my_or i4(.a(1), .b(r), .c(y));		//实现 (~s&a)|(s&b)
endmodule
```

#### 行为建模

行为建模主要是通过类似面向过程的编程语言来描述电路的行为。例如，在Verilog中也可以用if语句来实现2选1多路选择器。

```verilog
module mux21c(a, b, s, y);
    input a, b, s;
    output reg y; // y在always块中被赋值，一定要声明为reg型的变量
    
    always @(*)
        if(s==0)
            y = a;
    	else 
            y = b;
endmodule
```

#### 分析

​	在Verilog中，各个语句是并发执行的，模块中所有的assing语句、always语句块和实例化语句，其执行顺序部分先后。而if 是顺序执行的语句，其执行过程中必须判断if后的条件，才能确定执行的内容是if后的内容还是else后的内容。Verilog中规定，顺序执行的语句包含在always块中，always块中的语句按照它们在代码中出现的顺序执行。

```verilog
always @(<敏感事件列表>)
    执行语句
```

​	在敏感事件列表中列出所有能影响always块中输出信号的信号清单，如果敏感事件列表中任何一个变量发生了变化，都要执行always语句块中的语句。 `always @(a or b)` 表示`a`或者 `b` 发生变化就立即执行always语句块中的内容，`always @(*)` 表示任何一个 在alway语句块中或条件表达式右边出现的变量发生变化，都将执行always块。

​	注意 if 语句中如果没有 else 与其配对，那么编译器会自动生成一个寄存器来保存当前的值，建议都加上一个 else 语句来防止多余的寄存器的生成。

### 多路选择器模板

​	模板的大致原理如下，最后的judger 只是做了一个与，最后一步为了简化图形，没有画出是否hit判断，hit后才能将结果输出到out，之前的结果只是存到log_out中。

![](C:\Users\Porterlu\Desktop\picture\muxer_template.png)

```verilog
//NR_KEY为几路选择器， KEY_LEN 选择信号的长度，DATA_LEN为输入输出数据的长度
module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  //对表中的内容进行分类
  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  //并行的一个判断，并不用顺序执行
  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule
```

```verilog
module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN =1)(
    output [DATA_LEN-1:0] out,
    input [KEY_LEN-1:0] key,
    input [NR_KEY*(KEY_LEN+DATA_LEN)-1:0] lut
);
    MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule
```

所以我们要做的就是传入正确的选择表就可以了。

```verilog
module mux21e(a, b, s, y);
    input a, b, s;
    output y;
    MuxKey #(2, 1, 1) i0 (y, s, {
        1'b0, a,
        1'b1, b
    });
endmodule
```

### 实验验收内容一：四选一选择器

![](C:\Users\Porterlu\Desktop\picture\mux_exp1.png)

```verilog
module mux41(
        input [1:0] a[3:0],
        input [1:0] s,
        output reg [1:0] f
);
        MuxKeyWithDefault #(4, 2, 2) i0 (f, s, 2'b0, {
        2'b00, a[0],
        2'b01, a[1],
        2'b10, a[2],
        2'b11, a[3]
        });

endmodule
```

```c++
#include <stdio.h>
#include <stdlib.h>
#include "nvboard.h"
#include "Vmux41.h"

static Vmux41 dut;
void nvboard_bind_all_pins(Vmux41* top);

void single_cycle()
{
        dut.eval();
}

int main(void)
{
        nvboard_bind_all_pins(&dut);
        nvboard_init();
        while(true)
        {
                nvboard_update();
                single_cycle();
        }

}
```

```mark
top=mux41

s (SW1,SW0)
a[3] (SW9,SW8)
a[2] (SW7,SW6)
a[1] (SW5,SW4)
a[0] (SW3,SW2)
f (LD1,LD0)
```

#### 用 chisel 解决

```scala
./src/main/scala/mux41.scala
package mux41

import chisel3._
import chisel3.experimental._

class mux41 extends Module{
  val io = IO( new Bundle{
    val in = Input(Vec(4,UInt(2.W)))
    val out = Output(UInt(2.W))
    val s = Input(UInt(2.W))
  })

  io.out := io.in(io.s:UInt);

}
```

 ```scala
 ./src/test/scala/mux41.scala
 package mux41
 
 import chisel3._
 
 object Main extends App {
   Driver.execute(args, () => new mux41)
 }
 ```

```shell
sbt "test:runMain mux41.Main"
```

```verilog
//生成的verilog代码
module mux41(
  input        clock,
  input        reset,
  input  [1:0] io_in_0,
  input  [1:0] io_in_1,
  input  [1:0] io_in_2,
  input  [1:0] io_in_3,
  output [1:0] io_out,
  input  [1:0] io_s
);
  wire [1:0] _GEN_1 = 2'h1 == io_s ? io_in_1 : io_in_0; // @[mux41.scala 13:10]
  wire [1:0] _GEN_2 = 2'h2 == io_s ? io_in_2 : _GEN_1; // @[mux41.scala 13:10]
  assign io_out = 2'h3 == io_s ? io_in_3 : _GEN_2; // @[mux41.scala 13:10]
endmodule
```

### nvboard 中关于字节序的处理

​	以上述实验为:chestnut:, verilator中的输出的字节序应该是 output 是 $\overline{LD0\space LD1}$，input 为 $ \overline{SW1 \space S0W}$, 那么由于在对应的pin中，output中将先 (LD0,LD1) 赋值给(pins[0], pins[1])，在有数据output时，我们可以将 直接将pins[0] = new_LD0_Value, pins[1] = new_LD1_Value,由于nvboard中pins[0]已经对应LD0，pins[1] 对应LD1可以正确输出。input中为 (SW1,SW0) 赋值给(pins[0],pins[1]), 所以nvboard中输入一个新值要转发给verilator类时，SW1的值赋给pins[0]，SW0赋值对应pins[1], 而实际上nvboard上接口SW1也接在pins[0]上，SW0接在pins[1]上。但是我们使用nvboard并不用考虑字节序，因为nvboard已经为我们考虑好了。

```markdown
有例子， output[3:0] c ，加入verilator的内部已经计算出c = {1，0，1，1}从verilator输出我们可以看到一个整型为 11 ，它的二进制为1011。
在top.ndxc中我们有 c (LD3,LD2,LD1,LD0), 我们将pins[0] = LD0(这里用的都是nvboard中设置号的编号)，pins[1] = LD1, pins[2] = LD2, pins[3] = LD3，那么就就可以1011的第0位直接赋值给pins[0]，1011的第1位赋值给pins[1]......,于是nvboard中就有LD3对应c[3],L2对应c[2]......
```



## 译码器和编码器

​	译码器是组合逻辑电路的一个重要器件，译码器是某一信息转化为某一特定输出的逻辑电路，常用于二进制译码器，将n路输入转化为$2^n$ 路中某个信号，同时译码器有一个使能信号，只有En = 1时，才能输出有效信息。

### 2-4译码器

​	输入的信号为 x0 和 x1，输出是在 y0、y1、y2 和 y3四位中选择一位使其有效。

<img src="C:\Users\Porterlu\Desktop\picture\2-4译码.png" style="zoom:67%;" />

```verilog
module decode24(x,en,y);
  input  [1:0] x;
  input  en;
  output reg [3:0]y;

  always @(x or en)
    if (en)
    begin
      case (x)
            2'd0 : y = 4'b0001;
            2'd1 : y = 4'b0010;
            2'd2 : y = 4'b0100;
            2'd3 : y = 4'b1000;
      endcase
    end
    else  y = 4'b0000;
endmodule
```

### 3-8 译码器

```verilog
module decode38(x, en, y);
    input [2:0] x;
    input en;
    output reg [7:0]y;
    integer i;
    
    //遍历8种情况，对应情况输出1
    always @(x or en)
        if(en) begin
            for( i = 0; i <= 7; i = i+1)
                if(x == i)
                    y[i] = 1;
            	else
                    y[i] = 0;
        end
        else
            y = 8'b00000000;
endmodule
                        
                   
```

### 4-2编码器

​	4-2编码器即为4位输入2位输出的编码器，它的输入信号时x0、x1、x2和x3，输出是y0和y1，本例种采用了独热码，每次输入种只有一一位1，对于有两位及以上1的情况，则将输出设置为高阻态。

​	<img src="C:\Users\Porterlu\Desktop\picture\4-2编码.png" style="zoom:50%;" />

```verilog
module encode42(x, en, y);
    input [3:0] x;
    input en;
    output reg [1:0]y;
    
    //穷尽4种可能
    always @(x or en) begin
        if (en) begin
            case (x)
                4'b0001 : y = 2'b00;
                4'b0010 : y = 2'b01;
                4'b0100 : y = 2'b10;
                4'b1000 : y = 2'b11;
                default: y = 2'b00;
            endcase
        end
        else y = 2'b00;
    end
endmodule
```

### 优先编码器

​	优先编码器运行同时在几个输入端都有输入信号，即输入不止有一个1，编码可以根据自己的优先级规则，选出最高优先级的信号进行编码输出。

```verilog
module encode42(x, en, y);
    input [3:0] x;
    input en;
    output reg [1:0] y;
    integer i;
    
    //高位优先
    always @(x or en) begin
        if(en) begin
            y = 0;
            for(i = 0; i <= 3; i = i+1 )
                if(x[i] == 1) y = i[1:0];
        end
        else y = 0;
    end
endmodule
```

### 七段数码管

​	数码管分为共阴极和共阳极两种类型，共阴极就是将七个LED的阴极连在一起，让其低电平，只需在三极管的正向输入一个高电压就能导通。反之会为共阳极，只需要一个低电压。

<img src="C:\Users\Porterlu\Desktop\picture\数码管.png" style="zoom:33%;" />

### 模块化设计

​	在数字系统的设计的过程中，我们经常需要将一个大的系统切分成许多小的子模块。这可以将复杂的系统分层简化，对每个小模块进行单独的设计，编码和调试。另一方面也可以将许多小模块作为可以重复使用的单元，在不同的项目中重复使用。

​	七段数码管编码的模块接口

```verilog
module bcd7seg(
    input [3:0] b,
    output reg [6:0] h
)
//在这一个模块中，我们将二进制表示的数字转化为七段数码管的显示信息
endmodule
```

### 实验内容：实现一个8-3优先编码器并在七段数码管显示

​	首先实现一个8-3译码器，对于一个8位信息，先根据高位优先编译成一个3位二进制数。同时设置一个使能位，8个输入全0，使能位为0，有任意一个位1，则使能位为1。最后将这个3位二进制数转化为10进制输出在数码管上。

```scala
package bcd7

import chisel3._
import chisel3.util._

class bcd7 extends Module{
	val io = IO( new Bundle{
          val in = Input(UInt(3.W))
          val out = Output(UInt(7.W))
        })

        io.out := 0.U			//附上一个默认的值
        switch(io.in){
          is(0.U)
          {  io.out := 64.U}
          is(1.U)
          {  io.out := 121.U}
          is(2.U)
          { io.out := 36.U}
          is(3.U) 
          {  io.out := 48.U}
          is(4.U)
          {  io.out := 25.U}
          is(5.U)
          {  io.out := 18.U}
          is(6.U)
          {  io.out := 2.U}
          is(7.U)
          {  io.out := 120.U}
        }
}
```

```scala
package exp2

import bcd7._
import chisel3._
import chisel3.util._


class exp2 extends Module{
    val io = IO(new Bundle{
        val in = Input(Vec(8,Bool()))
        val enable = Input(Bool())
        val out_led = Output(UInt(4.W))
        val out_bcd7 = Output(UInt(7.W))
    })

    val max = Wire(UInt(3.W))
    max := 0.U							//附上一个默认的值
    when(io.enable)
    {
        for(i <- 0 to 7)
        {
            when(io.in(i))   
            {
                max := i.U
            }
        }
    }.otherwise{
        max := 0.U
    }
    
    io.out_led := Cat(io.enable,max)	//这里enable在高位对应LD3
    val bcd7_ins = Module(new bcd7())
    bcd7_ins.io.in := max;
    io.out_bcd7 := bcd7_ins.io.out
}

object tester extends App{
    Driver.execute(args, ()=> new exp2)
}
```

```markdown
top=exp2

io_in_0 SW0
io_in_1 SW1
io_in_2 SW2
io_in_3 SW3
io_in_4 SW4
io_in_5 SW5
io_in_6 SW6
io_in_7 SW7
io_enable SW8
io_out_led (LD3,LD2,LD1,LD0)
io_out_bcd7 (SEG0G,SEG0F,SEG0E,SEG0D,SEG0C,SEG0B,SEG0A)
```

<img src="C:\Users\Porterlu\Desktop\picture\exp2.png" style="zoom:67%;" />

## 加法器与ALU

​	加法是数字系统中最常执行的操作，加法器是ALU的核心部件，多位加法器可以由一位加法器级联而成，下图就是一位全加器的真值表，$c_i$ 是进位，同时$c_{i+1}$是下一个进位。

<img src="C:\Users\Porterlu\Desktop\picture\adder_truth_table.png" style="zoom:33%;" />

​	在实现多位的加法是，如果使用串行加法器的设计，如果扩展到多位加法的情况，那么运行的效率将变得很低，我们分析一下串行加法器（或者说波形进位加法器），对一个电路的性能进行分析，我们就要找出最长路径，下图中表明的路径就是加法器延迟最长的路径，也被称为关键路径。

​	![](C:\Users\Porterlu\Desktop\picture\波形进位加法器.png)

​	所以最后加法器的实验为$(2n + 1) \times T$  ,对于32位波形加法器，n就等于32，一共是65个们延迟，如果是28nm的工艺制程的一部智能手机为例，门延迟大概0.02ns，而CPU主频是1.3GHz，每个时钟是0.66ns，65门延迟就是1.3ns，不能在一个时钟内完成，意味着这个CPU的主频最多是769MHz。

​	为了优化这个加法，我们提前计算进位信息
$$
其中 G_i = A_i \& B_i \space\space,\space\space  P_i = A_i | B_i
$$

$$
\begin{equation}
\begin{aligned}
C_1 &= G_0 + P_0\cdot C_0 \\
C_2 &= G_1 + P_1 \cdot C_1 \\
	&= G_1 + P_1 \cdot (G_0 + P_0 \cdot C_0) \\
	&= G_1 + P_1 \cdot G_0 + P_1 \cdot P_0 \cdot C_0
\end{aligned}
\end{equation}
$$

于是我们就可以提前计算所有的进位输出信息,这里计算$C_i$ 只用3级的门延迟，超前加法器的门延迟和加法的位宽是没有关系的。但是如果是32位的超前加法器，电路设计将过于复杂，我们可以使用4个8位超前加法器进行串行相联，根据上面的计算方法只需0.26ns。

### 8位加法器的实现

​	而在编程语言层面我们可以先不关心这些问题。

```verilog
input [n-1:0] in_x, in_y;
output[n-1:0] out_s

out_s = in_x + in_y
```

我们还需要判断是否发生了溢出。对于有符号数由下面的式子
$$
Overflow = (in_{x_{n-1}} == in_{y_{n-1}}) \&\& out_{s_{n-1}} != in_{x_{n-1}}
$$
而对于进位信息可以通过下面的表达式得到，这个适用于加法

```verilog
{out_c,out_s} = in_x + in_y
```

### 简单加减法运算器的设计

​	实际的运算器中，如果参加运算的操作数都是补码的话，那么加法器可以同时实现加减法，再根据加减法的不同跟新of和cf

```scala
class Adder extends Module{
    val io = IO( new Bundle{
        val a = Input(SInt(4.W))
        val b = Input(SInt(4.W))
        val op = Input(UInt(3.W))
        val out = Output(SInt(4.W))
        val of = Output(Bool())
        val cf = Output(Bool())
    })

    //总共八种opcode
    val add::sub::not::and::or::xor::bl::eq::Nil = Enum(8)
    
    //赋上初始值
    val result = WireDefault(0.S(4.W))
    io.cf := false.B
    io.of := false.B

    //只有add和sub更新of和cf
    switch(io.op)
    {
        is(add)
        {
            result := io.a + io.b
            io.cf := Mux(io.a.asUInt +& io.b.asUInt > 15.U ,true.B, false.B)
            io.of := (io.a(3) === io.b(3)) & (result(3) =/= io.a(3))
        }
        is(sub)
        {
            result := io.a + (~io.b + 1.S)
            io.cf := Mux(io.a.asUInt +& io.b.asUInt > 15.U, true.B, false.B)
            io.of := (io.a(3) =/= io.b(3)) & (result(3) =/= io.a(3))
        }
        is(not)
        {
            result := ~io.a;
        } 
        is(and)
        {
            result := io.a & io.b
        }
        is(or)
        {
            result := io.a | io.b
        }
        is(xor)
        {
            result := io.a ^ io.b
        }
        is(bl)
        {
            result := (io.a < io.b).asSInt
        }
        is(eq)
        {
            result := (io.a === io.b).asSInt
        }
    } 

    io.out := result

}
```

```markdown
top=Adder

io_a (SW3,SW2,SW1,SW0)
io_b (SW7,SW6,SW5,SW4)
io_op (SW11,SW10,SW9,SW8)
io_out (LD3,LD2,LD1,LD0)
```

<img src="C:\Users\Porterlu\Desktop\picture\alu.png"  />

最后实验结果如果所示，图上表达的式子为，`4 - 1 = 3` 。

## 计数器和时钟

![加法计数器](C:\Users\Porterlu\Desktop\picture\加法计数器.png)

​	每个触发器都是上升沿触发，如果初始`Q2 Q1 Q0` 中存储的是000，那么当第一个到来时，Q0会发生跳变变为1，这时第二个触发器中的时钟clk接受到一个下降沿所以不改变，第三个触发器的clk一直接受的是一个电平也不改变。第一个时钟将第一个触发器中由1变为0，第二触发器才会改变数据，依次递推。由此我们得到了一个异步3位二进制计数器。

```verilog
module vminus3(clk, en, out_q);
    input clk;
    input en;
    output reg[2:0] out_q;
    
    always @(posedge clk)
        if(en) out_q <= out_q -1;
    	else out_q <= 0;
endmodule
```

### 定时器

如果在定时器的时钟输入端输入一个固定周期的时钟，那么计数器就变成了定时器。
$$
	计时的时间 = 脉冲个数 \times 脉冲周期
$$
如果开发板上提供的时钟信号位50MHz， 我们可以设计任何我们需要的时钟信号，下面是一个产生1秒时钟信号的例子。

```verilog
always @(posedge clk)
    if(count_clk == 24999999)
    begin
        count_clk <= 0;
        clk_1s <= ~clk_1s;
    end
	else
        count_clk <= count + 1
```

## 寄存器组和存储器

### 寄存器和寄存器组

​	FPGA上由大量的触发器资源来实现数据存储。D触发器可以用于存储比特信号，给D触发器加上置数功能就变成了一位寄存器。如下图中所示，如果load信号为1，则输入信号in被送入或门中，D中输入in中的数据；当load 为0 ，上面的与门导通，经过或门，最终触发器保持原来的值。

![](C:\Users\Porterlu\Desktop\picture\reg01.png)

```verilog
module register1(load, clk, clr, inp, q);
    input load, clr, clk, inp;
    output reg q;
    
    always @(posedge clk)
        if(clr == 1)
            q <= 0;
    	else if(load == 1)
            q <= inp;
endmodule
```

```verilog
//四位寄存器
module register4(load, clk, clr, d, q);
    input load, clr, clk;
    input [3:0] d;
    output reg[3:0] q;
    
    always @(posedge clk)
        if(clr == 1)
            q <= 0;
    else if(load == 1)
        	q <= d;
endmodule
```

### 存储器

​	存储器是一组存储单元，用于在计算机中存储二进制数据，存储器的端口包括：输入端、输出端和控制端口。输入端口包括：读/写地址端口、数据输入端口；输出端口一般指的是数据输出端口；控制端口包括时钟端和读写控制端口。

​	写数据：在时钟有效沿，如果写使能有效，则读取输入总线上的数据，将其存储到输入地址线所指的存储单元中。

​	读数据：存储器的输出可以受时钟和使能端的控制，也可以不受时钟和使能端的控制。如果输出受时钟的控制，则时钟的有效沿，将输出地址所指示的单元中的数据输出到总线上；如果不受时钟的控制，则只要输出地址有效，就立即将此地址所指示的单元中的数据送到输出总线上。

| 存储器模式                   | 说明                                 |
| ---------------------------- | ------------------------------------ |
| 单口存储器                   | 某一时刻，只读或者只写               |
| 简单双口存储器模式           | 简单双口模式支持同时读写             |
| 混合宽度的简单双口存储器模式 | 读写使用不同宽度的简单双口模式       |
| 真双口存储器模式             | 支持任何组合的双口模式               |
| 混合宽度的真双口存储器模式   | 读写使用不同数据宽度的真双口模式     |
| ROM                          | 工作于ROM模式，ROM中的内容已经初始化 |
| FIFO缓冲器                   | 可以实现单时钟或者双时钟的FIFO       |

在verilog中可以使用二位数组定义存储器。例如，假设需要一个32字节的8位存储器块，即存储器共有32个存储单元，每个存储单元可以存储一个8位的二进制数。这样的存储器可以定义为$32 \times 8$的数组，声明如下：

```verilog
reg [7:0] memory [31:0]
```

​	在verilog中虽然寄存器组和存储器的描述都是二维数组的方式。但是，编译和综合过程中会根据代码访问的要求来选择具体的实现方式。例如，当代码中没有严格要求在时钟信号沿上进行读写时，系统会认为该存储单元的读写要求较高，直接采用FPGA逻辑单元实现，这种实现方式消耗的资源巨大，一般只支持K数量级的存储单元。如果要求大量的此类存储功能，系统可能会花很长时间进行编译综合，甚至无法实现。如果一个存储单元的访问严格按照时序要求，仅在时钟的沿上进行对每个单元的读写时，系统可以用大容量的M10K实现存储，一般可以支持书包K字节的容量。

```verilog
module ram #(
  parameter RAM_WIDTH = 32,
  parameter RAM_ADDR_WIDTH = 10
)(
    input clk,
    input we,
    input [RAM_WIDTH-1:0] din,
    input [RAM_ADDR_WIDTH-1:0] inaddr,
    input [RAM_ADDR_WIDTH-1:0] outaddr,
    output [RAM_WIDTH-1:0] dout
);

  reg [RAM_WIDTH-1:0] ram [(2**RAM_ADDR_WIDTH)-1:0];

  always @(posedge clk)
      if (we)
        ram[inaddr] <= din;

  assign dout = ram[outaddr];

endmodule

always @(posedge clk)
  if (we)
    ram[inaddr] <= din;
  else
      dout <= ram[outaddr];	//修改后，存储器的读写将严格符合时序的要求
```

一个存储器的实现如下

```verilog
module v_rams_8(clk, we, inaddr, outaddr, din, dout0, dout1, dout2);
    input clk;
    input we;
    input [2:0] inaddr;
    input [2:0] outaddr;
    input [7:0] din;
    output reg[7:0] dout0,dout1,dout1;
    
    reg [7:0] ram [7:0];
    
    initial 
        begin
            ram[7] = 8'hf0; ram[6] = 8'h23; ram[5] = 8'h20; ram[4] = 8'h50;
            ram[3] = 8'h03; ram[2] = 8'h32; ram[1] = 8'h82; ram[0] = 8'h0d;
        end
    
    always @(posedge clk)
        begin
            if(we)
                ram[inaddr] <= din;
            else
                dout0 <= ram[outaddr];
        end
    always @(negedge clk)
        begin 
            if(!we)
                dout1 <= ram[outaddr];
        end
    assign dout2 = ram[outaddr];
endmodule       
```

## 移位寄存器及桶形移位器

​	移位寄存器在时钟的触发沿，根据其控制信号，将存储其中的数据项某个方向移动一个方向。移位寄存器也是数字系统的常用器件。这是一个简单向右移位寄存器，数据从左端输入

![](C:\Users\Porterlu\Desktop\picture\shift01.png)

### 算数移位和逻辑移位寄存器

​	算数移位是指考虑到符号位的移位，算数移位要保证符号位不改变，算数左移同逻辑左移一样，算数右移最左边的空位补符号位。逻辑移位不管是向左移位还是向右移位都是空缺处补0。循环移位是指移出去的一位补充到空出的最高或者最低位中的移位方式。

```verilog
Q <= {Q[0],Q[7:1]} //循环右移
Q <= {Q[7],Q[7:1]} //算数右移
```

### 桶形移位器

​	在CPU中，我们往往需要对数据进行移位操作。但是传统的移位寄存器一个周期只能移动一位，当要进行多位移动时需要多个时钟周期，效率低。桶形移位器常常被用在ALU中来实现移位。8位桶形移位器，通过分三级，分别判断是否移动1位、移动2位、移动4位，通过三次的移位实现最多移动7位。

![](C:\Users\Porterlu\Desktop\picture\barrelshifter.png)

### 实验内容：利用移位寄存器实现随机数发生器

​	我们可以利用8位移位寄存器实现一个简单随机数发生器。经典的LFSR（线性反馈移位寄存器）可以使用n位移位寄存器生成长度为$2^n - 1$的二进制循环队列。具体实现时，可以用一个8位右移移位寄存器，从左到右的比特以$x_7 x_6 x_5 x_4 x_3 x_2  x_1 x_0$表示，每个时钟右移一位，最高位由 $x_8 = x_4 \oplus x_3 \oplus x_2 \oplus x_0$计算得出，该序列的周期为255。

```scala
package exp6

import chisel3._
import chisel3.util._
import bcd7._

//用于生成序列，reset连接到fpga板上的一个按键，当按键按下，input中的值用于重置lfsr
//enable键则用于生成下一个随机数
class lfsr extends Module{
    val io = IO(new Bundle {
        val enable = Input(Bool())
        val reset = Input(Bool())
        val in = Input(UInt(8.W))
        val out = Output(UInt(8.W))     
    })

    val regLfsr = RegInit(127.U(8.W))
    val stateEnable = RegInit(0.U(3.W))
    val stateRet = RegInit(0.U(3.W))

    stateEnable := Cat(stateEnable(1,0),io.enable)
    stateRet := Cat(stateRet(1,0),io.reset)    

    when(stateRet(2) & (~(stateEnable(1))))
    {
        regLfsr := io.in
    }

    when(stateEnable(2) & (~stateEnable(1)))
    {
        regLfsr := Cat(regLfsr(4,2).xorR ^ regLfsr(0), regLfsr(7,1))
    }

    io.out :=  regLfsr
}

//将生成的随机数交给数码管进行显示
class exp6 extends Module{
    val io = IO(new Bundle{
        val enable = Input(Bool())
        val reset = Input(Bool())
        val in = Input(UInt(8.W))
        val out = Output(UInt(14.W))     
    })

    val lfsr = Module(new lfsr())
    val bcd7_1 = Module(new bcd7())
    val bcd7_2 = Module(new bcd7())

    lfsr.io.enable := io. enable
    lfsr.io.reset := io.reset
    lfsr.io.in := io.in

    bcd7_1.io.in := lfsr.io.out(3,0)
    bcd7_2.io.in := lfsr.io.out(7,4)

    io.out := Cat(bcd7_2.io.out,bcd7_1.io.out)
}

object tester extends App{
    chisel3.Driver.execute(args, () => new exp6)
}
```

​	下面图1是用reset加载初始值`01`，相当于设定了随机种子，图2是生成的其中一个随机数。

![](C:\Users\Porterlu\Desktop\picture\shiftReg_reset.png)

![](C:\Users\Porterlu\Desktop\picture\shiftReg_enable.png)

## 状态机及键盘输入

​	有限状态机（Finite State Machine), 简称状态机，是一个在有限个状态键进行转换和动作的模型。有限状态机是数字电路系统中十分重要的电路模块，是一种输出取决过去输入和当前输入的时序逻辑电路，它是组合逻辑电路和时序逻辑电路的组合。其中组合逻辑分为两个部分，一个是用于产生有限状态机下一个状态的次态逻辑，另一个是用于产生输出信号的输出逻辑。次态逻辑的功能是确定有限状态机的下一个状态，输出逻辑的功能是确定有限状态机的输出。除了输入和输出状态机还有一组寄存器用于记录有限状态机内部状态。

### 状态机

#### 有限状态机

​	在实际应用中，有限状态机分为两种：Moore型和Mealy型。Moore型状态机的输出信号只与状态机当前的状态有关，输入信号的值只有影响状态机的次态，不会影响状态机的输出。而Mealy状态机则不同，Mealy状态机的输出不仅仅与状态机的当前状态有关，而且与输入信号的当前有关。

#### 简单状态机实例

​	该有限状态机有一个输入w和一个输出z。当前w四个连续的0或者四个连续的1时，输出z = 1，否则输出z = 0，时序允许重叠，即若w是连续的5个1时，则在第4个和第5个时钟后，z均为1。

![](C:\Users\Porterlu\Desktop\picture\state_machine_01.png)

​	

<img src="C:\Users\Porterlu\Desktop\picture\state_transfer.png" style="zoom:33%;" />

​	状态机的转移如上图所示，初始为A即一个idle，一旦离开这个状态就不会返回，在连续接受1或者0的过程一旦打断都会返回只接受了一个的状态。在为每个状态进行了编码后，就可以编写verilog代码。

```verilog
module FSM_bin
{
	input clk, in, reset,
    output reg out
};
    //下面用常量定义了一系列的状态
    parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3,
    			   S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;
    wire [3:0] state_din, state_dout;
    wire state_wen;
    
    SimReg#(4,0) state(clk, reset, state_din, state_dout, state_wen);
    
    assign state_wen = 1;
    
    //选择器用于选择一个输出
    MuxKeyWithDefault#(9, 4, 1) outMux(.out(out), .key(state_dout), .default_out(0),.lut({
        S0, 1'b0,
        S1, 1'b0,
        S2, 1'b0,
        S3, 1'b0,
        S4, 1'b1,
        S5, 1'b0,
        S6, 1'b0,
        S7, 1'b0,
        S8, 1'b1
    }));
    
    //用于给出状态转移表
    MuxKeyWithDefault#(9, 4, 4) stateMux(.out(state_din), .key(state_dout), .default_out(S0),.lut({
        S0, in? S5 : S1,
        S1, in? S5 : S2,
        S2, in? S5 : S3,
        S3, in? S5 : S4,
        S4, in? S5 : S4,
        S5, in? S6 : S1,
        S6, in? S7 : S1,
        s7, in? S8 : S1,
        s8, in? S8 : S1
    }));
```

#### 状态机的编码方式

​	上一节例子中的状态机的状态寄存器使用了顺序二进制编码，即将状态机的状态依次编码为顺序的二进制数，采用顺序二进制数编码可使状态向量的位数最少。但是输出时要对状态变量进行解码才能输出。同时如果受到干扰可能出现死机。

​	One-hot编码也是状态机设计中常用的编码，在one-hot编码中，对于任何给定的状态，其状态向量中只有1位是1，其他位的状态全是0，n个状态就需要n位的状态向量。但是one-hot编码对于状态的判断非常简单，如果某位是1就是某状态。

### PS/2接口控制器及键盘输入

​	PS/2是个人计算机串行I/O接口的一种标准，因其首次在IBM PS/2机器上使用而得名，PS/2接口可以直接连接PS/2键盘和PS/2鼠标。所谓串行接口是指信息是在单根信号线上按序一位一位发送。

#### PS/2接口的工作时序

​	PS/2接口中使用两根信号线，一根信号线传输时钟PS2_CLK, 另一根传输数据PS2_DATA。时钟信号主要用于指示数据线上的比特位什么时候是有效的。键盘和主机之间可以进行数据的双向传输，这里只讨论键盘向主机传送数据的情况。当PS2_DAT和PS2_CLK信号线都是高电平（空闲）时，键盘才可以向主机发送信息。如果主机将PS2_CLK置低，键盘将准备接受主机发送来的命令，实验中主机不用发送命令，只需将两个信号线作为输入即可。

​	当用户按键松开时，键盘以每帧11位的格式串行传送数据给主机，同时在PS2_CLK时钟信号上传输对应的时钟。第一位是开始位（逻辑0），后面跟8位的数据位，一个奇偶检验位和一个停止位。每个位都在时钟的下降沿有效。

​	键盘通过PS2_DAT引脚发送的信息称为扫描码，每个扫描码可以由单个数据帧或连续多个数据帧构成。当按键被按下时送出的扫描码被称为通码，当按键被释放时送出的扫描码称为断码。以 w 键为例，w键的通码是1Dh，如果w被按下，则PS2_DAT引脚输出一帧的数据，其中的8位数据位1Dh，如果w被按下没有被释放，则不断地输出1Dh，1Dh，1Dh，直到按键被松开或者有其他键按下。

​	多键被按下时，将逐个输出扫描码，如先按左shift键，再按下w键，放开左f，放开左w键，则此过程的全部扫描码为12h，1dh，f0h，1dh，f0h，12h

#### 键盘扫描码

​	每个按键都有唯一的通码和断码，键盘所有键的扫描码组成的集合称为扫描码集合。共有3套标准的扫描码集合，所有现代的键盘默认使用第二套扫描码。

#### PS/2键盘控制器的设计

```verilog
//clk是时钟，clrn是异步复位，ps2_clk是ps2时钟，ps2_data是ps2传送的数据，data是传送的数据
module ps2_keyboard(clk, clrn, ps2_clk, ps2_data,data,
                    ready, nextdata_n, overflow);
    input clk, clrn, ps2_clk, ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;
    
    reg [9:0] buffer;
    reg [7:0] fifo[7:0];
    reg [2:0] w_ptr, r_ptr;	
    reg [3:0] count;			//count用于计算buffer中存储的bit数
    reg [2:0] ps2_clk_sync;
    
    //保存时钟到来的记录
    always @(posedge clk) begin
        ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
    end
    
    //是否检测到下降沿
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];
    
    always @(posedge clk) begin
        if(clrn == 0) begin
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<=0;
        end
        else begin
            if(ready)  begin				//fifo ready to output data
                if(nextdata_n == 1'b0)		//read next data
                    begin					
                        r_ptr <= r_ptr + 3'b1;
                        if(w_ptr == (r_ptr + 1'b1))
                            ready <= 1'b0;
                    end
            end
            if(sampling) begin
                if(count == 4'd10) begin	//现在buffer中已经有10个数
                    if((buffer[0] == 0)&&	//验证开始符
                       (ps2_data)&&			//验证停止符
                       (^buffer[9:1])) begin	//进行奇偶校验
                        fifo[w_ptr] <= buffer[8:1];	//scan code
                        w_ptr <= w_ptr + 3'b1;	//读指针向后移
                        ready <= 1'b1;		//fifo的ready位置1
                        overflow <= overflow | (r_ptr == (w_ptr + 3'b1));									  // 如果写指针到了读指针的位置
                    end
                    count <= 0;
                end
                else begin
                    buffer[count] <= ps2_data;
                    count <= count + 3'b1;
                end
            end
        end
    end
    assign data = fifo[r_ptr];
endmodule
```

```verilog
//键盘测试
module ps2_keyboard_model(
	output reg ps2_clk,
    output reg ps2_data
);
    parameter [31:0] kbd_clk_period = 60;
    initial ps2_clk = 1'b1;
    
    task kbd_sendcode;
        input[7:0] code;
        integer i;
        reg[10:0] send_buffer;
        begin
            send_buffer[0] = 1'b0;
            send_buffer[8:1] = code;
            send_buffer[9] = ~(^code);
            send_buffer[10] = 1'b1;
            i = 0;
            while(i < 11) begin
                ps2_data = send_buffer[i];
                #(kbd_clk_period/2) ps2_clk = 1'b0;	//延迟30ns
                #(kbd_clk_period/2) ps2_clk = 1'b1;	//延迟30ns
                i = i + 1;
            end
        end
    endtask
endmodule
```

```verilog
module keyboard_sim;
    parameter[31:0] clock_period = 10;
    reg clk,clrn;
    wire[7:0] data;
    wire ready,overflow;
    wire kbd_clk, kbd_data;
    reg nextdata_n;
    
    ps2_keyboard_model model(
        .ps2_clk(kbd_clk),
        .ps2_data(kbd_data)
    );
    
    ps2_keyboard inst(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(kbd_clk),
        .ps2_data(kbd_data),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .overflow(overflow)
    );
    
    initial begin
        clk = 0;
        forever
            #(clock_period/2) clk = ~clk;
    end
    
initial begin /* clock driver */
    clk = 0;
    forever
        #(clock_period/2) clk = ~clk;
end

	initial begin
        clrn = 1'b0;  #20;
        clrn = 1'b1;  #20;
        model.kbd_sendcode(8'h1C); // press 'A'
        #20 nextdata_n =1'b0; #20 nextdata_n =1'b1;//read data
        model.kbd_sendcode(8'hF0); // break code
        #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
        model.kbd_sendcode(8'h1C); // release 'A'
        #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
        model.kbd_sendcode(8'h1B); // press 'S'
        #20 model.kbd_sendcode(8'h1B); // keep pressing 'S'
        #20 model.kbd_sendcode(8'h1B); // keep pressing 'S'
        model.kbd_sendcode(8'hF0); // break code
        model.kbd_sendcode(8'h1B); // release 'S'
        #20;
        $stop;
	end

endmodule
```

​	我们来分析一下键盘取出扫描码的过程，`clrn` 是重置信号，可以先不用管。这里分为两个部分的行为，一个键盘的行为，一个是PC端键盘控制器的行为。PC端键盘控制器，一开始在重置信号的控制下进行初始化，我们知道了PC端的时钟是60ns一个周期。当键盘发送数据时，有两个部分的信息，PS2接口也有时钟信息，还有数据的信息。键盘每发送一个bit，都会在PS2_CLK伴随一个上升沿，直至发送完一个开始符、scan code、奇偶检验码、结束符，结束一个帧的发送，置nextdata_n 为0。下一个上升沿，检测PS2_CLK中的下降沿，将每一个数据bit传入buffer，满一个帧将数据传入fifo队列，PC端键盘控制器检测到ready和nextdata_n后，就可以读入数据。

![](C:\Users\Porterlu\Desktop\picture\keyboard.png)

```scala
class keyboard extends Module{
    val io = IO(new Bundle{
        val next_data_n = Input(Bool())
        val ps2_clk = Input(Bool())
        val ps2_dat = Input(UInt(1.W))
        val out = Output(UInt(8.W))
        val ready = Output(Bool())
    })

    val buffer = RegInit(0.U(10.W))
    val ready = RegInit(false.B)
    val count = RegInit(0.U(8.W))
    val ps2_clk_sync = RegInit(0.U(3.W))
    val next_data_n = RegInit(false.B)
    val fifo = Reg(Vec(8,UInt(8.W)))
    val w_ptr = RegInit(0.U(3.W))
    val r_ptr = RegInit(0.U(3.W))

    next_data_n := io.next_data_n
    io.out := fifo(r_ptr)
    io.ready := ready

    ps2_clk_sync := Cat(ps2_clk_sync(1,0),io.ps2_clk)

    when(ready)
    {
        when(w_ptr === r_ptr + 1.U)
        {
                ready := false.B
        }
    }

    when(next_data_n)
    {

            r_ptr := r_ptr + 1.U
    }
    
    when(ps2_clk_sync(2) && ~ps2_clk_sync(1))
    {
        when(count === 10.U)
        {
            when(io.ps2_dat.asBool && ~buffer(0) && buffer(9,1).xorR)
            {
                fifo(w_ptr) := buffer(8,1)
                w_ptr := w_ptr + 1.U
                ready := true.B
            }
            count := 0.U
            buffer := 0.U
        }.otherwise
        {
            buffer := buffer | io.ps2_dat << count
            count := count + 1.U
        }
    }
}

class exp7 extends Module{
    val io = IO(new Bundle{
        val ps2_clk = Input(Bool())
        val ps2_dat = Input(UInt(1.W))
        val out_scan = Output(UInt(14.W))
        //val out_ascii = Output(UInt(14.W))
        //val out_count = Output(UInt(14.W))
    })

    val keyboard = Module(new keyboard)
    val counter = RegInit(0.U(8.W))
    val out_scan = RegInit(16383.U(14.W))

    val bcd_1 = Module(new bcd7)
    val bcd_2 = Module(new bcd7)
    
    keyboard.io.ps2_clk := io.ps2_clk
    keyboard.io.ps2_dat := io.ps2_dat

    bcd_1.io.in := 0.U
    bcd_2.io.in := 0.U
    keyboard.io.next_data_n := false.B
    io.out_scan := out_scan
    
    //val show = RegInit(true.B)
    //val timer = Module(new timer)
    when(keyboard.io.ready)
    {
        bcd_1.io.in := keyboard.io.out(3,0)
        bcd_2.io.in := keyboard.io.out(7,4)
        keyboard.io.next_data_n := true.B
        printf("scan code %x\n",keyboard.io.out)
        out_scan := Cat(bcd_2.io.out,bcd_1.io.out)
    }

}
```

![](C:\Users\Porterlu\Desktop\picture\keyboard_digit.png)

## VGA控制接口和实现

​	VGA接口的接口信号主要有五个：R（Red）、G（Green）、B（Blue）、HS（Horizontal Synchronization）和 VS （Vertical Synchronization）。

### VGA工作原理

​	图像的显示是以像素为单位的，显示器的分辨率是指屏幕每行有多少个像素及每帧有多少行（每一列有多少行），标准的VGA分辨率是640 $\times$ 480 ,同时VGA显示器的刷新率一般在60HZ。每一帧图像的显示都是从屏幕的左上角开始一行一行进行的，行同步信号是一个负脉冲，行同步信号有效后，由RGB端送出当前行显示的各个像素的RGB电压，当一帧显示结束后，由帧同步信号从屏幕的左上端开始显示下一帧的数据。

​	RGB端并不是所有时间都在传送像素信息的，由于CRT的电子束从上一行的行尾到下一行的行头需要时间，从屏幕的右下角回到屏幕的左上角也需要时间，这是RGB传送的电压值为0，这些时间称为电子束的行消隐时间和常消隐时间。

​	标准的640 $\times$ 480的VGA上有效地显示一行信号需要 行同步负脉冲（96个像素时间），行消隐后沿（48个像素时间），每行640个像素时间，行消隐前沿（16个像素时间），所以一个800个像素时间。显示一帧的图像，需要场同步负脉冲宽度为2个行显示时间，场消隐后沿（33个行显示时间），每个场显示480行，场消隐前沿（10个行显示时间），一帧的显示时间为525个行显示时间。最后一帧的消隐时间为45行显示时间。

​	总共一秒60帧需要的像素时间为 (525 + 45)$\times$800 $\times$ 60 约 27M个像素时间。

```scala
object vga_parameter extends ChiselEnum{
    val v_frontporch = Value(2.U)
    val v_active = Value(35.U)
    val h_frontporch = Value(96.U)
    val h_active = Value(144.U)
    val v_backporch = Value(515.U)
    val v_total = Value(525.U)
    val h_backporch = Value(784.U)
    val h_total = Value(800.U)
}

class vga_ctrl extends Module{
    val io = IO(new Bundle{
        val vga_data = Input(UInt(24.W))
        val h_addr = Output(UInt(10.W))
        val v_addr = Output(UInt(10.W))
        val hsync = Output(Bool())
        val vsync = Output(Bool())
        val valid = Output(Bool())
        val vga_r = Output(UInt(8.W))
        val vga_g = Output(UInt(8.W))
        val vga_b = Output(UInt(8.W))
    })

    val x_cnt = RegInit(0.U(10.W))
    val y_cnt = RegInit(0.U(10.W))
    val h_valid = Wire(Bool())
    val v_valid = Wire(Bool())

    when(x_cnt === vga_parameter.h_total.asUInt)
    {
        x_cnt := 1.U
    }.otherwise
    {
        x_cnt := x_cnt + 1.U
    }

    when(y_cnt === vga_parameter.v_total.asUInt && x_cnt === vga_parameter.h_total.asUInt)
    {
        y_cnt := 1.U
    }.elsewhen(x_cnt === vga_parameter.h_total.asUInt)
    {
        y_cnt := y_cnt + 1.U
    }

    io.hsync := x_cnt > vga_parameter.h_frontporch.asUInt
    io.vsync := y_cnt > vga_parameter.v_frontporch.asUInt
    h_valid := (x_cnt > vga_parameter.h_active.asUInt) && (x_cnt <= vga_parameter.h_backporch.asUInt)
    v_valid := (y_cnt > vga_parameter.v_active.asUInt) && (y_cnt <= vga_parameter.v_backporch.asUInt)
    io.valid := h_valid & v_valid

    io.h_addr := Mux(h_valid, x_cnt - 145.U, 0.U)
    io.v_addr := Mux(v_valid, y_cnt - 36.U, 0.U)

    io.vga_r := io.vga_data(23,16)
    io.vga_g := io.vga_data(15,8)
    io.vga_b := io.vga_data(7,0)
}

class vmem(memoryFile : String ="") extends Module{
    val io = IO(new Bundle{
        val h_addr = Input(UInt(10.W))
        val v_addr = Input(UInt(9.W))
        val vga_data = Output(UInt(24.W))
    })
    
    val mem = SyncReadMem(524288, UInt(24.W))
    if (memoryFile.trim().nonEmpty) {
        loadMemoryFromFileInline(mem, memoryFile)
    }

    val addr = Wire(UInt(19.W))
    addr := Cat(io.h_addr, io.v_addr)
    io.vga_data := mem(addr)
}

class exp8 extends Module{
    val io = IO(new Bundle{
        val hsync = Output(Bool())
        val vsync = Output(Bool())
        val valid = Output(Bool())
        val vga_r = Output(UInt(8.W))
        val vga_g = Output(UInt(8.W))
        val vga_b = Output(UInt(8.W))
    })

    val h_addr = WireInit(0.U(10.W))
    val v_addr = WireInit(0.U(10.W))
    val mem = Module(new vmem("picture.hex"))
    val vga_ctrl = Module(new vga_ctrl)
    
    mem.io.h_addr := vga_ctrl.io.h_addr
    mem.io.v_addr := vga_ctrl.io.v_addr(8,0)
    vga_ctrl.io.vga_data := mem.io.vga_data

    io.hsync := vga_ctrl.io.hsync
    io.vsync := vga_ctrl.io.vsync
    io.valid := vga_ctrl.io.valid
    io.vga_r := vga_ctrl.io.vga_r
    io.vga_g := vga_ctrl.io.vga_g
    io.vga_b := vga_ctrl.io.vga_b    
}
```

![](C:\Users\Porterlu\Desktop\picture\vga_digit.png)

## 字符输入界面

```scala
class map_mem(memoryFile : String = "") extends Module{
    val io = IO(new Bundle{
        val addr = Input(UInt(12.W))
        val out = Output(UInt(12.W))
    })

    val map_mem = SyncReadMem(4096, UInt(12.W))
    if (memoryFile.trim().nonEmpty) {
        loadMemoryFromFileInline(map_mem, memoryFile)
    }

    io.out := map_mem(io.addr)
}


class vmem extends Module{
    val io = IO(new Bundle{
        val h_addr = Input(UInt(7.W))
        val v_addr = Input(UInt(5.W))
        val wr_h_addr = Input(UInt(7.W))
        val wr_v_addr = Input(UInt(5.W))
        val input_dat = Input(UInt(8.W))
        val is_write = Input(Bool())
        val ascii = Output(UInt(8.W))
    })
    
    val mem = SyncReadMem(2200, UInt(8.W))
    val addr = Wire(UInt(12.W))
    val write_addr = Wire(UInt(12.W))
    addr := (io.v_addr * 64.U) + io.h_addr
    write_addr := 0.U
    when(io.is_write)
    {
        write_addr := (io.wr_v_addr * 64.U) + io.wr_h_addr
        mem(write_addr) := io.input_dat
    }
    
    io.ascii := mem(addr)
}

object vga_parameter extends ChiselEnum{
    val v_frontporch = Value(2.U)
    val v_active = Value(35.U)
    val h_frontporch = Value(96.U)
    val h_active = Value(144.U)
    val v_backporch = Value(515.U)
    val v_total = Value(525.U)
    val h_backporch = Value(784.U)
    val h_total = Value(800.U)
}

class vga_ctrl extends Module{
    val io = IO(new Bundle{
        val vga_data = Input(UInt(1.W))
        val h_addr = Output(UInt(10.W))
        val v_addr = Output(UInt(10.W))
        val hsync = Output(Bool())
        val vsync = Output(Bool())
        val valid = Output(Bool())
        val vga_r = Output(UInt(8.W))
        val vga_g = Output(UInt(8.W))
        val vga_b = Output(UInt(8.W))
    })

    val x_cnt = RegInit(0.U(10.W))
    val y_cnt = RegInit(0.U(10.W))
    val h_valid = Wire(Bool())
    val v_valid = Wire(Bool())

    when(x_cnt === (vga_parameter.h_total.asUInt - 1.U)) 
    {
        x_cnt := 0.U
    }.otherwise
    {
        x_cnt := x_cnt + 1.U
    }

    when(y_cnt === (vga_parameter.v_total.asUInt - 1.U) && x_cnt === (vga_parameter.h_total.asUInt - 1.U))
    {
        y_cnt := 0.U
    }.elsewhen(x_cnt === vga_parameter.h_total.asUInt - 1.U)
    {
        y_cnt := y_cnt + 1.U
    }

    io.hsync := x_cnt >= vga_parameter.h_frontporch.asUInt
    io.vsync := y_cnt >= vga_parameter.v_frontporch.asUInt
    h_valid := (x_cnt >= vga_parameter.h_active.asUInt) && (x_cnt < vga_parameter.h_backporch.asUInt)
    v_valid := (y_cnt >= vga_parameter.v_active.asUInt) && (y_cnt < vga_parameter.v_backporch.asUInt)
    io.valid := h_valid & v_valid

    io.h_addr := Mux(h_valid, x_cnt - 145.U, 0.U)
    io.v_addr := Mux(v_valid, y_cnt - 36.U, 0.U)
    
    io.vga_r := 0.U 
    io.vga_g := 0.U
    io.vga_b := 0.U
    when(io.vga_data === 0.U)
    {
        io.vga_r := "b11111111".U
        io.vga_g := "b11111111".U
        io.vga_b := "b11111111".U
    }.otherwise
    {
        io.vga_r := "b00000000".U
        io.vga_g := "b00000000".U
        io.vga_b := "b00000000".U
    }
}


class charInput extends Module{
    val io = IO(new Bundle{
        val ps2_clk = Input(Bool())
        val ps2_dat = Input(UInt(1.W))
        val hsync = Output(Bool())
        val vsync = Output(Bool())
        val valid = Output(Bool())
        val vga_r = Output(UInt(8.W))
        val vga_g = Output(UInt(8.W))
        val vga_b = Output(UInt(8.W))
    })
    //记录写指针的位置
    val char_x = RegInit(0.U(10.W))
    val char_y = RegInit(0.U(10.W))

    //字符位置
    val x_tmp = WireInit(0.U(10.W))
    val y_tmp = WireInit(0.U(10.W))

    //vga扫描地址
    val h_addr = WireInit(0.U(10.W))
    val v_addr = WireInit(0.U(10.W))

    val keyboard = Module(new keyboard)
    val vga_ctrl = Module(new vga_ctrl)
    val vmem = Module(new vmem)
    val rom = Module(new rom)
    val map_mem = Module(new map_mem("ascii.hex"))

    keyboard.io.ps2_clk := io.ps2_clk
    keyboard.io.ps2_dat := io.ps2_dat
    keyboard.io.next_data_n := false.B

    x_tmp := vga_ctrl.io.h_addr / 10.U(10.W)
    y_tmp := vga_ctrl.io.v_addr >> 4.U
    h_addr := vga_ctrl.io.h_addr - (x_tmp * 10.U)  
    v_addr := vga_ctrl.io.v_addr - (y_tmp << 4.U)

    vmem.io.is_write := false.B
    vmem.io.wr_h_addr := char_x
    vmem.io.wr_v_addr := char_y
    vmem.io.input_dat := 0.U
    vmem.io.h_addr := x_tmp
    vmem.io.v_addr := y_tmp

    map_mem.io.addr := (vmem.io.ascii << 4.U) + v_addr
    vga_ctrl.io.vga_data := map_mem.io.out(h_addr)
    
    io.hsync := vga_ctrl.io.hsync
    io.vsync := vga_ctrl.io.vsync
    io.valid := vga_ctrl.io.valid
    io.vga_r := vga_ctrl.io.vga_r
    io.vga_g := vga_ctrl.io.vga_g
    io.vga_b := vga_ctrl.io.vga_b


    rom.io.scan_code := 0.U

    val pre_scancoded = RegInit(0.U(8.W))
    when(keyboard.io.ready)
    {
        rom.io.scan_code := keyboard.io.out
        vmem.io.input_dat := rom.io.ascii
        when(rom.io.ascii =/= 0.U && rom.io.scan_code =/= "hf0".U && pre_scancoded =/= "hf0".U)
        {
            vmem.io.is_write := true.B
            when(char_x === 63.U || rom.io.scan_code === "h5a".U) 
            {
                char_x := 0.U
            }.otherwise
            {
                char_x := char_x + 1.U
            }

            when(char_y === 29.U && (char_x === 70.U||rom.io.scan_code === "h5a".U))
            {
                char_y := 0.U
            }.elsewhen(char_x === 63.U || rom.io.scan_code === "h5a".U)
            {               
                char_y := char_y + 1.U
            }
        }
        pre_scancoded := keyboard.io.out
        keyboard.io.next_data_n := true.B
    }
}
```

![](C:\Users\Porterlu\Desktop\picture\char_digit.png)
