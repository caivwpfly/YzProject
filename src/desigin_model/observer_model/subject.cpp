#include "subject.h"
#include "observer.h"

subject::subject(/* args */)
{
}

subject::~subject()
{
}
void subject::Notify(int m)
{
    for (auto it : observerList) {
        it->Update(m);
    }
}

void subject::Add(observer *ob)
{
    observerList.push_back(ob);
}