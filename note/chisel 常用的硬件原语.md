# chisel 常用的硬件原语

[toc]

## 多路选择器

​	因为多路选择器是一个很常用的电路模块，所以Chisel内建了几种多路选择器。第一种形式是二输入多路选择器`Mux(sel, in1, in2)` 。sel是`Bool`类型，`in1`和`in2`的类型相同，都是Data的任意子类型。当sel为`true.B` 时，返回in1，否则返回`in2`。

​	因为Mux仅仅时把一个输入返回，所以Mux可以内嵌Mux，构成n输入多路选择器，其形式是`Mux(c1, a, Mux(c2, b, Mux(..., default)))`。 针对这种n输入多路选择器，Chisel有 `MuxCase(default, Array(c1->a, c2->b, ...))`, 它的展开和Mux嵌套是一样的，MuxCase在`chisel3.util`包中。

​	第三种是MuxCase的变体，它相当于把Muxcase的成立条件依次换成从0开始的索引值，就好像一个查找表，其形式为`MuxLookup(idx, default, Array(0.U->a, 1.U->b, ...)`。

​	第四种是`chisel3.util`包里的独热码多路选择器，它的选择信号是一个独热码，如果有多个选择信号有效，则该行为未定义。

```
val hotValue = Mux1H(Seq(
	io.selector(0)->2.U,
	io.selector(1)->4.U,
	io.selector(2)->8.U,
	io.selector(4)->11.U
))
```

## ROM

```scala
package test
import chisel3._

class ROM extends Module{
    val io = IO(new Bundle{
        val sel = Input(UInt(2.W))
        val out = Output(UInt(8.W))
    })
    
    val rom = VecInit(1.U, 2.U, 3.U, 4.U)
    io.out := rom(io.sel)
}
```

```verilog
module ROM(
	input 	clock,
    input 	reset,
    input[1:0] io_sel,
    output[7:0] io_out,
);
    wire[2:0] _GEN_1;
    wire[2:0] _GEN_2;
    wire[2:0] _GEN_3;
    assign _GEN_1 = 2'h1 == io_sel? 3'h2 : 3'h1;
    assign _GEN_2 = 2'h2 == io_sel? 3'h3 : _GEN_1;
    assign _GEN_3 = 2'h3 == io_sel? 3'h4 : _GEN_2;
    assign io_out = {{5'd0}, _GEN_3};
endmodule
```

## RAM

​	Chisel支持两种类型的RAM。第一种RAM是同步时序写，异步组合逻辑读，通过`Mem`方法进行构建。由于现代的FPGA和ASIC技术已经不支持异步读RAM，所以这种RAM会被综合成寄存器阵列。第二种是同步时序读、写，通过方法`SyncReadMem`来构建，这种RAM实际会被综合成SRAM。在verilog代码上，两种RAM都是由reg类型的变量表示，但是区别在于第二种RAM的读写地址会被寄存器寄存一次。

```scala
val syncMem = SyncReadMem(16,UInt(32.W))
```

```scala
//ram.scala
package test

import chisel3._

class SinglePortRAM extends Module{
    val io = IO(new Bundle{
        val addr = Input(UInt(10.W))
        val dataIn = Input(UInt(10.W))
        val en = Input(Bool())
        val we = Input(Bool())
        val dataOut = Output(UInt(32.W))
    })
    
    val syncRAM = SyncReadMem(1024, UInt(32.W))
    when(io.en)
    {
        when(io.we)
        {
            syncRAM.write(io.addr, io.dataIn)
            io.dataOut := DontCare
		}.otherwise{
            io.dataOut := syncRAM.read(io.addr)
        }
    }.otherwise{
        io.dataOut := DontCare
    }
}
```

## 带写掩膜的RAM

​	RAM通常支持按字节写入的功能，比如数据写入端口的宽度为32bit，那么就应该由4bit的写掩膜信号，写掩膜种每一个bit对应数据端口种的8个bit。

```scala
package test

import chisel3._
import chisel3.util._

class MaskRAM extends Module{
    val io = IO(new Bundle{
     	val addr = Input(UInt(10.W))
        val dataIn = Input(UInt(32.W))
        val en = Input(Bool())
        val we = Input(UInt(4.W))
        val dataOut = Output(UInt(32.W))
    })
    
    val dataIn_temp = Wire(Vec(4,UInt(8.W)))
    val dataOut_temp = Wire(Vec(4,UInt(8.W)))
    val mask = Wire(Vec(4,Bool()))
    
    val syncRAM = SyncReaadMem(1024, Vec(4, UInt(8.W)))
    
    when(io.en)
    {
        syncRAM.write(io.addr, dataIn_temp, mask)
        dataOut_temp := syncRAM.read(io.addr)
    }.otherwise{
        dataOut_temp := DontCare
    }
    
    for(i <- 0 until 4){
        dataIn_temp(i) := io.dataIn(8*i+7, 8*i)
        mask(i) := io.we(i).toBool
        io.dataOut := Cat(dataOut_temp(3), dataOut_temp(2), dataOut_temp(1), dataOut_temp(0))
    }
}
```

## 计数器

​	计数器也是一个常用的硬件电路。Chisel在util包种定义了一个自增计数器原语Counter，接受两个参数，一个参数Bool类型的使能信号，一个参数是一个具体的正数使得当计数器到达该值时归零。方法返回一个二元组，第一个值是该计数器的计数值，第二个值是判断计数值是否等于期望值的结果。

```scala
package test

import chisel3._
import chisel3.util._

class MyCounter extends Module{
    val io = IO(new Bundle{
        val en = Input(Bool())
        val out = Output(UInt(8.W))
        val valid = Output(Bool())
    })
    
    val (a, b) = Counter(io.en, 233)
    io.out := a
    io.valid := b
}
```

## 16位线性反馈移位寄存器

```scala
package 

import chisel3._
import chisel3.util._

class LFSR extends Module {
    val io = IO(new Bundle{
        val en = Input(Bool())
        val out = Output(UInt(16.W))
    })
    
    io.out L= LFSR16(io.en)
}
```

## 状态机

```scala
val sNone::sOne1::sTwols::Nil = Enum(3)
```

