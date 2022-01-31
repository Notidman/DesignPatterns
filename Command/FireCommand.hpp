#ifndef FIRECOMMAND_HPP
#define FIRECOMMAND_HPP
#include "Command.hpp"

class FireCommand : public Command
{
public:
  virtual void execute() override { fire_gun(); }
};

#endif // FIRECOMMAND_HPP
