#ifndef EXECUTOR_H
#define EXECUTOR_H
#include "State.h"
#include "StateInst.h"
#include <mutex>
#include <thread>
#include <atomic>
#include <condition_variable>
class Executor
{
private:
    /* data */
    State* GetState();
    void CreatThread();
    void BackProcess(uint32_t para);
    void EndThread();
    void WaitStateChange();
    void NotifyEnd();
    std::mutex mutState;
    std::thread backThread;
    std::atomic<bool> isRunning;
    std::atomic<bool> isStateChange;
    std::condition_variable changeStateCv;
    std::mutex mutChangeStateCv;
public:
    Executor();
    ~Executor();
    StateInst stateInst;
    State *state;
    void ChangeState(State *currentState);
    void Start();

};

#endif

