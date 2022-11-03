#ifndef REDCAR_H
#define REDCAR_H
#include "Car.h"
class RedCar : public Car
{
private:
    /* data */
public:
    RedCar(/* args */);
    ~RedCar();
    void Show() override;
};
void RedCar::Show()
{
    printf("red car\n");
}
RedCar::RedCar(/* args */)
{
}

RedCar::~RedCar()
{
}


#endif