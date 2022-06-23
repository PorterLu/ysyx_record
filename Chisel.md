# Chisel

## 第一个module

```scala
class Passthrough extends Module {
    val io = IO(new Bundle {
        val in = Input(UInt(4.W))
        val out = Output(UInt(4.W))
    })
    in.out := io.in
}
```

​	我们定义了一个module叫 `Passthrough` , `Module`是一个Chisel的内建类，所有的硬件module都必须继承自它。接下来我们声明了一个输入输出口，它必须叫io并且是一个IO对象，格式如 `IO(_instantiated_bundle_)`。在`Bundle` 结构内我们包含了 `in` 和 `out` 结构，`Input`、`Output` 指明了方向，同时指令了宽度为4。最后我们通过`io.out := io.in`进行一次连接，`:=` 意味着右边的信号将驱动左边的信号。

​	之后就可以将Chisel转化为verilog，我们将这个过程称为elaboration。

### 一个module生成器

这一部分我们将学到的scala的知识用到这个例子中，我们将看到像调用一个普通类一样调用一个Chisel module。

```scala
class PassthroughGenerator(width: Int) extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(width.W))
        val out = Output(UInt(width.W))
    })
    io.out := io.in;
}
println(getVerilog(new PassthroughGenerator(10)))
println(getVerilog(new PassthroughGenerator(20)))
```

## 测试硬件

```scala
test(new Passthrough()){ c =>
    c.io.in.poke(0.U)
    c.io.out.expect(0.U)
    c.io.in.poke(1.U)
    c.io.out.expect(1.U)
    c.io.in.poke(2.U)
    c.io.out.expect(2.U)
}
println("SUCCESS!!")
```

​	注意这里都使用的Unit，如果`poke`是`true.B`那么`expect`是`.B`结尾 。注意在scala中`???` 有特殊的意义，它将会产生`NotImplementedError`。

在Chisel中使用的是`printf`, `println`是 scala 的内建函数。

```scala
class PrintingModule extends Module {
    val io = IO(new Bundle {
        val in = Input(UInt(4.W))
        val out = Output(UInt(4.W))
    })
    io.out := io.in

    printf("Print during simulation: Input is %d\n", io.in)
    // chisel printf has its own string interpolator too
    printf(p"Print during simulation: IO is $io\n")

    println(s"Print during generation: Input is ${io.in}")
}

test(new PrintingModule ) { c =>
    c.io.in.poke(3.U)
    c.clock.step(5) // circuit will print
    
    println(s"Print during testing: Input is ${c.io.in.peek()}")
}
```

## 组合逻辑

### Motivation

​	在这一节中我们将看到如何使用Chisel原件来调用组合逻辑，我们将论证三种Chisel基本类型：`UInt`:`unsigned integer`，`SInt`:`signed integer`, `Bool`:`true or false`。注意所有的Chisel变量都被声明为Scala `val`。

### 基本操作

```scala
//基本模板
class MyModule extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(4.W))
        val out = Output(UInt(4.W))
    })
}
```

```scala
class MyModule extends Module {
    val  io = IO(new Bundle{
        val in = Input(UInt(4.W))
        val out = Output(UInt(4.W))
    })
    
    val two = 1 + 1	
    println(two)	//输出2
    val utwo = 1.U + 1.U
    println(utwo)	//输出UInt<1> 被当作一个硬件节点
    
    io.out := io.in
}
println(getVerilog(new MyModule))
```

```verilog
//生成的verilog代码
module MyModule(
  input        clock,
  input        reset,
  input  [3:0] io_in,
  output [3:0] io_out
);
  assign io_out = io_in; // @[cmd3.sc 12:10]
endmodule
```

### 更多的Chisel操作符

```scala
class MyOperators extends Module{
    val io = IO(new Bundle{
        val in = Input(UInt(4.W))
        val out_add = Output(UInt(4.W))
        val out_sub = Output(UInt(4.W))
        val out_mul = Output(UInt(4.W))
    })
    
    io.out_add := 1.U + 4.U
    io.out_sub := 2.U - 1.U
    io.out_mul := 4.U * 2.U
}
println(getVerilog(new MyOperators))
```

``` verilog
module MyOperators(
  input        clock,
  input        reset,
  input  [3:0] io_in,
  output [3:0] io_out_add,
  output [3:0] io_out_sub,
  output [3:0] io_out_mul
);
  wire [1:0] _T_3 = 2'h2 - 2'h1; // @[cmd9.sc 10:21]
  wire [4:0] _T_4 = 3'h4 * 2'h2; // @[cmd9.sc 11:21]
  assign io_out_add = 4'h5; // @[cmd9.sc 9:21]
  assign io_out_sub = {{2'd0}, _T_3}; // @[cmd9.sc 10:21]
  assign io_out_mul = _T_4[3:0]; // @[cmd9.sc 11:14]
endmodule
```

```scala
class MyOperatorsTwo extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(4.W))
        val out_mux = Output(UInt(4.W))
        val out_cat = Output(UInt(4.W))
    })
    val s = true.B;
    io.out_mux := Mux(s, 3.U, 0.U)
    io.out_cat := Cat(2.U, 1.U)
}
println(getVerilog(new MyOperatorsTwo))
test(new MyOperatorsTwo){ c=>
    c.io.out_mux.expect(3.U)
    c.io.out_cat.expect(5.U)
}
println("SUCCESS!!")
```

```verilog
module MyOperatorsTwo(
  input        clock,
  input        reset,
  input  [3:0] io_in,
  output [3:0] io_out_mux,
  output [3:0] io_out_cat
);
  assign io_out_mux = 4'h3; // @[cmd2.sc 9:20]
  assign io_out_cat = 4'h5; // @[Cat.scala 30:58]
endmodule
```

这里并没有生成选择电路，是因为路径是确定的，这里生成的时候对逻辑进行了简化。

### FIFO练习

![](C:\Users\Porterlu\Desktop\picture\FIFO.png)

​	这里我们要构建一个`Arbiter` 其中 `Arbiter` 的输入为 `FIFO_Ready`、`PE0_Valid`、`PE1_Valid`，这时候可以直接分析，即使题目中详细说明了工作原理，但是我们根据`PE0`的优先级高于`PE1` 和工作原理图也可以进行书写。

```scala
/*我们有三个输入分别是，fifo_ready、pe0_valid、pe1_valid
1.fifo_valid 我们将Arbiter有的 pe0_valid & pe1_valid，来满足只要有一个可以就可以输出的要求，这时我们可以想象在FIFO的到Valid后可以直接向Arbiter输出数据。
2.我们还要输出pe0_ready, 当然只要fifo可以输出数据，pe0已经许可就可以了，Arbiter在得到这两个信息后，pe0_ready := fifo_ready & pe0_valid，我们可以想象在另一个pe0的模块中在得到pe0_ready就得知了自己可以获取数据。
3.最后，我们知道了pe0的优先级高于pe1，那么只需在考虑pe1的时候考虑pe1_valid就可以了
*/
  io.fifo_ready := io.pe0_ready || io.pe1_ready
  io.pe0_valid := io.fifo_valid && io.pe0_ready
  io.pe1_valid := io.fifo_valid && io.pe1_ready && !io.pe0_ready
  io.pe0_data := io.fifo_data
  io.pe1_data := io.fifo_data
```



```scala
class Arbiter extends Module {
  val io = IO(new Bundle {
    // FIFO
    val fifo_valid = Input(Bool())
    val fifo_ready = Output(Bool())
    val fifo_data  = Input(UInt(16.W))
    
    // PE0
    val pe0_valid  = Output(Bool())
    val pe0_ready  = Input(Bool())
    val pe0_data   = Output(UInt(16.W))
    
    // PE1
    val pe1_valid  = Output(Bool())
    val pe1_ready  = Input(Bool())
    val pe1_data   = Output(UInt(16.W))
  })
  io.fifo_ready := io.pe0_ready || io.pe1_ready
  io.pe0_valid := io.fifo_valid && io.pe0_ready
  io.pe1_valid := io.fifo_valid && io.pe1_ready && !io.pe0_ready
  io.pe0_data := io.fifo_data
  io.pe1_data := io.fifo_data
}

test(new Arbiter) { c =>
  import scala.util.Random
  val data = Random.nextInt(65536)
  c.io.fifo_data.poke(data.U)
  
  for (i <- 0 until 8) {
    c.io.fifo_valid.poke((((i >> 0) % 2) != 0).B)
    c.io.pe0_ready.poke((((i >> 1) % 2) != 0).B)
    c.io.pe1_ready.poke((((i >> 2) % 2) != 0).B)

    c.io.fifo_ready.expect((i > 1).B)
    c.io.pe0_valid.expect((i == 3 || i == 7).B)
    c.io.pe1_valid.expect((i == 5).B)
    
    if (i == 3 || i ==7) {
      c.io.pe0_data.expect((data).U)
    } else if (i == 5) {
      c.io.pe1_data.expect((data).U)
    }
  }
}
println("SUCCESS!!")
```

### 参数化的Adder

​	使用参数实现一个饱和输出加法器或者截断输出加法器。

```scala
class ParameterizedAdder(saturate: Boolean) extends Module {
  val io = IO(new Bundle {
    val in_a = Input(UInt(4.W))
    val in_b = Input(UInt(4.W))
    val out  = Output(UInt(4.W))
  })

	val sum = io.in_a +& io.in_b; //保存第5位数
    if(saturate)
    	io.out := MUX(sum>15.U, 15.U, sum)
    else
    	io.out := sum 
}

for (saturate <- Seq(true, false)) {
  test(new ParameterizedAdder(saturate)) { c =>
    // 100 random tests
    val cycles = 100
    import scala.util.Random
    import scala.math.min
    for (i <- 0 until cycles) {
      val in_a = Random.nextInt(16)
      val in_b = Random.nextInt(16)
      c.io.in_a.poke(in_a.U)
      c.io.in_b.poke(in_b.U)
      if (saturate) {
        c.io.out.expect(min(in_a + in_b, 15).U)
      } else {
        c.io.out.expect(((in_a + in_b) % 16).U)
      }
    }
    
    // ensure we test saturation vs. truncation
    c.io.in_a.poke(15.U)
    c.io.in_b.poke(15.U)
    if (saturate) {
      c.io.out.expect(15.U)
    } else {
      c.io.out.expect(14.U)
    }
  }
}
println("SUCCESS!!")
```

## 控制流

```scala
class LatConnect extends Module{
    val io = IO(new Bundle{
        val in = Input(UInt(4.W))
        val out = Output(UInt(4.W))
    })
    io.out := 1.U
    io.out := 2.U
    io.out := 3.U
    io.out := 4.U
}
test(new LastConnect){ c => c.io.out.expect(4.U) }
//结果是输出的最后一个 := 的结果 
```

### `when` `elsewhen` 和 `otherwise`

​	Chisel 主要调用的条件语句就是 `when`, `elsewhen`, `otherwise` 结构。

```scala
when(someBooleanCondition){
    //do something
}.elsewhen(someOtherBooleanCondition){
    //do something
}.otherwise{
    //dp something
}
```

```scala
//一个实际的例子
class Max3 extends Module{
    val io = IO(new Bundle{
        val in1 = Input(UInt(16.W))
        val in2 = Input(UInt(16.W))
        val in3 = Input(UInt(16.W))
        val out = Output(UInt(16.W))
    })
    
    when(io.in1 >= io.in2 && io.in1 >= io.in3) {
        io.out := io.in1
    }.elsewhen(io.in2 >= io.in3){
        io.out := io.in2
    }.otherwise {
        io.out := io.in3
    }
}
```

### `Wire` 结构

为了说明 `wire` 结构，我们使用它来生成一个组合选择器，它有四个输入和四个输出。

<img src="C:\Users\Porterlu\Desktop\picture\sort4.png" style="zoom:33%;" />

```scala
class Sort4 extends Module {
    val io = IO(new Bundle{
        val in0 = Input(UInt(16.W))
        val in1 = Input(UInt(16.W))
        val in2 = Input(UInt(16.W))
        val in3 = Input(UInt(16.W))
        val out0 = Output(UInt(16.W))
        val out1 = Output(UInt(16.W))
        val out2 = Output(UInt(16.W))
        val out3 = Output(UInt(16.W))
    })
    
    val row10 = Wire(UInt(16.W))
    val row11 = Wire(UInt(16.W))
    val row12 = Wire(UInt(16.W))
	val row13 = Wire(UInt(16.W))
    
    when(io.in0 < io.in1){
        row10 := io.in0;
        row11 := io.in1;
    }.otherwise{
        row10 := io.in1;
        row11 := io.in0;
    }
    
    when(io.in2 < io.in3){
        row12 := io.in2;
        row13 := io.in3;
    }.otherwise{
        row12 := io.in3;
        row13 := io.in2;
    }
    
    val row20 = Wire(UInt(16.W))
    val row23 = Wire(UInt(16.W))
    val row21 = Wire(UInt(16.W))
    val row22 = Wire(UInt(16.W))
    
    when(row11 < row12){
        row21 := row11
        row22 := row12
    }.otherwise{
        row21 := row12
        row22 := row11
    }
    
    when(row10 < row23){
        row20 := row10
        row23 := row13
    }.otherwise{
        row20 := row13
        row23 := row10
    }
    
    when(row20 < row21){
        io.out0 := row20
        io.out1 := row21
    }.otherwise{
        io.out0 := row21
        io.out1 := row20
    }
    
    when(row22 < row23){
        io.out2 := row22
        io.out3 := row23
    }.otherwise{
        io.out2 := row23
        io.out3 := row22
    }
}
test(new Sort4){ c =>
    List(1, 2, 3, 4).permutations.foreach{ case i0 :: i1 :: i2 :: i3 :: Nil =>  //遍历情况
        println(s"Sorting $i0 $i1 $i2 $i3")
        c.io.in0.poke(i0.U)
        c.io.in1.poke(i1.U)
        c.io.in2.poke(i2.U)
        c.io.in3.poke(i3.U)
    	c.io.out0.expect(1.U)
        c.io.out1.expect(2.U)
        c.io.out2.expect(3.U)
        c.io.out3.expect(4.U)
    }
}
```

### 计算多项式

构建一个 module 来计算下面三个多项式

* $x^2 - 2x + 1$
* $ 2x^2 + 6x +3$
* $ 4x^2 - 10x -5 $

```scala
class Polynomial extends Module {
    val io = IO(new Bundle{
        val select = Input(UInt(2.W))
        val x = Input(SInt(32.W))
        val f0fX = Output(SInt(32.W))
    })
    
    val result = Wire(SInt(32.W))
    val square = Wire(SInt(32.W))
    
    square := io.x * io.x
    when( io.select == 0 )
 	{
        result := (square - (2.S * io.x)) + 1.S
    }.elsewhen( io.select == 1.U ){
        result := (2.S*square) + (6.S * io.x) + 3.S
    }.otherwise{
        result := (4.S*square) - (10.S * io.x) - 5.S
    }
    io.f0fX := result
}
```

### 有限状态机

<img src="C:\Users\Porterlu\Desktop\picture\state_machine.png" style="zoom:33%;" />

```scala
def states = Map("idle" -> 0, "coding" -> 1, "writing" -> 2, "grad" -> 3)
def gradLife(state: Int, coffee: Boolean, idea: Boolean, pressure:Boolean):Int ={
    var nextState = states("idle")
    if(state == states("idle"))
    {
        if(coffee){nextState = states("coding")}
        else if(idea){nextState = states("idle")}
        else if(pressure){nextState = states("writing")}
    }else if(state == states("coding")){
        if(coffee){nextState == states("coding")}
        else if(idea || pressure){nextState = states("writing")}
    }else if(state == states("writing")){
        if(coffee || idea){ nextState = states("writing")}
        else if(pressure){nextState = states("grad")}
    }
    nextState
}

```

```scala
class GradLife extends Module {
    val io = IO(new Bundle{
        val state = Input(UInt(2.W))
        val coffee = Input(Bool())
        val idea = Input(Bool())
        val pressure = Input(Bool())
        val nextState = Output(UInt(2.W))
    })
    
    val idle :: coding :: writing :: grad :: Nil = Enum(4)
    io.nextState := idle
    when( io.state === idle){
        when (io.coffee){ io.nextState := coding }
        .elsewhen (io.idea){ io.nextState := idle }
        .elsewhen (io.pressure){ io.nextState := writing }
    }.elsewhen (io.state === coding) {
        when(io.coffee) {io.nextState := coding }
        .elsewhen(io.idea || io.pressure){io.nextState := writing }
    }.elsewhen(io.state === writing){ 
    	when( io.coffee || io.idea){ io.nextState := writing }
        .elsewhen(io.pressure){ io.nextState := grad}
    }
}
```

## 寄存器

一个 `Reg` 会保持一个输出值，直到一个上升沿到来，此时它接受一个输入值 。

### 一个例子

```scala
class RegisterModule extends Module {
    val io = IO{new Bundle{
        val in = Input(UInt(12.W))
        vak out = Output(UInt(12.W))
    }}
    
    val register = Reg(UInt(12.W))
    register := io.in + 1.U
    io.out := register
}

test(new RegisterModule){ c=>
    for(i <- 0 until 100){
        c.io.in.poke(i.U)
        c.clock.step(1)
        c.io.out.expect((i + 1).U)
    }
}
```

``` scala
//一个值得注意的点是，Chisel会分辨 types 和 hardware nodes的不同
val myReg = Reg(UInt(2.W))
val myReg = Reg(2.U) //会出错，2.U 已经被当成一个硬件节点而不是一个model
```

### 例子二：RegNext

``` scala
class RegNextModule extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(12.W))
        val out = Input(UInt(12.W))
    })
    io.out := RegNext(io.in + 1.U) //自动获取io.in的宽度
}
test(new RegNextModule){ c =>
    for (i <- 0 until 100){
        c.io.in,poke(i.U)
        c.clock.step(1)
        c.io.out.expect((i+1).U)
    }
}
println("SUCCESS!!")
```

### RegInit

​	寄存器在前面的例子在初始化时，都模拟了一个随机的值。而RegInit可以为寄存器给定一个初始值。

```scala
//下面两种方式的功能是相同的
val myReg = RegInit(UInt(12.W), 0.U)
val myReg = RegInit(0.U(12.W))
```

​	注意生成的 `veriliog` 有一个模块会检查是否初始化寄存器到0，这个模块在 `always @(posedge clock)中。Chisel 隐式的初始化是高电平并且同步的。寄存器里面的值仍然是一个随机值，直到前面所说的初始化模块。

### 控制流

```scala
class FindMax extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(10.W))
        val max = Output(UInt(10.W))
    })
    val max = RegInit(0.U(10.W))
    when (io.in > max){
        max := io.in
    }
    io.max := max
}
```

### 其他寄存器的例子

```scala
//寄存器中的值将可以像一个有符号整数那样运算
class Comb extends Module {
    val io = IO(new Bundle{
        val in = Input(SInt(12.W))
        val out = Output(SInt(12.W))
    })
    val delay: SInt = Reg(SInt(12.W))
    delay := io.in
    io.out := io.in - delay
}
```

### 练习

#### 练习1：左移寄存器

![](C:\Users\Porterlu\Desktop\picture\shift寄存器.png)

* 每一个元素都是一个bit宽
* 有 `4-bit` 的输出信号
* 输入一个bit，作为输入的值
* 并行地输出寄存器的值，最高有效位为移位寄存器的最后一位，最低有效位为移位寄存器的一个元素。
* 每一个时钟都移动一次
* 在Chisel 不能通过下标直接赋值

```scala
class MyShiftRegister(val init: Int = 1) extends Module{
	val io = IO(new Bundle{
        val in = Input(Bool())
        val out = Output(UInt(4.W))
    })
    val state = RegInit(UInt(4.W), init.U)
    val nextState = (state << 1) | io.in
    state := nextState
    io.out := state
}
```

#### 练习2： 参数化左移寄存器

``` scala
class MyOptionalShiftRegister(val n: Int, val init: BigInt = 1) extends Module {
    val io = IO(new Bundle{
        val en = Input(Bool())
        val in = Input(Bool())
        val out = Output(UInt(n.W))
    })
    val state = RegInit(init.U(n.W))
    val nextState = (state << 1) | io.in
    when(io.en){
        state := nextState 
    }
    io.out := state
}
```

### 附录：精确时钟和初始化

​	Chisel模块有一个默认的时钟和初始化，这些会隐式地用在每个寄存器。Chisel提供了多时钟、改变默认时钟、设置初始值的功能，下面的例子中将通过 `withClock(){}`, `withReset(){}` 和 `withClockAndReset(){}`。

​	值得注意的是，`reset` 是总是同步的，并且类型是 `bool` 。在Chisel中有`Clock`类型用于时钟，`Bool` 类型可以通过 `asClock()` 转化为转为 `Clock` 类型。

```scala
import chisel3.experimental.{withClock, withReset, withClockAndReset}

class ClockExamples extends Module{
    val io = IO(new Bundle{
        val in = Input(UInt(10.W))
        val alternateReset = Input(Bool())
        val alternateClock = Input(Clock())
        val outImplicit = Output(UInt())
        val outAlternateReset = Output(UInt())
        val outAlternateClock = Output(UInt())
        val outAlternateBoth = Output(UInt())
    })
    
    val imp = RegInit(0.U(10.W))
  	imp := io.in
  	io.outImplicit := imp

  	withReset(io.alternateReset) {
    	// everything in this scope with have alternateReset as the reset
    	val altRst = RegInit(0.U(10.W))
    	altRst := io.in
    	io.outAlternateReset := altRst
  	}

  	withClock(io.alternateClock) {
    	val altClk = RegInit(0.U(10.W))
    	altClk := io.in
    	io.outAlternateClock := altClk
  	}

  	withClockAndReset(io.alternateClock, io.alternateReset) {
    	val alt = RegInit(0.U(10.W))
    	alt := io.in
    	io.outAlternateBoth := alt
  	}
}
```

## FIR Filter

![](C:\Users\Porterlu\Desktop\picture\FIR_Fliter.png)

```scala
class My4ElementFir(b0: Int, b1: Int, b2: Int, b3: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })

  //每当一个时钟到来时，总是会更新Reg内的值为输入的值，所以前一个的值会赋值给后一个寄存器
  val x_n1 = RegNext(io.in, 0.U)
  val x_n2 = RegNext(x_n1, 0.U)
  val x_n3 = RegNext(x_n2, 0.U)
  io.out := io.in * b0.U(8.W) + 
    x_n1 * b1.U(8.W) +
    x_n2 * b2.U(8.W) + 
    x_n3 * b3.U(8.W)
}
```

### FIR Fliter生成器

```scala
class MyManyDynamicElementVecFir(length: Int) extends Module {
    val io = IO(new Bundle{
        val in = Input(UInt(8.W))
        val valid = Input(Bool())
        val out = Output(UInt(8.W))
        val consts = Input(Vec(length, UInt(8.W)))
    })
    
    //思考taps生成了一个什么样的序列呢，答案是一个输入的数字加上原本长度减一的一个序列
    //tail我们取除了第一个元素外的其他元素，zip我们将两个序列一一对应构成一个二元组，b:=a 将后一个的值赋值成为前一个
    //reduce{_+_}对序列元素进行二元运算输出结果
    val taps = Seq(io.in) ++ Seq.fill(io.consts.length - 1)(RegInit(0.U(8.W)))
    taps.zip(taps.tail).foreach{ case(a,b) => when(io.valid) { b:=a }}
    io.out := taps.zip(io.consts).map{ case(a,b)=> a*b }.reduce{_+_}
}
```



