### 异常没有被捕获导致SIGABRT信号，引起coredump
#### 调用栈core文件
```
Program terminated with signal SIGABRT, Aborted.
#0  0x00007f0f9b4e55fb in raise () from /lib64/libc.so.6
(gdb) bt
#0  0x00007f0f9b4e55fb in raise () from /lib64/libc.so.6
#1  0x00007f0f9b4e69ff in abort () from /lib64/libc.so.6
#2  0x00007f0f9b8a5d11 in __gnu_cxx::__verbose_terminate_handler() () from /lib64/libstdc++.so.6
#3  0x00007f0f9b8a2b27 in ?? () from /lib64/libstdc++.so.6
#4  0x00007f0f9b8a2b4a in std::terminate() () from /lib64/libstdc++.so.6
#5  0x00007f0f9b8a30b7 in __cxa_throw () from /lib64/libstdc++.so.6
#6  0x00007f0f9b8d84b8 in std::__throw_out_of_range_fmt(char const*, ...) () from /lib64/libstdc++.so.6
#7  0x00007f0f9b940730 in std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(unsigned long, char const*) const () from /lib64/libstdc++.so.6
#8  0x00007f0f9b944884 in std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const () from /lib64/libstdc++.so.6
#9  0x00000000004011c8 in main ()
```
### 测试代码
```
#include <string>
#include <csignal>
int main()
{
    std::string t;
    t.substr(100,1);
    return 0;
}
```

### 问题定位
1. sudo su 解决 su切不了root权限

### 运行命令

1. 编译
```
./build.sh st
```
1. 运行st
```
./build.sh st run --gtest_filter=*.test_scence
```
