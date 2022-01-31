#ifndef INPUTHANDLER_HPP
#define INPUTHANDLER_HPP
#include "Command.hpp"

class InputHandler
{
public:
  void handleInput();

  // method's
private:
  Command *buttonX_;
  Command *buttonY_;
  Command *buttonA_;
  Command *buttonB_;
};


#endif // INPUTHANDLER_HPP
