# Sed

​	sed是一种在线编辑器，它一次处理一行的内容。处理时，将当前处理的行存在临时的缓冲区，称之为“模式空间”（pattern space），接着用sed命令处理缓冲区的内容，处理完成后，把缓冲区的内容送往屏幕。接着处理下一行，不断重复，直至文件结束。当然文件的内容没有改变，除非你使用重定向输出。

## sed的参数

```shell
sed [-nefr] [动作]
-n : 使用安静模式，只有经过sed处理的行才会列出来
-e : 直接使用命令模式
-f : 直接将sed的动作写在一个文件内
-r : sed的动作是支持延伸型正则表示法的
-i : 直接修改文件内容，而不是输出到终端

动作：
a ：新增，a的后面可以接字串，而这些字串会在新的一行出现
c ：取代，c的后面接字串，这些字串可以取代n1，n2之间的行
d ：删除
i ：插入，i后面接字串，这些字串会出现在当前的上一行
p ：列印，将选择的数据打印
s ：取代，通常搭配正则语法
```

## 以行单位进行删除/新增

我们创建`test.txt`，文件中为：1，2，3，4，5，6，7，8，9，10，各占一行。

```she
nl test.txt | sed '2,5d' //显示删除2到5行的内容
nl test.txt | sed '3,$d' //显示删除3到最后一行的内容
nl test.txt | sed '2a drink tea' //在第二行前面插入，并显示
nl test.txt | sed '2i drink tea' //在第二行后面插入，并显示
```

## 以行为单位的替换和显示

```shell
nl test.txt | sed '2,5c drink 2-5 tea' //2到5列被换成了一行"drink 2-5 tea"
nl test.txt | sed -n '5,7p' //显示5到7行
```

## 数据的搜索

```
nl test.txt | sed -n '/1/p' //只有1行和第10行被打印了出来
nl test.txt | sed '/1/d' //删除对应的行
nl test.txt | sed -n 's/1/0/g;p' //1都被替换为0，并显示
```

## Sed技巧

1. 选择第5行

```shell
sed -n '5p' test.txt
```

这里`n`表示只输出结果，否则会输出文件本身的内容和结果。

2. 选择2到5行，共4行

```shell
sed -n '2,5 p' test.txt
```

3. `1~2`选择奇数行

```shell
sed -n '1~2 p' test.txt
```

4. `2~2`选择偶数行

```shell
sed -n '2~2 p' test.txt
```

5. `2,+3` 和 `2,5`的效果一样

```shell
sed -n '2,+3 p' test.txt
```

6. `2,$` 从二行到结尾

```shell
sed -n '2,$ p' test.txt
```

7. 范围选择搭配正则表达式

```shell
sed -n '/2/,+3 p' test.txt
```

```shell
sed -n '/^2/,/5/ p' test.txt 
```

8. 操作

```shell
sed -n '2,5 p' test.txt
sed '2, 5 d' test.txt
sed -n '2,5 w output.txt' file
```

9. 替换

![](C:\Users\Porterlu\Desktop\picture\sed_replace.jpg)

```shell
sed '/2/,/5/s/4/3/g' test.txt
```

这个会将2，5之间所有的4替换为3.

10. 查找匹配

查找部分会找到要被替换的字符，这部分可以接受纯粹的字符串，也可以接受正则表达式

```shell
sed 's/1/2/g' test.txt
sed 's/[1, 2, 3]/<&>/g' test.txt	## 可知将1， 2， 3加上<>
```

替换的部分可以使用`$`作为占位符

11. flag参数

* g, 默认只匹配一行中第一次出现的内容，加上g，就可以进行一次全文替换了。
* p，可以使用-n, 这样只会输出匹配的内容
* w，可以输出到一个文件，但是它仅仅输出由变化的行

* i，可以忽略大小写
* e，表述每输出一行，都执行一个命令

```shell
sed 's/^/ls/e' cmd.txt
```

11. 正则表达式

* ^ , 行首
* $, 行尾
* ., 单个字符
* *, 0或者多个匹配
* +, 1或者多个匹配，在正则时记住加\进行说明
* ?, 0或者1个匹配
* {m}, 重复匹配m次
* {m,n}, 重复匹配m到n次
* \, 转义字符
* [0-9], 匹配括号中的任何一个字符
* \b可以匹配一个单词

## 示例

1. 输出长度不小于50个字符的行

```shell
sed -n '/^.{50}p'
```

2. 统计文件中每个单词出现了多少次

```shell
sed 's/ /\n/g' test.txt | sort | uniq -c
```

3. 查找目录中的py文件，删除所有行级注释

```shell
find ./ -name "*.py" | xargs sed -i.bak '/^[ ]*#/d'
```

4. 查看第5-7和10-13行

```shell
sed -n -e '5,7p' -e '10,13p' test.txt
```



