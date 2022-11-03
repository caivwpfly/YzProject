
#include "TestBase.h"
#include "MockAlm.h"
#include "CpfAlmMgr.h"
using testing::_;
using testing::NiceMock;
using testing::Invoke;
class TestVlc : public TestBase {
public:
    TestVlc() = default;
    ~TestVlc() = default;
};

TEST_F(TestVlc, test_scence)
{
    EXPECT_CALL(MockAlm::GetInst(), func1(_))
        .WillOnce(Invoke([](int a) {
            std::cout << "expect stub\n";
        }));
    auto ret = CpfAlmMgr::GetInst()->ExecAlm();
    EXPECT_EQ(0, ret);
}
