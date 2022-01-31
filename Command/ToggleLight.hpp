#ifndef TOGGLELIGHT_HPP
#define TOGGLELIGHT_HPP
#include "Switch.hpp"

enum class LIGHT_STATE
{
  Off = 0,
  Low = 1,
  Medium = 2,
  Hight = 3,
};

class ToggleLight
{
private:
  LIGHT_STATE st_ = LIGHT_STATE::Off;
public:
  int toggle_on()
  {
    if(st_ >= LIGHT_STATE::Hight) { st_ = LIGHT_STATE::Off; }
    else { st_ = static_cast<LIGHT_STATE>(static_cast<int>(st_) + 1); }
    return static_cast<int>(st_);
  }

  int toggle_undo()
  {
    if(st_ <= LIGHT_STATE::Off) { st_ = LIGHT_STATE::Hight; }
    else { st_ = static_cast<LIGHT_STATE>(static_cast<int>(st_) - 1); }
    return static_cast<int>(st_);
  }

  LIGHT_STATE get_toggle() { return st_; }
};

#endif // TOGGLELIGHT_HPP
