#include "catbase.h"
#include <iostream>
#include "simlewalk.h"
#include "strangewalk.h"
#include "strangemeow.h"
#include "simplemeow.h"

CatBase::CatBase()
{
  walk_behavior = std::make_shared<SimleWalk>();
  meow_behavior = std::make_shared<SimpleMeow>();
}

void CatBase::display()
{
  std::cout << "I'm a cat!" << std::endl;
}

void CatBase::meow()
{
    meow_behavior->meow();
}

void CatBase::walk()
{
    walk_behavior->walk();
}
