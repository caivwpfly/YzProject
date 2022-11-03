#include <string>
#include <csignal>
#include <memory>
#include <iostream>

using namespace std;
namespace A {
void test_gdb()
{
    cout << "i am A\n";
    int32_t value = 10;
    value = 100;
    cout << "i am gdb\n";
}
}

namespace B {
void test_gdb()
{
    cout << "i am B\n";
    int32_t value = 10;
    value = 100;
    cout << "i am gdb\n";
}
}

int main()
{
    cout << "main\n";
    A::test_gdb();
    return 0;
}
