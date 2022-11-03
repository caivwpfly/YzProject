#ifndef CAR_H
#define CAR_H

class Car
{
private:
    /* data */
public:
    Car(/* args */);
    ~Car();
    virtual void Show() = 0;
};

Car::Car(/* args */)
{
}

Car::~Car()
{
}


#endif