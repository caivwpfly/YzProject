#ifndef PEOPLEDECORATOR_H
#define PEOPLEDECORATOR_H

#include "People.h"
#include <memory>
class PeopleDecorator : public People {
private:
public:
    std::shared_ptr<People> people;
    PeopleDecorator(std::shared_ptr<People> plp);
    ~PeopleDecorator() = default;
    //virtual void ShowClothes() = 0;
};
PeopleDecorator::PeopleDecorator(std::shared_ptr<People> plp)
{
    people = plp;
}
#endif

