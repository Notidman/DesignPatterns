#include <iostream>
#include <vector>
#include "catbase.h"
#include "strangecat.h"
#include "normalcat.h"
#include <memory>

int main()
{
  auto cb = std::make_shared<std::vector<std::shared_ptr<CatBase>>>();
  cb->push_back(std::make_shared<StrangeCat>());
  cb->push_back(std::make_shared<NormalCat>());

  for(auto cat:*cb)
  {
    cat->display();
    cat->meow();
    cat->walk();
    std::cout << std::endl;
  }

  return 0;
}
