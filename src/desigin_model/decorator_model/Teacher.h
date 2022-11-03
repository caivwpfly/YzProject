#ifndef TEACHER_H
#define TEACHER_H

#include "People.h"
class Teacher : public People {
private:
    /* data */
public:
    Teacher(/* args */);
    ~Teacher();
    void ShowClothes()
    {
        printf("this is clothes\n");
    }
    int ShowNames(std::string id)
    {
        printf("this is ShowNames \n");
        if (id == "1") {
            return 0;     
        } else {
            return -1;
        }
    }
};

Teacher::Teacher(/* args */)
{
}

Teacher::~Teacher()
{
}


#endif