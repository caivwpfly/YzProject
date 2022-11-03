#include <unordered_map>
#include <memory>
#include <vector>
class TaInstMgr
{
private:
    std::unordered_map<uint32_t, std::shared_ptr<int>> instPool;
public:
    TaInstMgr(/* args */);
    ~TaInstMgr();
    TaInstMgr& GetInst();
    std::pair<int, std::vector<uint8_t>> GetServiceMsg(const uint32_t &ta, const std::string &nm, const std::vector<uint8_t> &req);
    void ReleaseInst(const uint32_t &ta);
};

TaInstMgr::TaInstMgr(/* args */)
{
}

TaInstMgr::~TaInstMgr()
{
}

TaInstMgr& TaInstMgr::GetInst()
{
    static TaInstMgr inst;
    return inst;
}

std::pair<int, std::vector<uint8_t>> TaInstMgr::GetServiceMsg(const uint32_t &ta, const std::string &nm, const std::vector<uint8_t> &req)
{
    std::pair<int, std::vector<uint8_t>> ans;
    if (instPool.count(ta) == 0) {
        instPool[ta] = std::make_shared<int>();
    }
    //instPool[ta]->指定函数
    ans.first = 0;
    return ans;
}

void TaInstMgr::ReleaseInst(const uint32_t &ta)
{
    instPool.erase(ta);
}
