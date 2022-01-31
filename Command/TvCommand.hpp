#ifndef TVCOMMAND_HPP
#define TVCOMMAND_HPP
#include <iostream>
#include "ICommand.hpp"
#include "Tv.hpp"

class TVCommand : public ICommand
{
private:
  Tv tv_;

public:
  TVCommand(const Tv &tv) : tv_{tv}
  { commandName_ = "tv"; }

  void execute() override
  {
    tv_.turn_on();
  }

  void undo() override
  {
    tv_.turn_off();
  }

  ~TVCommand() override {}
};

#endif // TVCOMMAND_HPP
