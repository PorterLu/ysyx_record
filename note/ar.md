## ar命令

​	ar命令是一个Linux的备份压缩命令，可以将建、修改备存文件（archive），或者从备存文件中抽取成员文件。  

`-d`: 删除备存文件中的成员文件。

`-p`: 显示备存文件中成员文件的内容。

`-r`: 将文件插入到备存文件中去。

`-s`: 等价如ranlib 。静态库文件需要使用 `ar`来创建和维护。当给静态库增建一个成员时，`ar`可直接 将需要增加的.o文件简单的追加到静态库的末尾。之后当我们使用这个库进行连接生成可执行文件时，链接程序 `ld`却提示错误，这可能是，主程序使用了之 前加入到库中的.o文件中定义的一个函数或者全局变量，但连接程序无法找到这个函数或者变量。 原因是：之前我们将编译完成的.o文件直接加入到了库的末尾，却并没有更新库的有效符号表。连接程序进行连接时，在静态库的符号索引表中无法定 位刚才加入的.o文件中定义的函数或者变量。这就需要在完成库成员追加以后让加入的所有.o文件中定义的函数有效，完成这个工作需要使用另外一个 工具“ranlib”来对静态库的符号索引表进行更新。  

`-t`:显示备存文件中包含的文件。

`-x`:自备存文件中取出文件。  

使用：ar -rcs libstr.a string.o