#ifndef SIMLEWALK_H
#define SIMLEWALK_H
#include "iwalk.h"

class SimleWalk : public Iwalk
{
public:
    SimleWalk();

    void walk() override;
};

#endif // SIMLEWALK_H
