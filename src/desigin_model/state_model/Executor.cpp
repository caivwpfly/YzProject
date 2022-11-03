#include "Executor.h"
using namespace std;
Executor::Executor()
{
    state = &stateInst.sucInst;
    isRunning = true;
    isStateChange = false;
}
Executor::~Executor()
{
    EndThread();
}
void Executor::NotifyEnd()
{
    isRunning = false;
    isStateChange = true;
    std::unique_lock<std::mutex> lk(mutChangeStateCv);
    changeStateCv.notify_all();
}
void Executor::EndThread()
{
    printf("this is EndThread\n");
    NotifyEnd();
    if (backThread.joinable()) {
        printf("wait join\n");
        backThread.join();
        printf("end\n");
    }
}
void Executor::WaitStateChange()
{
    std::unique_lock<std::mutex> lk(mutChangeStateCv);
    while (!isStateChange) {
        changeStateCv.wait(lk);
    }
    isStateChange = false;
}
void Executor::BackProcess(uint32_t para)
{
    while (isRunning) {
        printf("this is process\n");
        WaitStateChange();
        printf("StateChange\n");
    }
}
void Executor::CreatThread()
{
    backThread = std::thread(&Executor::BackProcess, this, 1);
}
void Executor::ChangeState(State *currentState)
{
    lock_guard<std::mutex> lk(mutState);
    state = currentState;
    isStateChange = true;
    changeStateCv.notify_all();
}

State* Executor::GetState()
{
    lock_guard<std::mutex> lk(mutState);
    return state;
}

void Executor::Start()
{
    auto currentState = GetState();
    currentState->NotifyStart(*this);
}
