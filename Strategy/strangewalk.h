#ifndef STRANGEWALK_H
#define STRANGEWALK_H
#include "iwalk.h"

class StrangeWalk : public Iwalk
{
public:
    StrangeWalk();

    void walk() override;
};

#endif // STRANGEWALK_H
