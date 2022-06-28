## PA1

### 项目构建与Makefile

NEMU的Makefile具备如下功能：

#### 与配置系统相关联

​	通过包含 `nemu/include/config/auto.conf` , 与kconfig生成的变量进行关联，因此在menuconfig更新配置选项后，Makefile的行为可能也会发生变化。

#### 文件列表
`menuconfig `和 `filelist.mk` 如何配置进行有选择的编译？`menuconfig` 的配置对如下的四个变量进行维护：

* `SRCS-y` ：参与编译的源文件候选集合
* `SRCS-BLACKLIST-y` ：不参与编译的源文件的黑名单集合
* `DIRS-y`：参与编译的目录集合，该目录下的所有文件都会被加入到 `SRCS-y`
* `DIRS-BLACKLIST-y`: 不参与编译的目录集合，该目录下的所有文件都会加入到 `SRCS-BLACKLIST-y`

​	最终通过这个四个变量的汇总，可以得到在 `SRCS-y` 中但不在`SRCS-BLACKLIST-y`中的源文件，来作为最终参与编译的源文件的集合。`menuconfig` 中还有还可以和布尔选项进行关联：

```makefile
BLACKLIST-$(CONFIG_TARGET_AM) += src/monitor/sdb
# 如果我们在menuconfig中选择了 TARGET_AM 相关的值时，
# 在nemu/include/config/auto.conf中会形成 CONFIG_TARGET_AM = y
# 的代码，于是就形成DIRS-BLACKLIST-y += src/monitor/sdb 
```

#### 编译和链接

在Makefile的编译规则在 `nemu/scripts/build.mk` 中定义：

```makefile
$(OBJ_DIR)/%.o: %.c
  @echo + CC $<
  @mkdir -p $(dir $@)
  @$(CC) $(CFLAGS) -c -o $@ $<
  $(call call_fixdep, $(@:.o=.d), $@)
```

我们可以键入`make -nB` ，它会让`make`程序以“只输出命令但不执行”的方式强制构建目标，运行后，可以看到：

```shell
gcc -O2 -MMD -Wall -Werror -I/home/user/ics2021/nemu/include
-I/home/user/ics2021/nemu/src/engine/interpreter -I/home/use
r/ics2021/nemu/src/isa/riscv32/include -O2    -D__GUEST_ISA__
=riscv32  -c -o /home/user/ics2021/nemu/build/obj-riscv32-nem
u-interpreter/src/utils/timer.o src/utils/timer.c
```

于是我们得到了：

``` 
$(CC) 就是gcc
$@ 为目标文件 /home/user/ics2021/nemu/build/...../timer.o
$< 为源文件   src/utils/timer.c
$(CFLAGS) -> gcc参数
```

### 准备第一个客户程序

​	Nemu是用于执行客户程序的程序，但是客户程序一开始不在Nemu中，我们通过monitor来完成这件事。Nemu开始运行的时候，会调用`init_monitor` 函数执行一些和monitor相关的初始化工作。

#### 条件编译

​	Kconfig会根据配置选项的结果在 `nemu/include/generated/autoconf.h` 中定义一些形如 CONFIG_xxx 的宏，我们可以在C代码中通过条件编译的功能对这些宏进行测试，来判断是否编译某些代码。

​	为了编写更紧凑的代码，我们在 `nemu/include/macro.h`中定义了一些专门用来对宏进行测试的宏，例如 `IFDEF(CONFIG_DEVICE, init_device());` 表示如果定义`CONFIG_DEVICE`, 才会调用`init_device()`函数；而`MUXDEF（CONFIG_TRACE, "ON", "OFF") ` 则表示如果定义了 `CONFIG_TRACE` 则预处理的结果为 `ON`。

​	宏的工作原理如下：

红嵌套的展开规则：

* 一般的展开规律像函数的参数一样：先展开参数，再分析函数，即由内向外展开
* 当宏中有 `#` 运算符时，不展开参数
* 当宏中有 `##` 运算符时，先拼接再展开
* `##` 运算符用于将参数连接到一起，预处理过程把`##` 运算符两侧的参数合并成一个符号
* `#` 是将宏参数转化为字符串
* 宏替换是直接替换，注意加上括号保证优先级

![](C:\Users\Porterlu\Desktop\picture\macro_nest.jpg)

```c
//首先有宏,选择第二个
#define CHOOSE2nd(a, b, ...) b

//扩展第一个宏, 会选择b
#define MUX_WITH_COMMA(contain_comma, a, b) CHOOSE2nd(contain_comma a, b)

//扩展第二个宏，依旧选择b
#define MUX_MACRO_PROPERTY(p, macro, a, b) MUX_WITH_COMMA(concat(p, macro), a, b)

#define __P_DEF_0 X,
#define __P_DEF_1 X,
#define __P_ONE_1 X,
#define __P_ZERO_0 X,

#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)
```

```
这里分析MUXDEF(CONFIG_DEVICE, "ON", "OFF"),并作假设定义CONFIG_DEICE为1

1.这里最内层的宏就是MUXDEF,对当前层进行一次宏展开，MUX_MACRO_PROPERTY(__P_DEF_, 1, "ON", "OFF")
2.这里最内层的宏就是MUX_MACRO_PROPERTY,对当前层进行一次宏展开，MUX_WITH_COMMA(concat(__P_DEF_, 1), "ON", "OFF")
3.这里最内层的宏是concat，我们对其进行宏展开，MUX_WITH_COMMA(concat_temp(__P_DEF_,1), "ON", "OFF")
4.这里最内层的宏就是concat_temp于是再一次进行宏展开，MUX_WITH_COMMA(__P_DEF_ ## 1, "ON", "OFF")
5.当前层存在 ##，先拼接再展开，于是MUX_WITH_COMMA(__P_DEF_1, "ON", "OFF")
6.展开，CHOOSE2nd(X, "ON", "OFF")
7.得到结果"ON"
```

#### 为什么全部是函数

​	这是面向过程编程思想的精髓——”自顶向下，逐步求精“

#### init_monitor解析

​	这里`ics2021`相较于 `ics2015` 进行更细致的解耦，分出了更多的函数。接下来进行逐个的分析。

```c
static int parse_args(int argc, char *argv[]){
    const struct option table[] = {
        {"batch" , no_argument, NULL ,'b'},
        {"log", required_argument, NULL, 'l'},
        {"diff", required_argument, NULL, 'd'},
        {"port", required_argument, NULL, 'p'},
        {"help", no_argument, NULL, 'h'},
        {0	, 0	, NULL, 0}
    }
    int o;
    while((o = getopt_long(argc, argv, "-bhl:d:p:",table, NULL)) != -1)
    {
        switch(o)
        {
            case 'b': sdb_set_batch_mode(); break;
            case 'p': sscanf(optarg, "%d", &difftest_port);break;
            case 'l': log_file = optarg; break;
            case 'd': diff_so_file = optarg; break;
            case 1: img_file = optarg; return 0;
            default:
                printf("Usage: %s [OPTION...] IMAGE [args]\n\n",argv[0]);
                printf("\t-b,--batch              run with batch mode\n");
        		printf("\t-l,--log=FILE           output log to FILE\n");
        		printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        		printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        		printf("\n");
        		exit(0);
    	}
  	}
  	return 0;
}
```

​	分析 `getopt_long`， 这里 `getopt_long` 接受5个参数 `b`, `h`, `l`, `d` , `p` ,其中`l` 和 `d` , `p`接受参数 , 1表示没有选项的剩余部分，这个部分nemu将其设置为镜像文件。

```c
void init_rand() {
  srand(MUXDEF(CONFIG_TARGET_AM, 0, time(0)));
}
```

​	`init_rand`中根据时间设置了一个随机种子。

```c
void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}
```

​	`init_log` 函数打开一个文件用于记录指令的执行

```c
void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}
```

​	`init_mem` 申请了一份的物理内存，并将其内容随机化，最后输出内存的地址范围

#### 准备客户程序

​	`monitor` 会调用 `init_isa` ，将一个内置的客户程序读入到内存中。

```c
static const uint32_t img [] = {
    0x00000297,  //auipc t0,0 
    0x0002b823,  //sd zero,16(t0)
	0x0102b503,	 //ld a0,16(t0)
    0x00100073,  //ebreak
    0xdeadbeff,  //some data
};

static void restart() {
    cpu.pc = RESET_VECTOR;
    cpu.gpr[0] = 0;
}

void init_isa() {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    restart();
}
```

​	其中`RESET_VECTOR` 等于 `(CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)` ,其中`CONFIG_MBASE` 在 RISC-V 中为`0x80000000 `, `CONFIG_PC_RESET_OFFSET` 为 `0` ，其中`guest_to_host`为：

```c
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
```

​	我们获得一个 `paddr  - CONFIG_MBASE` 为物理地址相对于RISC-V中的基址的偏移，所以返回的就是要存储在模拟内存中偏移，最后`memcpy`的功能就是将 `img`的代码拷贝到模拟内存中。在Nemu中，我们创建了一个128MB的模拟内存，就是定义在`nemu/src/memory/paddr.c` 中定义的 `pmem` 。

​	最终我们初始化寄存器，将`pc` 设在起始地址，同时0号寄存器设置为0，我们就可以开始运行程序了。如果在nemu启动时设置了镜像文件，返回到`init_monitor` 中，继续调用`load_img` ，将会把一个有意义的客户程序从镜像文件读入到内存，覆盖刚才的默认程序。如下是默认程序的执行结果

![](C:\Users\Porterlu\Desktop\picture\PA1_start.png)

```c
static long load_img(){
    if(img_file == NULL){
        Log("No image is given. Use the default build-in image.");
        return 4096;
    }
    
    File *fp = fopen(img_file, "rb");
    Assert(fp, "Can not open '%s'",img_file);
    
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    
    Log("The image is %s, size = %ld", img_file, size);
    
    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);
    
    fclose(fp);
    return size;
}
```

​	`load_img` 的过程如下，如果没有指定`img`,那么直接使用默认的客户程序。否则，我们打开`img_file` , 然后在`size`中记录镜像文件的大小，然后我们重新设置文件读写指针，将镜像文件读入模拟内存。

#### 运行第一个客户程序

​	我们暂时跳过`init_difftest` ，我可以看到函数`init_sdb` 

```c
void init_sdb(){
    //初始化正则表达式
    init_regex();
    
    //初始化watchpoint池
    init_wp_pool();
}
```

​	初始化正则表达式中，我们编译所有我们使用到的规则。

```c
ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
```

​	我们编译得到结果存储在一个`regex_t` 数组， 就可以在使用时直接调用 `regexec` 直接进行匹配，直接执行`regexec(&re[i], e + position, 1, &pmatch, 0)` ，第一个参数是匹配的规则，第二个参数是要去匹配的字符串，第三个是匹配的第几个，通过第三个参数可以得到匹配到字符相对于起始位置的偏移。

​	在 `init_wp_pool` 中，对watchpoint池进行了初始化，它执行了如下的操作：

```c
void init_wp_pool()
{
    int i;
    for(i = 0; i < NR_WP; i++)
    {
		wp_pool[i].NO = i;
        wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i+1]);
    }
    
    head = NULL;
    free_ = wp_pool;
}
```

​	我们设定了一个大小为32的watchpoint数组，初始化的过程为将其一个一个相联形成一个链表作为free队列，同时设置一个已用队列初始为空。

​	到这里`init_monitor` 就已经执行完了，我们接着执行主函数中的 `engine_start` , 如果没有定义`CONFIG_TARGET_AM` ，这个函数将执行`sdb_mainloop` 即simple debugger的主循环，它函数体如下：

```c
void sdb_mainloop(){
    if(is_batch_mode){
        cmd_c(NULL);
        return;
    }
    
    for(char *str; (str = rl_gets()) != NULL; ){
        char *str_end = str + strlen(str);
        char *cmd = strtok(str, " ");
        if(cmd == NULL) { continue; }
        
        char *args = cmd + strlen(cmd) + 1;
        if(args >= str_end){
            args = NULL;
        }
    
	    int i;
    	for(i = 0; i < NR_CMD, i++){
        	if(strcmp(cmd, cmd_table[i].name) == 0){
            	if(cmd_table[i].handler(args) < 0){return;}
            	break;
        	}
    	}
        if(i == NR_CMD) {printf("Unknown command '%s'\n", cmd);}
    }
}
```

`rl_gets`是对readline的封装，它的函数体如下：

```c
static char* rl_gets(){
    static char* line_read = NULL;
    
    if(line_read){
        free(line_read);
        line_read = NULL
    }
    line_read = readline("(nemu) ");
    if(line_read && *line_read){
        add_history(line_read);
    }
    
    return line_read;
}
```

​	readline的参数是一个字符串，readline会先输出这个字符串，然后再进行一行数据的读取，注意返回的字符串指针是动态分配的，不再使用的话记得free(),  这时我们可以实现像bash样的按tab自动补齐，add_history后可以上下提示历史命令，编译时要记得加上 `-lreadline`。

​	读取一行的数据后，我们可以用`strtok`进行处理，`strtok` 的原型如下`strtok(char* str, char* delim)`, `strtok` 会根据`strtok` 进行分割，之后调用可以将第一个参数传入`NULL`,默认当作上一次使用后指针指向的位置。

​	我们将得到的第一个字符串当作命令，在`cmd_table`进行匹配，然后执行对应的`handler`函数。

​	而调用的 `handler`中有一个`cmd_c`, 这个 `handler` 中调用了`cpu_exec(-1)`, 在无符号中 `-1` 表示了最大的整数，这个整数够程序一直执行。nemu中通过`nemu_trap` 劫持程序的结束，因为我们没有实现进程结束操作系统的处理部分。

#### 调试宏

* `Log` 是 `printf` 的升级版，专门用于输出调试信息，会输出`Log` 所在的源文件、行号和函数，可以很方便地定位代码的位置。

```c
#define Log(format , ...)\
	_Log(ANSI_FMT("[%s:%d %s]" format, ANSI_FG_BULE) "\n",	\
	__FILE__, __LINE__, __func__, ## __VA_ARGS__)
```

​		于是我们就有了如下宏展开后的代码， 于是我们就可用蓝色输出调试信息。

```c
_Log(ANSI_FG_BULE  "[%s:%d %s]" format  ANSI_FG_NONE) __FILE__, __LINE__, __func__ ,## __VA_ARGS__
```



* `Assert`是`assert` 的升级版，测试条件为假，在assertion fail之前可以输出一些信息。 
* `panic`用于输出并结束程序

### Nemu调试功能 

#### watchpoint

​	简易调试器允许用户同时设置多个监视点，上一部分的笔记已经对watchpoint进行了介绍，这一部分介绍watchpoint是如何发挥作用的。

```c
void cpu_exec(uint64_t n){
    g_print_step = (n < MAX_INST_TO_PRINT); //如果为true的话，打印指令
    switch(nemu_state.state){				//判断程序是否已经执行结束
        case NEMU_END: case NEMU_ABORT:
        	printf("Program execution has ended. To restart the program,exit NEMU and run again.\n");
        	return ;
        default: nemu_state.state = NEMU_RUNNING;
    }
    
    uint64_t timer_start = get_time();
    
    execute(n);
    
    uint64_t timer_end = get_time();		
    g_timer += timer_end - timer_start;		//计算执行时间
    
    switch(nemu_state.state){
        case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
        case NEMU_END: case NEMU ABORT:
      			Log("nemu: %s at pc = " FMT_WORD,(nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) : (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),nemu_state.halt_pc);
      	// fall through
    	case NEMU_QUIT: statistic();
    }
}
```

```c
static void execute(uint64_t n){
	Decode s;
    for(;n>0;n--){
        exec_once(&s, cpu.pc);
        g_nr_guest_inst ++;								//客户进程执行了多少条的指令
        trace_and_difftest(&s, cpu.pc);					//进行对执行劫夺的检查
        if(nemu_state.state != NEMU_RUNNING) break;		//如果状态已经被更改，则跳出，交由cpu_exec判断
        IFDEF(CONFIG_DEVICE, device_update());			//设备更新
    }
}
```

```c
static void exec_once(Decode *s, vaddr_t pc){
	s->pc = pc;
    s->snpc = pc;
    isa_exec_once(s);									//执行操作与指令集相关
    cpu.pc = s->dnpc;									
#ifdef CONFIG_ITRACE
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);	//打印pc值	
    int ilen = s->snpc - s->pc;									//得知指令的长度
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst.val;				//设置指令的值
    for(i = ilen - 1; i >= 0; i--){
        p += snprintf(p, 4, " %02x", inst[i]);					//在log文件中打印指令的binary
    }
    
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);				
    int space_len = ilen_max - ilen;
    if(space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;						
    memset(p, ' ', space_len);
    p += space_len;
    
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p, ,MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);											//记录反汇编信息
#endif
}
```

```c
static void statistic(){
    IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
    Log("host time spent =" NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = ", NUMBERIC_FMT, g_nr_guest_inst);
    if(g_timer > 0) Log("simulation frequency ="NUMBERIC_FMT "inst/s", g_nr_guest_inst * 1000000/ g_timer);
    else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}
```

```c
static void trace_and_difftest(Decode *_this, vaddr_t dnpc){
#ifdef CONFIG_ITRACE_CND
    if(ITRACE_COND) {log_write("%s\n", _this->logbuf);}
#endif
    if(g_print_step) {IFDEF(CONFIG_ITRACE, puts(_this->logbuf));}
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT				//根据Kconfig的配置设置检查watchpoint
    if(check_wp())
        nemu_state.state = NEMU_STOP;
#endif
}
```

#### 表达式求值

![](C:\Users\Porterlu\Desktop\picture\中缀树.png)

这个eval函数就是用于解析这个过程，函数本身有许多细节不再考虑，我们讲讲它的原理：
* int eval(int left, int right, bool& success)。left和right代表了token数组的index，left到right就代表了要解析的表达式的范围，success用记录解析过程中是否发生了错误。
* 递归的出口,当right == left说明子表达式只有一个token，那么如果表达式本身没有问题，那么它应该是一个操作数，根据tokens[left]中的str可以知道它所代表的值，如$eax就是cpu.eax的值。
* right < left, 这是发生了错误,直接回退。
* 如果left是一个‘('，right是一个')',我们可以直接调用eval(left+1,right-1,success)
* left<right时，我们需要找到一个运算符使得整个表达式分为左右两个部分，根据中缀树的性质，这个运算符在整个表达式中应该最后运算，所以我们应该找到最低优先级的运算发。于是我们从右往左遍历，设置一个prior = 15，去找是否有15优先级的运算符，没有的话 prior-- 再试一次。找到的话，就把这个运算符作为dominator，以它为界划分为左右两个。

这里为了实现对括号的判断做了已下的几步：

* 首先都用`check_parentheses` 首先对被一对 `(`,`)`包裹的表达式进行判断，判断这个括号是否能去掉，做法就是判断这对括号内部的括号能否完成匹配，具体来说就是一个从右往左的扫描，总是遇见一个`)`对其压栈，遇见一个`(`进行匹配，最后判断栈内是否为空。
* 如果无法直接去掉最外面的括号，进行一个符号扫描时，遇到第一个括号开始进行括号匹配，忽略直到把第一个遇到的`)`匹配完成的`(` 之间的所有内容。

#### 测试表达式求值

```c
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned long result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

int main(int argc, char *argv[]) {
  int seed = time(0);				//设置随机种子
  srand(seed);						
  int loop = 1;						//获取循环次数，默认1次，即生成一个表达式
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr(0);				//随机生成表达式
    gen('\0');						//结尾是一个'\0'

    string_index = 0;				//重新设置字符指针
    string_index_expr = 0;

    if(!success)					//将递归过深和表达式过长的生成的式子去掉
    {
      success = true;
      continue;
    }

    if(strlen(buf) > 60000)			//再过滤一次最终生成的表达式
      continue;

    sprintf(code_buf, code_format, buf);


    FILE *fp = fopen("/tmp/.code.c", "w");		
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");	//编译

    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");	//执行程序，获取输出
    if(errno)						//如果发生一些异常，直接去除
    {
      perror("error occur\n");
      continue;
    }
    assert(fp != NULL);

    uint64_t result;			//获取生成的结果
    if(fscanf(fp, "%lu", &result)){printf("%lu %s\n", result, buf_expr);}
    pclose(fp);

  }
  return 0;
}
```

```c
static void gen_rand_expr(int depth) {
  if(depth > 20 || string_index > 60000)	//递归过深，字符过长
  {
    success = false;
    return;
  }

  int n = rand();							//表达式递归
  switch(n%3)
  {
    case 0: 
    {
      gen_num();  
    }
    break;
    case 1: 
    {
      gen('(');		
      gen_rand_expr(depth+1);				//子表达式
      gen(')'); 
    }
    break;
    default: 
    {
      gen_rand_expr(depth+1); 				//子表达式
      gen_rand_op();						//操作符
      gen_rand_expr(depth+1);				//子表达式
    }
  }
}
```

```c
//下面是测试程序
FILE *file = fopen("out.txt","r");
char tmp[65536];
char *expression;
char *ans;
bool success = true;
uint64_t value;
int count = 0;
while(fgets(tmp, sizeof(tmp), file))		//不断地读一行数据
{
    ans = strtok(tmp," ");					//获取c计算结果
    expression = strtok(NULL," ");			//获取表达式
    *(expression + strlen(expression)-1) = '\0';
    sscanf(ans,"%lu",&value);				
    uint64_t result = expr(expression, &success); //计算表达式
    if(success == true)						//过滤，主要防除0
    {
        if(result == value)					//计算结果和c程序计算的一致
        {
            count ++;
            printf(ANSI_FMT("%s result is %lu == ans %lu\n", ANSI_FG_GREEN), expression, result, value);
        }
        else
        {
            printf(ANSI_FMT("%s result is %lu != %lu\n", ANSI_FG_RED), expression,result, value);
        }
    }
}
```

![](C:\Users\Porterlu\Desktop\picture\expr_test.png)

最后PA1的框架如下：

![](C:\Users\Porterlu\Desktop\picture\PA1_structure.png)
