#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data
{
private:
    /* data */
public:
    Data(/* args */);
    virtual ~Data();
    virtual int fun() =0;
};

Data::Data(/* args */)
{
}

Data::~Data()
{
}

class Data1 : public Data
{
private:
    /* data */
public:
    Data1(/* args */);
    ~Data1();
    int fun()
    {
        cout << 10 << endl;
        return 1;
    }
};

Data1::Data1(/* args */)
{
}

Data1::~Data1()
{
}

class Data2 : public Data
{
private:
    /* data */
public:
    Data2(/* args */) = default;
    ~Data2() = default;
    int fun()
    {
        cout << "Data2" << endl;
        return 0;
    }
};
#endif