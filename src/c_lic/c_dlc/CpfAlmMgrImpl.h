#ifndef CPFALMMGRIMPL_H
#define CPFALMMGRIMPL_H

#include "CpfAlmMgr.h"
class CpfAlmMgrImpl : public CpfAlmMgr
{
private:
    /* data */
public:
    CpfAlmMgrImpl(/* args */) = default;
    ~CpfAlmMgrImpl() = default;
    int ExecAlm() override;
};

#endif