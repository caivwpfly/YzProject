#ifndef PEOPLE_H
#define PEOPLE_H
using namespace std;
#include <iostream>
class People
{
private:
    /* data */
public:
    People(/* args */) = default;
    ~People() = default;
    virtual void ShowClothes() = 0;
    virtual int ShowNames(std::string id) = 0;
};


#endif
