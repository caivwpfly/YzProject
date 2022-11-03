#ifndef STATE_H
#define STATE_H
#include <cstdio>
class Executor;
class State
{
private:
    /* data */
public:
    State() = default;
    ~State() = default;
    virtual int NotifyStart(Executor &inst);
};

#endif