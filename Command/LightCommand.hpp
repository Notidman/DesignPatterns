#ifndef LIGHTCOMMAND_HPP
#define LIGHTCOMMAND_HPP
#include <iostream>
#include "ICommand.hpp"
#include "Light.hpp"
#include <stack>

class LightCommand : public ICommand
{
private:
  Light light_;
public:
  LightCommand(const Light& light) : light_{light}
  { commandName_ = "light"; }

  void execute() override
  {
    light_.toggle_light();
  }

  void undo() override
  {
    light_.toggle_undo();
  }

  ~LightCommand() override {}
};


#endif // LIGHTCOMMAND_HPP
