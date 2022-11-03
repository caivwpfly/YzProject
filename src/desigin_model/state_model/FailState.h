#ifndef FailSTATE_H
#define FailSTATE_H
#include "State.h"
class FailState : public State {
private:
    /* data */
public:
    FailState() = default;
    ~FailState() = default;
    int NotifyStart(Executor &inst)
    {
        printf("this is fail\n");
        return 0;
    }
};

#endif