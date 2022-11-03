#ifndef STATEINST_H
#define STATEINST_H
#include "FailState.h"
#include "SucState.h"

class StateInst
{
private:
    /* data */
public:
    StateInst() = default;
    ~StateInst() = default;
    SucState sucInst;
    FailState failInst;
};

#endif