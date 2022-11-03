#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>        // std::chrono::seconds
#include <memory>
#include <unordered_map>
#include <functional>

using namespace std;

int main()
{
    printf("hello world\n");
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}
