#include <iostream>
#include "MockAlm.h"
void AlmFunc1(int)
{
    std::cout << "this is stub AlmFunc1\n";
    MockAlm::GetInst().func1(1);
}