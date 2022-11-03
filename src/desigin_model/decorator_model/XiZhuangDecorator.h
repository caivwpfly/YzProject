#ifndef XIZHUANGDECORATOR_H
#define XIZHUANGDECORATOR_H

class XiZhuangDecorator : public PeopleDecorator {
private:
    /* data */
public:
    using PeopleDecorator::PeopleDecorator;
    void ShowClothes()
    {
        printf("add XiZhuang\n");
        people->ShowClothes();
    }

    int ShowNames(std::string id)
    {
        printf("add ShowNames XiZhuang\n");
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