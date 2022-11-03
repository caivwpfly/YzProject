#ifndef CPFALMMGR_H
#define CPFALMMGR_H

#include <memory>
class CpfAlmMgr
{
private:
    /* data */
public:
    CpfAlmMgr(/* args */) = default;;
    virtual ~CpfAlmMgr() = default;;
    static std::shared_ptr<CpfAlmMgr> GetInst();
    virtual int ExecAlm() = 0;
};

#endif