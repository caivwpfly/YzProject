#ifndef CARFACTORY_H
#define CARFACTORY_H
#include <memory>
class CarFactory
{
private:
    /* data */
public:
    CarFactory(/* args */);
    ~CarFactory();
    virtual std::shared_ptr<Car> CreatCar() = 0;
};

CarFactory::CarFactory(/* args */)
{
}

CarFactory::~CarFactory()
{
}


#endif