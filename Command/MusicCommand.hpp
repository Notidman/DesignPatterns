#ifndef MUSICCOMMAND_HPP
#define MUSICCOMMAND_HPP
#include <iostream>
#include "ICommand.hpp"
#include "Music.hpp"

class MusicCommand : public ICommand
{
private:
  Music music_;
public:
  MusicCommand(const Music& music) : music_{music}
  { commandName_ = "music"; }

  void execute() override
  {
    music_.turn_on();
  }

  void undo() override
  {
    music_.turn_off();
  }

  ~MusicCommand() override {}
};

#endif // MUSICCOMMAND_HPP
