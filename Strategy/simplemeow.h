#ifndef SIMPLEMEOW_H
#define SIMPLEMEOW_H
#include "imeow.h"

class SimpleMeow : public Imeow
{
public:
    SimpleMeow();

    void meow() override;
};

#endif // SIMPLEMEOW_H
