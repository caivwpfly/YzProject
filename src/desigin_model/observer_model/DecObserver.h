#ifndef DECOBSERVER_H
#define DECOBSERVER_H
#include "observer.h"

class DecObserver : public observer
{
private:
    /* data */
public:
    using observer::observer;
    ~DecObserver();
    void Update(int m) override;
};
DecObserver::~DecObserver()
{
}

void DecObserver::Update(int m)
{
    printf("this is Dev :%d\n", m);
}

#endif