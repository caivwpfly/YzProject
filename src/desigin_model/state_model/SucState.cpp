#include "SucState.h"
#include "Executor.h"

int SucState::NotifyStart(Executor &inst)
{
    printf("this is Suc\n");
    inst.ChangeState(&inst.stateInst.failInst);
    return 0;
}