#include "strangecat.h"
#include "strangewalk.h"
#include "strangemeow.h"

StrangeCat::StrangeCat()
{
  walk_behavior = std::make_shared<StrangeWalk>();
  meow_behavior = std::make_shared<StrangeMeow>();
}

StrangeCat::~StrangeCat()
{

}
