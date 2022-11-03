#ifndef HEXOBSERVER_H
#define HEXOBSERVER_H
#include "observer.h"
class HexObserver : public observer
{
private:
    /* data */
public:
    using observer::observer;
    ~HexObserver();
    void Update(int m) override;
};

HexObserver::~HexObserver()
{
}

void HexObserver::Update(int m)
{
    printf("this is Hex :%x\n", m);
}
    


#endif