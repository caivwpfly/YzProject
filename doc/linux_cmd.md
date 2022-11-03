### gdb
1. 简介
	+ http://www.sourceware.org/gdb/
1. 调试测试程序
	+ g++ -g cpptest.cpp -o run
	+ b(break) test_gdb
	+ info b
	+ r(run)
	+ s(step)
	+ bt(backtrace)
	+ p(print)
	+ n(next)
	+ c(continue)
	+ q(quit)
1. 调试正在运行的程序
	+ attach 进程id 
1. 检查数据
	1. info proc map 查看进程内存空间
	1. info registers 查看寄存器
	1. find 0x11111111，0x22222222，数据 查找地址范围内的数据
	1. x(examine) /xg 地址 查看内存地址里的内容 16进制 64位显示
	1. info symbol 地址 查看对应符号表
1. gdb相关调用
    + gdb调试coredump文件 ：gdb 进程名 core文件
    + gdb调试运行中的程序 ：gdb attach 进程id 
    + gdb 生成指定core文件：gdb进入后，gcore 

### linux 命令
1. objdump -s -d main.o
1. readelf -h readelf -S
1. file
1. gdb
```
ulimit -c unlimited
cat /proc/sys/kernel/core_pattern
```
1. sudo passwd root
1. signal
https://man7.org/linux/man-pages/man7/signal.7.html
1. kill -l
查询信号名字
1.--gtest_list_tests 列出所有用例
1.--gtest_filter=*.test_decorator 过滤用例 
### gcc编译
1. fno-exceptions ：编译选项不能使用try catch
1. asan
-fsanitize=address：开启内存越界检测
1. cppcheck
http://cppcheck.net/


### vscode 
1. ctrl + k + z 聚焦编辑
1. alt + z 自动换行
1. alt + up 移动行
1. crtl + /
1. F2 重命名变量

1. 自动输入
设置下面配置用户补全代码
自动代码补全 头文件
```
	"C C++ Header": {
		"scope": "c, cpp",
		"prefix": "header",
		"description": "Add #ifndef, #define and #endif",

		"body": [
			"#ifndef ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
			"#define ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
			"",
			"$0",
			"",
			"#endif"
		]
	}
```

### 设计模式

创建型模式
1. 工厂模式
1. 单例模式

结构型模式
1. 装饰器模式
1. 代理模式

行为型模式
1. 状态模式
1. 策略模式
1. 命令模式


### c++
1. 查阅网站
http://www.cplusplus.com/reference/
1. 格式符
%p  指针
1. ptr.use_count() 当共享指针置为空时，计数减少

### 开源库
1. gtest
https://google.github.io/googletest/
1. gcov lcov
http://ltp.sourceforge.net/coverage/lcov.php
1. Fuzz
使用fuzz测试用具进行遗传算法测试
1. boost(interprocess)
https://www.boost.org/
1. fastdds
https://fast-dds.docs.eprosima.com/en/latest/fastdds/getting_started/getting_started.html
1. curses库
1. gdbm库

