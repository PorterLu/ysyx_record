# Scala

## 变量与常量的定义

```scala
var num = 6 // 变量的定义
val alphabet = "abcdefg"
```

## 条件语句

```scala
//1
if (numberOfKittens > kittensPerHousr){
    println("Too many kittens!!!")
}

//2
if(done){
    println("we are done")
}
else if(numberOfKittens < kittensPerHouse){
    println("more kittens!")
    numberOfKittens += 1
}
else{
    done = true
}

//3
val likelyCharactersSet = if(alphabet.length == 26)
	"english"
else
	"not english"
println(likelyCharactersSet)
```

## 方法（函数）

​	方法使用关键词 `def` 来定义，在这里，我们扩大了定义，也把它们叫做函数。函数的参数用逗号隔开的列表来说明，列表中说明了参数的名字和类型，也可以为其附上一个默认值。返回值需要明确地说明。

​	没有任何参数的Scala函数不需要空括号。这使得在类函数使用变得便利。同时如果参数很少的函数，不加上括号会出现副作用，那么要加上括号。

### 简单函数

``` scala
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

## 列表

```scala
val list1 = List(1, 2, 3)
val list2 = x :: y :: y :: Nil
val list3 = list1 ++ list2      //apend the second list the first one
val m = list2.length			
val s = list2.size
val headOfList = list1.head
val restOfList = list1.tail
val third = list1(2)			//gets the third element of a list
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

## 包和导入

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

## 面向对象

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
## 单例
   什么是单例？顾名思义，它只有一个实例，scala是一种面向对象的变成语言，常量、变量、方法等必须定义在class或者object里面才行。在一个脚本中引用另外一个脚本中的对象的方法是，则需要使用import进行对象对对象的路径的说明。一个单例对象是全局唯一的，具有稳定的路径。
```
object findsum{
	var a = 56
	var b = 21
	def sum(): Int = { return a+b}
}

object Main
{
	def print(){
		printf("The sum is :" + findsum.sum());
	}
	
	def main(args:Array[String])
	{
		print();
	}
}
```
   



