#ifndef SUCSTATE_H
#define SUCSTATE_H

#include "State.h"

class SucState : public State {
private:
    /* data */
public:
    SucState() = default;
    ~SucState() = default;
    int NotifyStart(Executor &inst);
};

#endif