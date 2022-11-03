#ifndef OBSERVER_H
#define OBSERVER_H
#include <memory>
#include "subject.h"
class observer
{
private:
    /* data */
public:
    observer(std::shared_ptr<subject> sub);
    virtual ~observer();
    virtual void Update(int m) = 0;
};

#endif