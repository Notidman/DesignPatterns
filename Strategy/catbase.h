#ifndef CATBASE_H
#define CATBASE_H
#include "iwalk.h"
#include "imeow.h"
#include <memory>

class CatBase
{
protected:
   std::shared_ptr<Iwalk> walk_behavior;
   std::shared_ptr<Imeow> meow_behavior;

public:
    CatBase();

    virtual void display();
    virtual void meow();
    virtual void walk();

    virtual ~CatBase() {};
};

#endif // CATBASE_H
