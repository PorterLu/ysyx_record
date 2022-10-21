# Scala 和 Chisel3的安装

[toc]

## Scala的下载和安装

### java的下载和安装

1. ```markdown
   进入java的官网下载相关的包，如 jdk-8u333-linux-x64.tar.gz
   ```

2. ```shell
   mkdir /usr/java
   cd /usr/java
   ```

3.  ```shell
    在创建的目录下执行
    tar -zxvf jdk-8u333-linux-x64.tar.gz
    ```

4. ```shell
   vi /etc/bash.bashrc
   设置如下环境变量
   JAVA_HOME=/usr/java/jdk1.8.0_333    
   JRE_HOME=/usr/java/jdk1.8.0_333/jre     
   CLASS_PATH=.:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar:$JRE_HOME/lib
   PATH=$PATH:$JAVA_HOME/bin:$JRE_HOME/bin
   export JAVA_HOME JRE_HOME CLASS_PATH PATH
   ```

5. ```shell
   source /etc/bash.bashrc
   ```

### Scala的下载和安装

```shell
可以到官网下载包，但是这里使用命令直接下载
sudo apt-get install scala
```

#### scala的使用

```scala
//建立文件 hello.scala,并保存
println("Hello world");
//之后键入 scala hello.scala就可以执行
```

#### 编译非脚本文件

```scala
//编写非脚本文件hello.scala
class Hello {
  val hw = "Hello, world!"
  def display() = println(hw)
}

//使用scalac来编译文件会生成一个Hello.class
//在这文件所在目录打开scala解释器
val hello = new Hello
hello.display //成功执行
//键入:q退出
```

## Chisel3的下载和安装

### sbt的下载和安装

```shell
echo "deb https://dl.bintray.com/sbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 642AC823
sudo apt-get update
sudo apt-get install sbt
sbt sbtVersion #可以检查sbt的版本
```

### Chisel3的下载和安装

```shell
git clone https://github.com/freechipsproject/chisel-template
cd chisel-template
sbt complie
sbt test
```

### Chisel的使用

​	chisel-template可以改成想要的名字如chisel，该文件下src目录用于存放源代码，src中有两个目录，一个是main另一个是test，main中存放Chisel设计部分，test用于存放测试文件。main下面又有resources和scala两个目录，其中scala中可以创建自定义的工程文件，而resources目录用于存储和Chisel互动的Verilog等外部份文件。

```scala
// AND.scala
package test
 
import chisel3._
import chisel3.experimental._
 
class AND extends RawModule {
  val io = IO(new Bundle {
    val a = Input(UInt(1.W))
    val b = Input(UInt(1.W))
    val c = Output(UInt(1.W))
  })
 
  io.c := io.a & io.b
}
```

```scala
// ANDtest.scala
package test
 
import chisel3._
 
object testMain extends App {
  Driver.execute(args, () => new AND)
}
```

```shell
sbt "test:runMain test.testMain --target-dir generated/and"
#在generated下就可以看见生成的verilog代码
```

