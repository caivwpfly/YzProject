#include "CpfAlmMgrImpl.h"
#include "alm/alm.h"

std::shared_ptr<CpfAlmMgr> CpfAlmMgr::GetInst()
{
    static std::shared_ptr<CpfAlmMgrImpl> inst = std::make_shared<CpfAlmMgrImpl>();
    return inst;
}

int CpfAlmMgrImpl::ExecAlm()
{
    AlmFunc1(1);
    return 0;
}