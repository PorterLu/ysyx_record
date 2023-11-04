# Scala

[toc]



## 第一章：Scala基础

### scala编译和使用

​	1. 安装完scala，可以直接键入scala，启动解释器，输入`println("Hello World")就可以进行输出。

​	2.也可编写脚本:

```scala
println("Hello,World!")
```

​	之后使用指令scala hello.scala, 也可进行输出

3. 也可编写非脚本文件，如：

```scala
class Hello{
    val hw = "Hello, world!"
    def display() = println(hw)
}
```

​	使用`scalac hello.scala`进行编译，会生成hello.class，进入scala解释器，输入如下代码，也能成功输出

```scala
val hello = new Hello
hello.display()
```

​	同时Scala解析器中，还支持多行代码，只要Scala解释器推断出你的代码还没有结束就可以延续到下一行。

```scala
scala> val myStr = 
	   | "Hello World!"
myStr: String = "Hello World!"
```

### 变量与常量的定义

​	val 会禁止后续的重新赋值，在声明时就必须初始化，Scala提倡使用val类型的变量，因为Scala是函数式编程，而函数式编程的思想之一就是传入函数的参数不应该被改变，所以Scala函数的参数必须是val类型。另外外一种变量时var，是可变的，但是声明的时候也需要进行初始化，初始化可以再次进行赋值。下面的代码中都没有显示声明类型，但是Scala具有“类型推断”能力，所以自动推断出类型。

```scala
var num = 6 // 变量的定义
val alphabet = "abcdefg"
```

### Scala的基本类型

​	Scala是静态语言，在编译期间会检查对象的类型，对于Chisel而言，我们需要这种优势，因为Chisel需要编译为verilog，我们不能等待非法的verilog语句等到模块运行时采取发现。

​	Scala中的数据类型包括：Byte、Char、Short、Int、Long、Float、Double和Boolean，在Scala中这些类型全是“类”，并且都是包scala的成员，比如，Int的全名时scala.Int，当然对于字符串，Scala使用的是java.lang.String类来表示字符串。

​	Scala的基本类型如下：

| Byte    | 8-bit有符号数，补码表示，范围为 $-2^7$ 到 $2^7 - 1$        |
| ------- | ---------------------------------------------------------- |
| Short   | 16-bit有符号数，补码表示，范围为 $-2^{15}$ 到 $2^{15} - 1$ |
| Int     | 32-bit有符号数，补码表示，范围为 $-2^{31}$ 到 $2^{31} - 1$ |
| Long    | 64-bit有符号数，补码表示，范围为 $-2^{63}$ 到 $2^{63} - 1$ |
| Char    | 16-bit字符， Unicode编码，范围是 $0$ 到 $2^{16} - 1$       |
| String  | 字符串                                                     |
| Float   | 32-bit 单精度浮点                                          |
| Double  | 64-bit 双精度浮点                                          |
| Boolean | 布尔值，其值为true或者false                                |

​	Scala定义变量时应该指明变量类型，只不过Scala编译器具有自动推断类型的功能，如果要显示声明，例子如下：

```scala
val x: Int = 123
val y: String = "123"
val z: Double = 1.2
```

### 字面量

​	先明确，字面量包括整数字面量、浮点字面量、布尔型字面量、字符字面量、字符串字面量、符号字面量、函数字面量和元组字面量。

#### 整数字面量

​	整数有四种类型，默认情况下推断为Int类型。如果字面量结尾有I或者L，则推断为Long类型。此外，Byte和Short则需要定义变量时显示声明。注意，赋值给字面量不能超过类型的表示范围。整型字面量默认是十进制的，但如果以“0x”或者“0X”开头，则字面量被认为是十六进制。

```scala
val a = 100
val b = 0X123Abc
val c:Byte = 20 //超出表示范围
val d = 200L
```

#### 浮点字面量

​	浮点的字面量都是十进制，类型默认是Double类型。可以增加一个字母"e"或者“E”，在添加一个整数作为指数，这样就构成10的n次幂。最末尾可以写一个“f”或者“F”， 表示Float；也可写一个“d" 或者“D”，表示Double类型。注意Double类型的字面量不能赋值给Float类型，而Float可以扩展为Double虽然精度会损失。

```scala
val a = 1.2E3
val b = -3.2f
val c:Float = -3.2	//这句话会出错，由于默认是Double类型，Double是不能转换为Float的
val d:Double = -3.2F
```

#### 字符与字符串字面量

```scala
val a = 'A'
val b = '\u0041'
val c = '\u0042'
val \u0041\u0042 = 1	//AB = 1
val d = '\\'
val e = """So long \u0041 String \\\"""  //使用""" ....... """不会出现转义 
```

#### 字符串插值

scala可以在表达式嵌入字符串字面量中进行求值

```scala
val name = "ABC"
println(s"${ABC}DEF")
raw"\\\\"  //不识别转义符
printf(f"${math.Pi}%.5f")
```
​	Scala代码里，句尾的分号是可选的，因为编译器会自动推断分号。如果一行只有一条完整的语句，那么分号可以不加；如果一行有多条语句，则必须用分号隔开。

### Range

​	在执行for循环的时候，我们经常会用到数字序列，这是可以使用Range进行实行，Range出了Int也支持其他类型的数值序列，例子如下：

```scala
1 to 5   	 		//区间的终点为5
1 until 5   		//区间的终点为4
1 to 10 by 2 		//创建一个从1到10的数值序列，包含区间重点10，步长为1
0.5f to 5.9f by 0.8f //这是一个浮点区间，最后一点为5.3
```

### 打印

​	首先是print和println，例子如下：

```scala
print("Hello")
print("World")		//这样会输出HelloWorld, 不会进行换行

println("Hello")
println("World") 	//这样会输出Hello\nWorld\n

//C风格的打印
val myName = "Scala"
printf("Hello %s\n", myName)
```

### 读写文件

#### 写入文件

```scala
import java.io.PrintWriter
val out = new PrintWriter("/home/user/output.txt")
for(i <- 1 to 5) out.println(i)
out.close()
```

#### 读取文本文件中的行

```scala
import scala.io.Source
val inputFile = Source.fromFile("output.txt")
val lines = inputFile.getLines		//返回的结果是一个迭代器
for(line <- lines) println(line)
```

## 第二章：控制结构

### if条件表达式

```scala
val x = 6
if(x>0){println("This is a positive number")}
else{println("This is not a positive number")}
```

其中if表达式的值还可以直接赋值给变量：

```scala
val a = if(x > 0) 1 else -1
```

### while循环

```scala
var i = 9
while(i > 0){
    i -= 1
    printf("i is %d\n", i)
}
```

### for循环

```scala
for(变量 <- 表达式) 语句块
```

​	其中，`变量 <- 表达式` 被称为"生成器"， `for (i <- 1 to 5)` 其中i不需要提前声明，也可以直接在for循环的括号中直接使用，`<-` 表示遍历其中所有的值。

​	如果使用守卫表达式，可以过滤一些值:

```scala
for(i <- 1 to 5 if i%2==0) println(i)
```

​	同时Scala还支持多个生成器，可以使用分号进行分开

```scala
for(i <- 1 to 5; j <- 1 to 3) println(i*j)
```

​	最后如果我们需要对过滤后的结果进行进一步的处理，这是就可以使用yield关键字

```scala
for(i <- 1 to 5 if i%2==0) yield i
```

​	这个被称为`for推导式`, 这个概念来自函数式编程，通过for遍历一个或者多个集合，对集合中的元素进行推导，从而计算出新的集合。

## 第三章：数据结构

### 数组

​	数组是最基本的集合，实际是计算机内部的一片连续的内存，通过指针来访问每一个数组元素。因为数组是最简单的集合，所以它在访问速度上要快于其他集合。Scala的数组名为Array，继承自Java。Array是一个具体的类，因此可以通过new来构建一个数组对象。数组元素的类型可以是任意的，而且不同元素类型会导致每个元素的内存大小不一致，但是所有元素的类型必须一致。数组对象必须是定长的，但是构建时可以选择任意长度的数组，构建完毕后就不能更改长度了。

```scala
new Array[T](n)
```

​	其中T表示参数类型，它可以显示声明，也可以从传入给构造方法的对象进行自动推断，n则表示元素的个数。这其实是一种多态，通过已知类型创建新的类型。

```scala
val array = Array('a', 'b', 'c')
```

### 列表

​	列表是一种基于链表的数据结构。列表名为List，这是一个抽象类，因此不能通过new来构建列表对象，

```scala
val list1 = List(1, 2, 3)
val list2 = x :: y :: y :: Nil	
val list3 = list1 ++ list2      //将两个列表相联
val list4 = list1 ::: list2		//将两个列表相联
val m = list2.length			
val s = list2.size
val headOfList = list1.head
val restOfList = list1.tail
val value = list1.sum			//求和
val third = list1(2)			//获取第三个元素
```

### 元组

​	元组特点就是可以包含不同类型的对象。

```scala
(1, "tuple", Console)
tuple._1
tuple._2
```

​	可以通过tuple._1这种方式访问元组中的某个元素

### 集

​	集(Set)是不重复元素的构成的，列表是根据插入的先后顺序来组织的，但是"集"并不会记录元素插入的顺序，而是以“哈希”方法对元素的值进行组织，所以，它允许你快速找到某个元素。集包括可变集和不可变集，缺省情况下创建的是不可变集。

```scala
var mySet = Set("Hadoop", "Spark")
mySet += "Scala"
println(mySet.contains("Scala"))	//会输出true
```

​	上面如果将集声明为val会报错，如果要声明一个可变集，需要引入`scala.collection.mutable.Set` ,如下：

```scala
import scala.collection.mutable.Set
val myMutableSet = Set("Database", "BigData")
myMutableSet += "Cloud Computin"
```

​	可变集可以声明为val添加元素而不报错。

### 映射

可以通过key访问value

```scala
val map = Map(1 -> "+", 2 -> "-", 3 -> "*", 4 -> "/")
```

如果想获取键值可以直接通过键

```scala
println(map(1))
```

检查是否包含某个键，可以使用如下方式:

```scala
val value = if(map.contains(1)) map(1) else -1
```

上面定义的全是不可变映射，无法更新映射中的元素，也无法增加新的元素，定义可变映射的方法如下：

```scala
import scala.collection.mutable.Map
val map = Map(1 -> "+", 2 -> "-", 3 -> "*", 4 -> "/")
map(1) = "++"
map += (5 -> "%")
```

我们还可以循环遍历映射

```scala
for((k,v) <- map) 语句
for(k <- map.keys)
for(v <- map.values)
```

### 迭代器

​	Scala中迭代器并不是一个集合，但是提供了一种访问集合的方法，当集合的构建需要很大的开销，可以用迭代器

```scala
val iter = Iterator("Hadoop", "Spark", "Scala")
while(iter.hasNext){
    println(iter.next())
}
```

### 序列

Seq，数组和列表都混入这个特质。

### 常用方法

#### map

​	对调用该方法的集合的每一个元素应用入参函数，并把结果打包到一个集合返回

#### foreach

​	和map类似，但是是有副作用的。

#### zip

```
List(1, 2, 3) zip Array('1', '2', '3')
List((1, 1), (2, 2), (3, 3))
```

#### tabulate

```scala
List.tabulate(2, 3)(_*_) //生成一个2行3列的矩阵
List.tabulate(3)(_ -> 1) //生成一个3个映射
```

#### zipWithIndex

```scala
val days = Array("Sunday", "Monday", "Tuesday")
days.zipWithIndex.foreach{case(day, count) => println(s"$count is $day")}
会有如下的输出:
0 is Sunday
1 is Monday
2 is Tuesday
```

### for结构

Scala 有一个 `for` 结构，并且它就像传统的工作方式一样。

```scala
//1
for (i <- 0 to 7){ print(i + " ") }
println()

//2
for (i <- 0 until 7){ print(i + " ")}
println()

//3
val randomList = List(scala.util.Random.nextInt(), scala.util.Random.nextInt(), scala.util.Random.nextInt(), scala.util.Random.nextInt())
var listSum = 0
for (value <- randomList) {
  listSum += value
}
println("sum is " + listSum)
```

## 第三章：模式匹配

### 简单模式匹配

```scala
val colorNum = 1
val colorStr = colorNum match{
    case 1 => "red"
    case 2 => "green"
    case 3 => "yellow"
    case _ => "Not Allowed"
}
println(colorStr)
```

​	另外模式匹配的case语句中，还可以使用变量。

```scala
val colorNum = 4
val colorStr = colorNum match{
    case 1 => "red"
    case 2 => "green"
    case 3 => "yellow"
    case unexpected => unexpected + " is Not Allowed"
}
println(colorStr)
```

### 类型模式

​	Scala可以对表达式的类型进行匹配

```scala
for(elem <- List(9, 12.3, "Spark", "Hadoop", "Hello")){
    val str = elem match{
        case i: Int => i + " is an int value."
        case d: Double => d +  " is a double value."
        case "Spark" => "Spark is found."
        case s: String =>s + " is a string value."
        case _ => "This is an unexpected value."
    }
println(str)
}
```

### “守卫”语句

```scala
for(elem <- List(1, 2, 3, 4)){
    elem match{
        case _ if (elem%2 == 0) => println(elem + " is even.")
        case _ => println(elem + " is odd.")
    }
}
```

### for表达式中的模式

```scala
val university = Map("SUSTech" -> "南方科技大学", "XMU" -> "xiamen University", "THU" -> "Tsinghua University", "PKU" -> "Peking University")
```

我们可以对键和键值进行遍历：

```scala
for ((k, v) <- university) printf("Code is : %s and name is: %s\n", k, v)
```

### case类的匹配

​	case类是一种特殊的类，它们经过优化被用于模式匹配

```scala
case class Car(brand: String, price: Int)
val myBYDCar = new Car("BYD", 89000)
val myBMWCar = new Car("BMW", 1200000)
val myBenzCar = new Car("Benz", 1500000)
for(car <- List(myBYDCar, myBMWCar, myBenzCar)){
    car match{
        case Car("BYD", 89000) => println("Hello, BYD!")
        case Car("BMW", 1200000) => println("Hello, BMW!")
        case Car(brand, price) => println("Brand:" + brand + ", Pirce:" + price +", do you want it?")
    }
}
```

### Option

​	Option可以避免取指为空的情况，如一个`val m = map("a"->1, "b"->2, "c"->3)`, 在使用`m.getOrElse`("a", 0)`,可以获得一个Option值，使用Option可以调用get可以获得真正的值，如果没有对应的值可以获得默认值。

```scala
val books = Map("hadoop"->5, "spark"->10, "hbase"->7)
books.get("hadoop")		//输出Option[Int] = Some(5)
books.get("hive")		//输出Option[Int] = None
```

​	Option类型还提供了getOrElse方法，这个方法在这个Option是Some的实例时返回对应的值，而是None的实例时返回传入的参数：

```scala
val sales=books.get("hive")		//输出Option[Int] = None
sales.getOrElse("No Such Book")  //Any = No Such Book
```

## 第四章：函数

​	Scala是一门多范式的语言，混合了面向对象编程和函数式编程的风格，而函数式编程一个重要特性就是值不可变性，这对于编写可扩展的并发程序而言可以带来巨大的好处，因为它避免了对公共的可变状态进行同步访问控制的复杂问题。

### 定义一个函数

```scala
def max(x:Int, y:Int): Int = (
	if(x > y)
    	x
    else
    	y
)
```

### 函数的返回结果

​	在Scala里，return关键字是可选的，默认情况下，编译器会在函数体最后一个表达式加上一个return，将其作为结果返回，建议不要显示加上return。返回结果有一个特殊类型，Unit，表示没有返回值，如果显示声明为Unit类型的函数，则即使函数体最后有一个可以返回具体值的表达式，也不会把表达式的结果返回。没有任何参数的Scala函数不需要空括号。这使得在类函数使用变得便利。同时如果参数很少的函数，不加上括号会出现副作用，那么要加上括号。

### 简单函数


```scala
def times(x: Int): Int = 2 * x
def distance(x: Int, y: Int, returnPositive: Boolean): Int = {
    val xy = x * y;
    if(returnPositive) xy.abs else -xy.abs
}
```

### 重载函数

​	通过参数和它们类型的不同来来编译器识别该用哪一个。

```scala
def times2(x: Int): Int = 2*x
def times2(x: String): Int = 2*x.toInt
```

### 递归嵌套函数

​	大括号决定了一个函数域，在一个函数域中可能存在很多函数。在一个域中定义的函数，那么只能在这个域中访问

```scala
def asciiTriangle(rows: Int){
    def printRow(columns: Int):Unit = println("X"* columns)
    if(rows > 0){
        printRow(rows)
        asciiTriangle(rows - 1)
    }
}
//asciiTrianle(6)会打印一个6行的三角形
```

### 函数字面量

​	函数字面量可以体现函数式编程的核心理念。在非函数式编程语言的世界中，函数的定义包含了“函数类型”和“值”两种层面的东西。但是在函数式编程中，函数是头等公民，可以像其他数据类型一样被操作和传递。我们可以像定义变量一样去定义一个函数，这样会导致，函数和变量一样一开始就有值，函数的值就是函数字面量。

​	函数式编程有两个主要思想，其中之一就是：函数是一等的值，函数的地位和一个Int值，一个String值等等是一样的，所以函数也可作为参数传递可另外一个参数，也可让一个函数作为返回值，也可以把一个函数赋值给一个变量。我们现在定义一个大家比较熟悉的传统类型的函数:

```scala
def counter(x: Int):Int = x + 1
```

​	上面这个函数的类型为(Int) => Int, 实际上在参数只有一个时括号可以省略变为Int => Int

之后我们把类型声明的部分去除，可以获取函数的值:

```scala
(value) => {value += 1}	//只有一条语句时大括号可以省略
```

​	于是我们根据变量的定义方式依葫芦画瓢，定义一个函数

```scala
val counter: Int => Int = {(value) => value + 1}
```

上面的方式已经可以看出函数是“头等公民”，单独剥离出值的概念，一个函数的值就是函数的字面量，这样我们调用的时候可以直接传递一个函数的字面量即可。

### 匿名函数、Lambda表达式与闭包

​	我们不是需要给每个函数命名，这时可以使用匿名函数，如下：

```scala
(num: Int) => num*2
```

​	这种匿名函数的定义形式，我们经常称为“Lambda表达式”，如果参数之后一个，括号可以省略。我们将匿名函数放到变量中，可以如下进行书写：

```scala
val myNumFunc: Int=> Int = (num: Int) => num*2
```

​	由于Scala具有自动推断的机制，可以自动推断变量的类型，所以可以又有如下的语句：

```scala
val myNumFunc = (num: Int) => num * 2
```

​	但是如果再去除num之后的Int就会报错，因为编译器已经无法自动推断出类型了。

### 闭包

​	闭包是一个函数，一种比较特殊的函数。为了了解闭包的概念，我们书写如下的代码：

```scala
object MyTest{
    def main(args: Array[String]): Unit = {
        def plusStep(step: Int) = (num: Int) => num + step
        val myFunc = plusStep(3)
        println(myFunc(10))
    }
}
```

​	闭包函数会引用外部的变量，下面是一个简单的实例

```scala
var more = 1
val addMore = (x:Int)=>x+more
```

​	我们给more确定具体的值1以后，就让addMore中的more变量绑定了具体的值1，不再是“自由变量”，而是被绑定的具体的值，或者说被关闭了。

### 高阶函数

​	函数在Scala中是“头等公民”，它的使用方法和其他变量是一样的。一个接受其他函数作为参数或者返回一个函数的函数就是高阶函数。

​	现在给出一个高阶函数的实例：

```scala
def sumInts(a: Int, b: Int): Int = {
    if(a > b) 0 else a + sumInts(a+1, b)
}
```

​	我们重新实现函数sumInts的实现方式，让一个函数作为另一个参数的实参：

```scala
def sum(f: Int => Int, a:Int, b:Int): Int = {
    if(a > b) 0 else f(a) + sum(f, a+1, b)
}
def self(x: Int): Int = x
def sumInts(a: Int, b: Int):Int = sum(self, a, b)
```

​	从上面定义可以看出sum的参数类型是(Int => Int, Int, Int)，结果的类型是Int，所以函数的类型是：

```scala
(Int => Int, Int, Int) => Int
```

​	通过传入的函数，为实现新的功能提供方便，比如连续整数的平方和，原本代码如下：

```scala
def square(x: Int) : Int = x*x
def sumSquares(a: Int, b: Int): Int = {
    if(a > b) 0 else square(a) + sumSquares(a+1, b)
}
```

​	在比如，连续整数关于2的幂次和，原本的代码如下：

```scala
def powerOfTwo(x: Int): Int = {
    if(x == 0) 1 else 2 * powerOfTwo(x-1)
}
def sumPowerOfTwo(a: Int, b:Int): Int = {
    if(a > b) 0 else powerOfTwo(a) + sumPowerOfTwo(a+1, b)
}
```

​	上面的函数都是从a到b的f(n)的累加形式（其中a<=n<=b)， 唯一的区别就是各种场景下f(n)的具体实现不同，所以，我们可以抽取函数中共同的部分进行重新编写，将定义的f(n)作为一个参数传入到高阶函数中，代码如下：

```scala
def sum(f:Int=>Int, a:Int, b:Int): Int = {
    if(a > b) 0 else f(a) + sum(f, a+1, b)
}

def self(x:Int) : Int = x
def square(x: Int): Int = x*x
def powerOfTwo(x: Int): Int = if(x==0) 1 else 2 * powerofTwo(x-1)
def sumInts(a:Int, b:Int): Int = sum(self, a, b)
def sumSquared(a: Int, b:Int): Int = sum(square, a, b)
def sumPowerOfTwo(a: Int, b:Int): Int = sum(powerOfTwo, a, b)
```

### 占位符语法

​	为了让函数字面量更加简洁，我们可以使用`_`作为一个或者多个参数的占位符，只要每个参数在函数字面量中仅出现一次。

```scala
val numList = List(-3, -5, 1, 6, 9)
numList.filter(x => x > 0)
numList.filter(_ > 0)
```

​	当采用了下划线的表示方法的时候，对于numList中的每一个元素，都会依次传入用来替换下划线。

### 部分应用函数

```scala
def add(x:Int, y:Int) = x+y
val b = sum(_:Int, 3)
```

### 函数的特殊调用形式

#### 具名参数

```scala
如果参数传参时，显示声明参数名并赋值，则可以无视参数循序
```

#### 默认参数名

```scala
函数定义时，可以给参数一个默认的值，如果调用函数时缺省了这个参数，则使用定义时的默认值
```

#### 重复参数

```scala
def addMany(msg:String, num:Int*)  = {......}
addMany("Hello", 1, 2, 3)
```

### 柯里化

```scala
def add(x: Int, y: Int, z: Int) = x + y + z
def addCurry(x:Int)(y:Int)(z:Int)
addCurry(1)(2){3}
```

## 第三章：类和对象

### 一个简单的例子

```scala
class WrapCounter(CounterBits: Int){
    val max: Long = (1 << counterBits) - 1
    var counter = 0L
    def inc(): Long = {
        counter = counter + 1
        if(counter > max){
        	counter = 0
        }
        counter
    }
    println(s"counter created with max value $max")
}
//s打头意味着这时一个插值字符串，$max在运行时将被计算出来放入字符串中
```

### 实例化一个类

``` scala
val x = new WrapCounter(2)
x.inc()
if(x.counter == x.max){
    println("counter is about to wrap")
}
x.inc()
```

​	类是对象的蓝图，一个对象的类型就是类。类中的字段和方法统称为成员。与java和C++，Scala的类成员默认都是公有的，如果不想某个成员被外部访问，则可以加上关键字“private”，这样成员只能被类内部的其他成员访问。

​	为了执行这段代码，可以在终端键入`scala`，在scala解释器中可以输入如下的语句：

```scala
scala> :load /dir/test.scala
```

​	但是直接使用`scalac`进行编译会出错，因为`scalac`进行编译时，必须把声明等都封装在对象中，这是JVM字节码的要求。我们可以重新进行封装,这样就可以进行编译了

```scala
object MyCounter{
    def main(args:Array[String]){
        val x = new WrapCounter(2)
        x.inc()
        if(x.counter == x.max){
            println("counter is about to wrap")
        }
        x.inc()
    }
}
```

### setter和getter方法

​	下面我们来看一下如何设置类中字段并读取值：

```scala
class Counter {
    var value = 0
    def increment(step:Int) Unit = { value += step}
    def current(): Int = {value}
}

object MyCounter{
    def main(args:Array[String]){
        val myCounter = new Counter
        println(myCounter.value)
        myCounter.value = 3
        myCounter.increment(1)
        println(myCouter.current)
    }
}
```

​	上面的代码也可以正常工作，但是这种将属性字段设置为public的方式并不值得提倡。Scala中提供了`value`和`value_`

```scala
class Counter{
    private var privateValue = 0
    def value = privateValue
    def value_=(newValue: Int){
        if(newValue > 0) privateValue = newValue
    }
    def increment(step: Int): Unit = {value += step}
    def current(): Int = {value}
}

object MyCounter{
    def main(args:Array[String]){
        val nyCounter = new Counter
        println(myCounter.value)
        myCounter.value += 3
        println(myCounter.value)
        myCounter.increment(1)
        println(myCounter.current)
    }
}
```

### 类的构造方法

#### 主构造方法

​	在C++、Java、Python等oop语言，类通常需要定义一个额外的构造方法。这样，要构造一个类的对象，除了需要关键字new，还需要调用构造方法。Scala则不需要显示定义构造方法，而是把类内部非字段化的代码都当作“主构造方法”。而且，类名后面可以定义若干参数列表，用于接受参数，这些参数将在构造对象时用于初始化字段并传递给主构造方法。

```scala
class Student(n:String){
    val name = n
    println("A student name " + n + "has been register.")
}
```

​	在这个例子中，Students类接受一个参数String n，并用n来初始化字段name。这样就不需要把name定义为var类型，而是使用函数式风格，而且不需要register方法在构造对象时来更新name的数据。函数println既不是字段，也不是方法的定义，所以被当是主构造函数的一部分。

#### 辅助构造函数

​	除了主构造函数，还可以定义若干个辅助构造方法。辅助构造方法都是以“def this(......)”来开头的，而且第一步行为必须是调用该类的另外一个构造方法，即第一条语句必须是“this(......)", 要么是主构造方法，要么是之前的另一个辅助构造方法。这种规则的结果就是任何构造方法最终都会调用该类的主构造方法，使得主构造方法成为类的单一入口。

```scala
class Counter{
    private var value = 0
    private var name = ""
    private var mode = 1
    def this(name: String){
        this()
        this.name = name
    }
    def this(name:String, mode:Int){
        this(name)
        this.mode = mode
    }
    def increment(step: Int): Unit = {value += step}
    def current(): Int = {value}
    def info(): Unit = {printf("Name:%s and mode is %d\n", name, mode)}
}

object MyCounter{
    def main(args:Array[String]){
        val myCounter1 = new Counter
        val myCounter2 = new Counter("Runner")
        val myCounter3 = new Counter("Time", 2)
        myCounter1.info
        myCounter1.increment(1)
        printf("Current value is: %d\n", myCounter1.current)
        myCounter2.info
        myCounter2.increment(2)
        printf("Current value is: %d\n", myCounter2.current)
        myCounter3.info
        myCounter3.increment(3)
        printf("Current value is:%d\n", myCounter3.current)
    }
}
```

#### 析构函数

​	因为Scala没有指针，同时使用了Java的垃圾回收机制，所以不需要像C++那样定义析构函数。

#### 私有构造函数

​	如果在类名与类的参数列表之间加上”private“，那么主构造方法就是私有的，只能被内部定义访问，外部代码构造对象就不能构造主构造方法进行，而必须使用其他公有的辅助构造方法或工厂方法（用于专门构造对象的方法）。

```scala
class Student private(n:String, m:Int){
    val name = n
    val score = m
    def this(n:String) = this(n, 100)
    println(n + "s score is" + m)
}
```

### 重写toString方法

​	细心的读者会发现，在前面构造一个Students类的对象时，Scala解释器打印了一串晦涩的信息”Student@7509b8e7"。这其实来自于Student类的toString方法，这个方法返回一个字符串，并在构造完一个对象时自动调用，返回结果交给解释器打印。该方法是所有Scala类隐式继承来的，如果不重写这个方法，就会用默认继承的版本。默认的toString方法来自java.lang.Object类，其行为只是简单地打印类名、一个“@”符号和一个十六进制数。如果想让解释器输出跟多有用的信息，则可以自定义toString的方法。

```scala
class Students(n: String){
    val name = n
    override def toString = "A student named" + n + ""
}
```

### 方法重载

​	如果在类里定义了多个同名的方法，但是每个方法的参数不同，那么就可以称这个方法有多个不同的版本。这个就叫方法重载，它是面向对象里多态属性的一种表现。这些方法方法是同名的，但是它们是不同的，因为函数真正的特征是参数，而不是函数名或者返回值。

### 类参数

​	从前面的例子可以发现，很多时候类的参数仅仅是直接赋给某些字段。Scala为了进一步简化代码，允许在类的参数前加上val或者var来修饰，这样就会在类的内部生成一个与参数同名的公有字段。构造对象时，这些参数会直接赋值给同名字段。如果参数没有任何关键字，那它仅仅是”参数“，不是类的成员，只能用来初始化字段或者给方法使用。

```scala
class Student(val name:String, var score:Int){
    def exam(s:Int) = score = s
    override def toString = name + "s score is" + score a + "."
}
```

### 单例对象与伴生对象

​	在Scala里，除了用new可以构造一个对象，也可以用”object“定义一个对象，它和类相似，只不过不能像类那样有参数，也没有构造方法。因此，不能用new来实例化一个object的定义，因为它已经是一个对象了。这种对象和实例化出来的对象没有区别，只是object定义的对象只能有一个，所以叫"单例对象"。

​	如果某个单例对象和某个类同名，那么这个单例对象成为这个类的”伴生对象“，同样，这个类称为这个单例对象的”伴生类“。伴生类和伴生对象必须在同一个文件里，而且两者可以互相访问对方的所有成员。Scala追求纯粹的面向对象属性，即所有事物都是类或者对象，静态变量这种不属于类也不属于对象的部分违背了Scala的理念。Scala的做法是在伴生对象里定义所需要的变量。单例对象除了作用于伴生对象，通常也可以用于打包某方面功能的函数作为一个工具集。

​	前面说过类定义了一种类型，而单例对象的类型是object.type, 具体的有A.type、B.type等等。

```scala
class Person{
    private val id = Person.newPersonId()
    private var name = ""
    def this(name: String){
        this()
        this.name = name
    }
    def info(){ printf("The id of %s is %d.\n", name, id)}
}

object Person{
    private var lastId = 0
    private def newPersonId() = {
        lastId += 1
        lastId
    }
    def main(args: Array[String]){
        val person1 = new Person("Ziyu")
        val person2 = new Person("Minxing")
        person1.info()
        person2.info()
    }
}
```

​	上面的程序将会输出

```
The id of Ziyu is 1.
The id of Minxing is 2.
```

​	从上面的结果看，伴生对象中定义的newPersonId实际上就实现了静态，

### apply方法

​	我们经常会使用到对象的apply方法和update方法，虽然我们表面上没有察觉，但是，实际上，在Scala中，apply方法和update方法都会遵守相关的约定被调用，约定如下：用括号传递给变量(对象)一个或者多个参数时，Scala会把它转化成对应apply方法的调用；与此相似的时，当对带有括号并包括一到若干参数的对象 进行赋值时，编译器将调用对象的update方法，在调用时，是把括号里的参数和等号右边的对象一起作为update方法的输入参数来执行调用。

​	 如果定义一个方法专门用于某一类的对象时，这种方法就被称为”工厂方法“。包含这些工厂方法的单例对象，也叫做”工厂对象“。通常工厂对象会定义在伴生对象中。尤其是当存在继承关系时，可以在基类的伴生对象里定义一系列相应的工厂方法。使用工厂方法的好处就是不用直接使用new来实例化对象，改用方法调用，而且方法名是任意的，这样隐藏了类的实现细节。例如：

```scala
class Student(val name: String, var score: Int){
    def exam(s: Int) = score = s
    override def toString = name + " score is " + score + "."
}

object Student {
    def registerStu(name: String, score: Int) = new Student(name, score)
}
```

​	有了这个特殊的方法可以隐式调用`类名(参数)`，隐式调用时编译器会自动插入确实的".apply"方法，如果apply是无参的，这里也应该写出空号，否则无法隐式调用。

```scala
class Student(val name: String, var score: Int) {
  def apply(s: Int) = score = s
  def display() = println("Current score is " + score + ".")
  override def toString = name + " score is " + score + "."
}
 
object Student {
  def apply(name: String, score: Int) = new Student(name, score)
}
```

```scala
class TestApplyClasAndObject{
}

class ApplyTest{
    def apply() = println("apply method in class is called!")
    def greetingOfClass: Unit = {
        println("Greeting method in class is called")
    }
}

object ApplyTest{
    def apply() = {
        println("apply method in object is called")
        new ApplyTest()
    }
}

object TestApplyClassAndObject{
    def main(args: Array[String]){
        val a = ApplyTest()
        a.greetingOfClass
        a()
    }
}
```

​	当我们执行val a = ApplyTest()时，会导致apply方法被调用并返回该方法调用的值，也就是ApplyTest的实例化对象。当执行a()时，又会导致调用伴生类的apply方法。

### 主函数

​	主函数是Scala唯一的入口，即程序是从主函数开始运行的。要提供这样的入口，则必须在某个单例里定义一个名为”main“的函数，而且该函数只有一个参数，类型为为字符串数组Array[String]，函数的返回类型是Unit，任何符合条件的单例对象都能成为程序的入口。

```scala
class Student(val name:String, var score: Int){
    def apply(s: Int) = score = s
    def display() = println("Current score is " + score + ".")
    override def toString = name + " score is " + score + "."
}

object Student{
    def apply(name: String, score: Int) = new Student(name ,score)
}

object Start{
    def main(args: Array[String]) = {
        try{
            val score = args(1).toInt
            val s = Student(args[0], score)
        } catch {
            case ex: ArrayIndexOutOfBoundsException => println("Arguments are deficient!")
	      	case ex: NumberFormatException => println("Second argument must be a Int!")
        }
    }
}
```

## 第四章：操作符即方法

### 操作符在Scala里的解释

​	Scala追求纯粹的面向对象，像C++不属于面向对象范畴的基本类型及其操作符都是不存在的。在Scala标准库中实现了"class Byte"、"class Char"、"class Int"、"class Long"、"class Float"、”class Double“、”class Boolean“和”class Unit“九种值的类型，只不过这写类都是抽象的、不可继承的。

​	和基本类型相关的操作符该如何处理？严格来讲，Scala不存在操作符的概念，所谓的操纵符其实都是这些基本类型类的方法，推而广之，而且方法调用都能操作符的形式。如前面的例子可以这样写`stu exam 100`，在参数只有一个时，括号可以省略。

### 三种操作符

#### 前缀操作符

​	写在操作数前面的操作符称为前缀操作符，并且操作数只有一个，前缀操作符对应一个无参方法，操作数是调用该方法。前缀操作符只有+、-、！、~四个，相应的方法名"unary\_+"、”unary\_-“、”unary\_!“和"unary\_~"。如果自定义的方法名是”unary\_“加上这四个操作符之外的操作符，那么就不会形成前缀操作符的形式。

```scala
class MyInt(val x: Int){
    def unary_! = -x
    def unary_* = x * 2
}

val mi = new MyInt(2)
!mi就是-2，mi.unary_*就是20
```

#### 中缀符

​	中缀操作符的左右两边都接受操作符，它对应普通的有参方法，两个操作数中的一个是调用该方法的对象，一个是传入该方法的参数，参数的那一边没有数量限制，但是多个参数应该放在圆括号里。Scala规定了，以冒号":"结尾的操作符，其右操作数是调用该方法的对象，其余操作符都是把左操作数当调用该方法的对象。

#### 后缀操作符

​	写在操作数后面的操作符称为后缀操作符，并且操作数只有一个，并且操作数只有一个，就是调用该方法的对象，后缀操作符也对应无参的方法。

### 对象的相等性

​	在编程时，常常需要比较两个对象的相等性，其实相等性有两种：1.自然相等性，只要字面上的值相等，就认为两个对象相等。2.引用相等性，构造的对象常常会赋值给一个变量，即变量引用该对象，引用相等比较的是两个变量是否引用了一个相同的变量。

## 第五章：类的继承

### Scala的类继承

​	在面向对象编程里，为了节省代码量，也为了反应实际各种类之间的关系，通常采用两种策略：包含和继承。包含代表了一种has-a关系，也就是一个类包含另外一个类的实例。例如，午餐的菜单含有水果，那么就可以先编写一个水果类，然后再编写一个午餐类，之后让午餐里包含水果类的对象，但这两者之间没有必然的关系。继承代表了一种is-a的关系，也就是从一个宽泛的类中派生出具体的类。例如，编写的水果类包含了一些常见的水果的常见属性，然后编写一个更加具体的苹果类。

​	通过类的参数列表后加上关键字"extends"和被继承的类名，就完成了一个继承的过程，被继承的类称为”超类“或者”父类“，而派生出来的类叫做子类。

```scala
class A{
    val a = "class A"
}

class B extends A{
    val b = "class B"
}
val x = new B
x.a可输出继承的属性
```

### 调用超类的构造的方法

​		大多数类都有参数列表，用于接受参数，传递给构造方法并初始化。像前面的例子比较特殊，类A没有参数。加入类A有参数，那么类B该如何处理呢？在构造某个类的对象时，如果这个类继承自另外一个类，那么应该先构造超类对象组件，再来构建子类的其他组件，例子如下：

```scala
class A(val a:Int)
class B(giveA: Int, val b:Int) extends A(giveA)
val x = new B(10, 20)
x.a 和 x.b可以进行输出
```

### 重写超类的成员

#### 不可被继承的成员

​	通常超类的成员会被子类继承，除了两种成员：一个就是超类中的”private“成员，二就是被子类重写的成员。重写的意思是，超类的某个属性，在子类中可能不一定符合，而是需要一个新的符合子类行为的版本。例如，几乎所有的金属在室温下是固态，唯独汞是液态，所有金属类的室温状态都可以定义为固态，只有汞是液态。这个时候，子类汞就需要重写这个属性为液态。

```scala
class Metal{
    val state = "solid"
}

class Mercury extends Metal{
    override val state = "liquid"
}
```

​	重写时，”override“关键字是必备的，这是为了防止意外地重写。

#### 不可重写的成员

​	如果超类成员在开头使用关键字”final“修饰，那么子类只能继承，而不能进行重写。“finial”也可以用于修饰class，那么这个类就禁止被其他的类继承。

#### 无参方法和字段

​	Scala的无参方法在调用时，可以省略括号。鉴于此，对用户代码而言，如果看不到类库的具体实现，那么调用无参方法和调用同名的字段没有什么不同。甚至无法区分是方法还是字段。如果把类库里的无参方法改成字段，或者把字段改成无参方法，那么客户代码无用更改也能运行。为了方便在这两种定义之间进行切换，Scala允许超类的无参方法被子类重写为字段，但是字段不能反过来被重写为无参方法，而且方法的返回类型必须和字段类型一致。

```scala
class A{
    def justA = "A"
}

class B extends A{
    override val justA = "B"
}
```

### 子类型多态和动态绑定

​	类型为超类的变量可以指向子类的对象，这一现象被称为子类型多态，也是面向对象的多态之一。但是对于方法而言，尽管变量的类型是超类，方法的版本确实“动态绑定”的。也就是说，调用的方法要运行哪个版本，是由指向的对象来决定的。例如：

```scala
//经典例子，为动物类为参数函数，传入各种继承自动物类的具体动物
class A{
    def display() = "I'm A."		
}

class B extends A{
    override def display() = "I'm B."
}

val x:A = new B
x.display
```

### 抽象类

​	如果类里面包含了没有具体定义的成员，没有初始化的字段或没有函数体的方法，那么这个类就是抽象类，必须使用用关键字"abstract "修饰。相应的成员称为抽象成员，就不需要“abstract”的修饰。因为存在抽象成员，所以这个类不能构造出具体的对象，因为有无法初始化抽字段或者无法执行抽象方法，所以抽象类不能通过“new”来构造实例对象。

​	抽象类确实的抽象成员的定义，可以有抽象类的子类来补充。也就是说，抽象类“声明”了抽象成员，却没有立即定义它。如果抽象成员补齐了抽象成员的定义，那么就称子类实现了超类的抽象成员。相对的，我们称超类的成员是抽象的，而子类的成员是具体的。子类实现超类的抽象成员时，关键字“override”可写可不写。

* 定义一个抽象类需要使用关键字abstract
* 定义一个抽象类的抽象方法，也不需要关键字abstract，只要把方法体空着，不写方法体就可以。
* 抽象类中定义的字段，只要没有给出初始化值，就表示一个抽象字段，但是，抽象字段必须要声明类型，比如：val carBrand: String。
* 实现抽象成员时可以不写abstract

```scala
abstract class A{
    val a:Int
}

class B(val b:Int) extends A{
    val a = b * 2;
}

val y = new B(1)
```

​	抽象类常用于定义基类，因为基类会派生出很多不同的子类，这些子类往往具有行为不同的同名成员，所以基类只用声明一些公共成员，让子类去实现各自期待的版本。

### 关于多重继承

​	scala没有多重继承，也就是，"extends"关键字后面自能有一个类，Scala专门设计了“特质”来实现相同的功能。

## 第六章：特质

​	因为Scala没有多重继承，为了提供代码的复用率，故而创造了新的编程概念，即特质。

​	特质是用关键字“trait”为开头定义的，它与单例对象很像，两者都不能入参。但是单例对象天生就是具体的，特质天生就是抽象的，不过不需要用“abstract“来说明。所以，特质可以包含抽象成员，而单例对象不行。另外两种都不能用new来实例化，因为特质是抽象的，而单例对象已经是具体的了。类、单例对象和特质三者一样，内部可以包含字段和方法，甚至可以包含其他类、单例对象、特质的定义。

​	特质可以被其他类、单例对象和特质混入，这里使用术语混入，而不是继承，是因为特质在超类的方法调用上采用了线化机制，与多重继承有很大的区别。其他方面，或如和继承其实是一样的。例如，某个类混入一个特质后，就包含了特质的所有公有成员，而且可以用”override“来重写特质的成员。

​	Scala只循序继承自一个类，但是对特质的混入数量没有限制，故而可以替代多重继承的语法。要混入一个特质，可以使用关键字”extends“，但是如果extends已经被占用了，可以使用with关键字来混入其他特质。

### 特质的层次

​	特质也可以继承其他类，或混入其他任意个特质，这样特质就是关键字”extends“引入的那个类/特质的子特质。如果没有继承和混入，那么这个特质就是AnyRef类的子特质。AnyRef是所有非值类和特质的超类。当某个类、单例对象或者特质用关键字”extends“混入一个特质，会引入的类或者特质决定的。

​	特质对混入有一个限制条件：那就是要混入该特质的类/单例对象/特质，它的超类必须是待混入特质的超类，或者是待混入特质的超类的子类。举个例子的话，那么香蕉和苹果继承自水果，水果和蔬菜继承自植物。

```scala
class A
class B extends A
class C
trait D extends A
trait E extends B
class Test1 extends D
class Test2 extends A with D
class Test3 extends B with D
class Test4 extends C with D// 这个会报错，error: illegal inheritance; superclass C is not a subclass of the 
							// superclass A
class Test5 extends A with E// 这个会报错，illegal inheritance;superclass A is not a subclass of the 										// superclass B
```

## 第7章 包的导入

```scala
package mytools
class Tool1 { ... }

//从外部来看
import mytools.Tool1
```

​	注意包的名字需要满足目录层次并不是强制的。包的名字惯例上应该小写并且不包含下划线。

```scala
//常用的包
import chisel3._
import chisel3.iotesters.{ChiselFlatSpec, Driver, PeekPokeTester}
```

##  参数化代码块

函数和类可以接受参数这和前面说的一样

```scala
def add1(c: Int):Int = c + 1
class RepeatString(s: String) {
    val repeatedString = s + s
}
```

另外一种就是

```scala
val intList = List(1, 2, 3)
val stringList = inList.map{ i => i.toString } //匿名函数
//stringList = List("1","2","3"),i 被映射为 i.toString
```

## 命名参数和默认参数

考虑下面的方法定义

```scala
def myMethod(count: Int, wrap: Boolean, wrapValue: Int = 24):Unit = { ... }

//如果调用时带上名字，设置可以任意设置参数顺序
myMethod(wrapValue = 24, wrap = false , count = 10)
```

## 遍历操作

### 列表的遍历

```scala
val list = List(1, 2, 3 ,4, 5)
for(elem <- list) println(elem)
list.foreach(elem => println(elem))
```

### 映射的遍历

```scala
val university = Map("XMU" -> "Xiamen University", "THU" -> "Tsinghua University", "PKU" -> "Peking University")
```

​	对应映射进行遍历，我们进行如下的操作：

```scala
for(k <- university.keys) println(k)
for(v <- university.values) println(v)
```

​	同样的，我们可以使用foreach语法来实现对映射的遍历，如下：

```scala
university foreach {case(k,v) => println(k+":"+v)}
```

## Map操作和flatMap操作

### Map操作

​	map操作是针对集合的典型变换操作，它将某个函数应用到集合中的每一个元素，并且产生一个结果集合。比如，给定一个字符串列表，我们可以通过map操作对列表中的每个字符串进行变换，每个字符串都变成大写字母，这样变换后就可以得到一个新的集合。

```scala
val books = List("Hadoop", "Hive", "HDFS")
books.map(s => s.toUpperCase)
```

### flatMap操作

​	flatMap是map的一种扩展。在flatMap中，我们会传入一个函数，对每个输入都会返回一个集合（而不是一个元素），然后flatMap会把生成的多个集合“拍扁”成为一个集合。

```scala
val books = List("Hadoop", "Hive", "HDFS")
books flatMap(s => s.toList)
//返回结果为List('H', 'a', 'o', 'o', 'p', 'H', 'i', 'v', 'e', 'H', 'D', 'F', 'S')
```

## filter操作

​	在实际编程中，我们经常会用到一种操作，遍历一个集合并从中获取满足指定条件的元素组成一个新的集合。

```scala
val university = Map("XMU" -> "Xiamen Univesity", "THU" -> "Tsinghua university", "PKU" -> "Peking University", "SUSTech" -> "Southern University of Science and Technology")
```

​	然后我们使用filter进行过滤操作：

```scala
val universityOfP = university filter {kv => kv._2 startWith "P"}
```

## Reduce操作

​	在Scala中，我们可以使用reduce这种二元操作对集合中的元素进行规约。

​	reduce包括reduceLeft和reduceRight两种操作，前者从集合的头部开始操作，后者从集合的尾部开始操作。有如下的代码：

```scala
val list = List(1, 2, 3, 4, 5)
list.reduceLeft(_ + _)
list.reduceRight(_ - _)
```

​	这两个操作在如上的代码中，对两两元素进行操作，对于加法从左到右还是从右到左是无关紧要的，但是如果是减法操作，从左开始还是从右开始就可能导致不同的结果。

## fold操作

​	fold操作实现和reduce比较类似，但是fold操作需要一个初始的”种子“值开始

```scala
val list = List(1, 2, 3, 4, 5)
list.fold(10)(_*_)
```

## 函数式编程实例

```scala
import java.io.File
import scala.io.Source
object WordCount{
    def main(args: Array[String]): Unit = {
        val dirfile = new File("/usr/local/scala/mycode/wordcount")
        val files = dirfile.listFiles
        for(file <- files) println(file)
        val listFiles = files.toList
        val wordsMap = scala.collection.mutable.Map[String, Int]()
        listFiles.foreach(file => Source.fromFile(file).getLines().foreach(line => line.split(" ").
             foreach(
                 word => {
                     if(wordsMap.contains(word)){
                         wordsMap(word) + =1
                     }else{
                         wordsMap += (word->1)
                     }
                 }
             )                                                             
           )
        )
    }
}
```

