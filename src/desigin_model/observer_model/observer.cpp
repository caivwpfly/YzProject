
#include "observer.h"

observer::observer(std::shared_ptr<subject> sub)
{
    sub->Add(this);
}

observer::~observer()
{
}

