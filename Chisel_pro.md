### Chisel 进阶

### 基本数据类型

Chisel 提供了三种数据类型来描述信号，组合逻辑和寄存器：`Bits`, `UInt`, `SInt`。UInt，SInt是Bits的扩展，一个表示无符号整型，一个表示有符号整型。

```scala
Bits(8.W)
UInt(8.W)
SInt(10.W)
```

Bits的矢量宽度有 Chisel中的width类型定义，已下表示把scala的整型n转化为Chisel的width。

```scala
n.W
Bits(n.W)
```

scala整型定义转化为一个Chisel类型

```scala
0.U
-3.S
```

和宽度符合

```	scala
8.U(4.W)
```

chisel可以自动推断宽度

```scala
"hff".U			//h表示16进制
"o377".U		//o表示8进制
"b1111_1111".U	//b表示2进制
```

为了表示逻辑值，Chisel定了Bool型。Bool可以表示true 或者 false。通过转换scala的Boolean可以得到Chisel的Bool型。

```scala
Bool()
true.B
false.B
```

### 组合电路

``` scala
val and = a & b
val or = a | b
val xor = a ^ b
val not = ~ a
val add = a + b
val sub = a - b
val neg = -a
val mul = a * b
val div = a / b
val mod = a % b
```

加法和减法的操作数的宽度是操作数的最大宽度，乘法的操作结果的宽度是两个操作数宽度之和，除法和余数的结果宽度是被除数的宽度。

一个信号一个被先定义为Wire， 之后使用:=进行赋值

```scala
val w = Wire(UInt())
w := a&b
```

```scala
val sign = x(31) //一个bit被提取出来
val lowByte = largeWord(7,0)
//而Cat可以实现bit域的合并
val word = Cat(highByte, lowByte)
```

复用器可以如下书写

```scala
val result = Mux(sel, a,b)
```

接下讲的寄存器,chisel提供了一个D flip-flops的集合，这个寄存器隐含连接到一个总时钟，并且上升沿触发。当寄存器声明存在一个初始值，那么它使用的是一个同步复位，连接到总的复位信号。

``` scala
val reg = RegInit(0.U(8.W))
```

通过:= 跟新数值

```scala
reg := d
val q = reg
```

寄存器也可以连接到一个输入

```scala
val regNxt = RegNext(d);
```

计数是一个非常基本的操作，通常是每个一个时间间隔，进行一次的计数。

```scala
val cntReg = RegInit(0.U(8.W))
cntReg := Mux(cntReg === 100.U ， 0.U， cnt + 1.U)
```

接下来讲解Bundle 和 Vec，chisel提供了两个组相关信号，Bundle用于组合不同的信号的类型，而Vec代表了可以索引的同一信号。

```scala
val ch = Wire(new Channel())
ch.data := 123.U
ch.valid := true.B

val b = ch.valid
```

chisel可以组合多个信号，整个bundle可以作为整体被引用，或者通过它们的名字分别访问，我们使用new，并且通过Wire将其包裹，通过`.` 来进行访问。

​	chisel中的Vec意味着一系列相同的信号类型，每个元素是可以通过索引进行访问的。通过元素的数量和类型来进行初始化，最后也包裹进一个Wire

```scala
//通过索引进行访问
v(0) := 1.U
v(1) := 3.U
```

被包裹进Wire，我们也可以传入寄存器去定义一系列的寄存器。

```scala
val registerFile = Reg(Vec(32,UInt(32.W)))
寄存器的元素也可以通过索引进行访问
registerFile(idx) := dIn
val dOut = registerFile(idx)
```

```scala
class BundleVect extends Bundle{
    val field = UInt(8.W)
    val vector = Vec(4,UInt(8.W))
}
```

通过bundle和Vec的组合可以实现有力的抽象

```scala
//一个小小的练习
val io = IO(new Bundle{
    val sw = Input(UInt(2.W))
    val led = Output(UInt(1.W))
})
```

执行的例子

```scala
./src/main/scala/下
package mypack
class Abc extends Module{
    val io = IO(new Bundle{})
}
```

```scala
./src/test/scala下
package myTester
import mypack._
object myTester extends App{
    Driver.execute(args, ()=> new Abc)
}
```

```scala
//在主目录
sbt "test:runMain myTester.myTester"
```

由于我们的测试文件在test下所以这里会加上test，那么sbt就会在test的目录下找找可以执行的object来执行。

我们使用iotesters来测试我们的程序，

```scala
class Tester(dut: Abc) extends PeekPokeTester(dut){
  poke(dut.io.a, 0.U)
  poke(dut.io.b, 1.U)
  step(1)
  println("Result is " + peek(dut.io.out).toString)
}

//我们这里并不execute，直接Driver，生成一个Abc，之后直接调用，Tester(c)
object AbcTester extends App {
  chisel3.iotesters.Driver( () => new Abc()){ c=>
    new Tester(c)
  }
```

模块化，

```scala
class CompA extends Module {
    val io = IO(new Bundle{
        val a = Input(UInt(8.W))
        val b = Input(UInt(8.W))
        val x = Output(UInt(8.W))
        val y = Output(UInt(8.W))
    })
}

class CompB extends Module{
    val io = IO(new Bundle{
        val in1 = Input(UInt(8.W))
        val in2 = Input(UInt(8.W))
        val out = Output(UInt(8.W))
    })
}

class CompC extends Module{
    val io = IO(new Bundle{
        val in_a = Input(UInt(8.W))
        val in_b = Input(UInt(8.W))
        val in_c = Input(UInt(8.W))
        val out_x = Output(UInt(8.W))
        val out_y = Output(UInt(8.W))
    })
    
    val compA = Module(new CompA())
    val compB = Module(new CompB())
    
    compA.io.a := io.in_a
    compA.io.b := io.in_b
    io.out_x := compA.io.x
    compB.io.in1 := compA.io.y
    compB.io.in2 := io.in_c
    io.out_y :=compB.io.out
}
```

一个加法器

```scala
class Alu extends Module{
    val io = IO(new Bundle{
        val a = Input(UInt(16.W))
        val b = Input(UInt(16.W))
        val fn = Input(UInt(2.W))
        val y = Output(UInt(16.W))
    })
    
    io.y := 0.U
    switch(io.fn)
    {
        is(0.U) {io.y := io.a + io.b}
        is(1.U) {io.y := io.a - io.b}
        is(2.U) {io.y := io.a | io.b}
        is(3.U) {io.y := io.a & io.b}
    }
}
```

我们还可以使用批量连接符<> 进行连接，Chisel使用离开字段进行连接。

```scala
class Fetch extends Module{
    val io = IO(new Bundle{
        val instr = Ouput(UInt(32.W))
        val pc = Output(UInt(32.W))
    })
    ......
}

class Decode extends Module{
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val pc = Input(UInt(32.W))
        val aluOp = Output(UInt(5.W))
        val regA = Output(UInt(32.W))
        val regB = Output(UInt(32.W)) 
    })
   	......
}

class Execute extends Module{
    val io = IO(new Bundle{
        val aluOp = Input(UInt(5.W))
        val regA = Input(UInt(32.W))
        val regB = Input(UInt(32.W))
        val result = Output(UInt(32.W))
    })
    ......
}
```

```scala
val fetch = Module(new Fetch())
val decode = Module(new Decode())
val execue = Module(new Execute())

fetch.io <> decode.io
decode.io <> execute.io
io <> execute.io
```

### 搭建组合模块

在chisel中, 这样的表达式被认为是固定，会产生错误，应该:=

```scala
val f = ~e
```

在chisel中应该使用when 而不是if。if是执行scala代码，而不是生成硬件的。scala条件是在抓取不同的参数生成不同的硬件时使用的。

#### 解码器

``` scala
import chisel3.util._
result := 0.U
switch(sel){
    is(0.U) { result := 1.U }
    is(1.U) { result := 2.U }
    is(2.U) { result := 4.U }
    is(3.U) { result := 8.U }
}
```

## 时序逻辑电路

时序逻辑电路意味着，电路的输出同时取决于输入和前一个值。

最基本的搭建时序逻辑电路的元素就是寄存器，寄存器就是D触发器的集合，D触发器在时钟的上升沿抓取它的输入，并把它作为输出存储起来。

```scala
val q = RegNext(d)
//我们不需要给寄存器连接时钟，这个在Chisel的内部完成，寄存器的输入可以是任何来自vector和bundle组合的复杂的类型。
```

一个寄存器也可以被复位初始化。reset就像clock信号，在chisel是隐性的。我们提供了复位值，作为一个参数传给寄存器构造器RegInit。

```scala
val valReg = RegInit(0.U(4.W))
```

​	chisel默认重置是同步复位，同步复位只用使用reset信号选择是init值还是data进入寄存器中。

​	一个典型的寄存器类型，包括一个寄存器和一个使能信号。只有当使能为高时，寄存器才能驶入；否则它将保持原来的值。

### 计数器

​	计数器时最基本的时序电路之一，以最简单的形式，计数器就是寄存器输出连接到加法器，而加法器的的输出连接到输入寄存器。

```scala
val cntReg = RegInit(0.U(4.W))
cntReg := cntReg + 1.U
```

​	下面将的是向上计数和向下计数

```scala
val cntReg = RegInit(0.U(8.W))
cntReg := cntReg + 1.U
when(cntReg === N) {
    cntReg := 0.U
}
//或者可以用下面的做法
cntReg := Mux(cntReg === N, 0.U, cntReg + 1.U)
```

如果向下计数

```scala
val cntReg = RegInit(N)
cntReg := cntReg - 1.U
when(cntReg === 0.U){
    cnt.Reg := N
}
```

下面是一个带参数的计数器

```scala
def genCounter(n: Int) = {
    val cntReg = RegInit(0.U(8.W))
    cntReg := Mux(cntReg === n.U, 0.U, cntReg+1.U)
    cntReg
}

val count10 = genCounter(10)
val count99 = genCounter(99)
```

### 使计数器产生时序

```scala
val tickConunterReg = RegInit(0.U(4.W))
val tick = tickCounterReg === (N-1).U
tickCounterReg := tickCounterReg + 1.U
when(tick){
    tickCounterReg := 0.U
}
```

每隔N个时钟，生成一个tick，把这tick用于其他计数器

```scala
val lowFrequCntReg = RegInit(0.U(4.W))
when(tick){
    lowFrequCntReg := lowFrequCntReg + 1.U
}
```

### nerd计数器

```scala
val MAX = (N-2).S(8.W)
val cntReg = RegInit(MAX)
io.tick := false.B
cntReg := cntReg - 1.S
when(cntReg(7)){		//只要检查是否为负数就可以
	cntReg := MAX
	io.tick := true.B
}
```

### 脉冲宽度调制

下面的例子会生成一个每10个时钟周期出现三个时钟高电平的波形

```scala
def pwn(nrCycles: Int, din: UInt) = {
    val cntReg = RegInit(0.U(unsignedBitLength(nrCycles-1).W))
    cntReg := Mux(cntReg === (nrCycles-1).U, 0.U, cntReg+1.U)
    din > cntReg
}
val din = 3.U
val dout = pwm(10, din)
```

用PWN亮起一个LED

```scala
val FREQ = 100000000
val MAX = FREQ/1000
val modulation = RegInit(0.U(32.W))		//
val upReg = RegInit(true.B)				
when (modulationReg < FREQ.U && upReg){
    modulationReg := modulationReg + 1.U
}.elsewhen(modulationReg === FREQ.U && upReg){
    upReg := false.B
}.elsewhen(modulationReg > 0.U && !upReg){
    modulationReg := modulationReg - 1.U
}.otherwise{
    upReg := true.B
}

//最后modulationReg就是，从0到100000000，在从100000000到0
//生成的波形，每MAX个周期输出0~Max高电平
val sig = pwm(MAX, modulationReg >> 10)
```

### 移位寄存器

​	一个移位寄存器是一个顺序连接的触发器的集合。每个寄存器的输出接到下一个寄存器的输入。

```scala
val shiftReg = Reg(UInt(4.W))
shiftReg := Cat(shiftReg(2,0),din)
val dout = shiftReg(3)
```

下面介绍并行读取的移位寄存器

![](C:\Users\Porterlu\Desktop\picture\并行读取.png)

```scala
when(load){
    loadReg := d
}.otherwise{
    loadReg := Cat(0.U, loadReg(3, 1))
}
val serOut = loadReg(0)	//每次读取最低位
```

### 存储器

<img src="C:\Users\Porterlu\Desktop\picture\存储器.png" style="zoom:67%;" />

​	更大的存储器是通过SRAM搭建的，FPGA自带片上存储单元，也称模块化RAM。这些片上存储单元可以组合成为更大。FPGA上的存储器一般有一个读端和一个写端，或者可以切换方向的两个端口。

```scala
class Memory extends Module {
    val io = IO(new Bundle{
        val rdAddr = Input(UInt(10.W))
        val rdData = Output(UInt(8.W))
        val wrEna = Input(Bool())
        val wrData = Input(UInt(8.W))
        val wrAddr = Input(UInt(10.W))
    })
    val mem = SyncReadMem(1024,UInt(8.W)) //chisel提供的存储器
    io.rdData := mem.read(io.rdAddr)	  
    when(io.wrEna){
        mem.write(io.wrAddr, io.wrData)
    }
}
```

当读写的地址一样，会发生什么情况，读入的值是新值还是旧值。下面是一个前递电路存储器

```scala
class ForwardingMemory() extends Module {
    val io = IO(new Bundle{
		val rdAddr = Input(UInt(10.W))
        val rdData = Output(UInt(8.W))
        val wrEna = Input(Bool())
        val wrData = Input(UInt(8.W))
        val wrAddr = Input(UInt(8.W))
    })
    
    val mem = SyncReadMem(1024, UInt(8.W))
    val wrDataReg = RegNext(io.wrData)
    val doForwardReg = RegNext(io.wrAddr === io.rdAddr && io.wrEna)
    val memData = mem.read(io.rdAddr)
    when(io.wrEna){
        mem.write(io.wrAddr, io.wrData)
    }
    //最后读出是写的数据
    io.rdData := Mux(doForwardReg, wrDataReg, memData)
}
```

##  有限状态机



