#ifndef MOCKALM_H
#define MOCKALM_H
#include "gmock/gmock.h"
using testing::NiceMock;
class MockAlm
{
private:
    /* data */
public:
    MockAlm(/* args */) = default;
    ~MockAlm() = default;
    MOCK_METHOD(void, func1, (int));
    static NiceMock<MockAlm>& GetInst()
    {
        static NiceMock<MockAlm> mock;
        return mock;
    }
};

#endif