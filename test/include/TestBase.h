

#include "gtest/gtest.h"
#include <iostream>
class TestBase : public testing::Test {
private:
    pid_t childPid;
    std::string path = "/home/caiLinux/ota/compile_out/src/over_the_air/installer_mgr/installer_mgr";
    void StartProcess()
    {
        pid_t pid = fork();
        if (pid > 0) {
            childPid = pid;
            std::cout << "childPid:"<<childPid<<"\n";
        } else if (pid == 0) {
            setenv("PROC_NAME", "child", 1);
            execl(path.c_str(), path.c_str(), NULL, NULL);
            // error
            std::cout << "error\n";
            exit(-1);
        }
    }
    void WaitProcess()
    {
        int status;
        int cpid = waitpid(childPid, &status, 0);
        std::cout << "cpid:"<<cpid<<"\n";
    }

public:
    TestBase(/* args */);
    ~TestBase();
    void SetUp() override {
        //StartProcess();
    }

    void TearDown() override {
        //WaitProcess();
    }
};

TestBase::TestBase(/* args */)
{
}

TestBase::~TestBase()
{
}
