#ifndef STRANGEMEOW_H
#define STRANGEMEOW_H
#include "imeow.h"

class StrangeMeow : public Imeow
{
public:
    StrangeMeow();

    void meow() override;
};

#endif // STRANGEMEOW_H
