#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include <memory>
class observer;
class subject
{
private:
    /* data */
public:
    subject(/* args */);
    ~subject();
    std::vector<observer*> observerList;
    void Notify(int m);
    void Add(observer *ob);
};



#endif