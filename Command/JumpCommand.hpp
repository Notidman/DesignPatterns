#ifndef JUMPCOMMAND_HPP
#define JUMPCOMMAND_HPP
#include "Command.hpp"

class JumpCommand : public Command
{
public:
  virtual void execute() override { jump(); }
};

#endif // JUMPCOMMAND_HPP
