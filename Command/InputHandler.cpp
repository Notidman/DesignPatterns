#include "InputHandler.hpp"

void InputHandler::handleInput()
{
  if(isPressed(BUTTON_X)) buttonX_->execute();
  else if(isPressed(BUTTON_Y)) buttonY_->execute();
  else if(isPressed(BUTTON_B)) buttonB_->execute();
  else if(isPressed(BUTTON_A)) buttonA_->execute();
}
