#ifndef SPORTWEARDECORATOR_H
#define SPORTWEARDECORATOR_H
#include "PeopleDecorator.h"
class SportWearDecorator : public PeopleDecorator {
private:
    /* data */
public:
    using PeopleDecorator::PeopleDecorator;
    void ShowClothes()
    {
        printf("add SportWear\n");
        people->ShowClothes();
    }
    int ShowNames(std::string id)
    {
        printf("add ShowNames SportWear\n");
        if (id.empty()) {
            cout << "empty"<< endl;
            return -1;
        }
        auto ret = people->ShowNames(id);
        if (ret != 0) {
            cout << "this is" << ret << endl;
            return ret;
        }
        return 0;
    }
};


#endif