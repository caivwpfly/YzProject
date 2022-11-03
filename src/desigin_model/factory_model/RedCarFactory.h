#ifndef REDCARFACTORY_H
#define REDCARFACTORY_H

#include "CarFactory.h"
class RedCarFactory : public CarFactory
{
private:
    /* data */
public:
    RedCarFactory(/* args */);
    ~RedCarFactory();
    std::shared_ptr<Car> CreatCar() override;
};

std::shared_ptr<Car> RedCarFactory::CreatCar(/* args */)
{
    return std::make_shared<RedCar>();
}

RedCarFactory::RedCarFactory(/* args */)
{
}

RedCarFactory::~RedCarFactory()
{
}


#endif