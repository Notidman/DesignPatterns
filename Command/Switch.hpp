#ifndef SWITCH_HPP
#define SWITCH_HPP
#include <string>
#include <iostream>

class Switch
{
private:
  bool state_ = false;
public:
  void turn_on(const std::string &name)
  {
    std::cout << name <<  " on" << std::endl;
    state_ = true;
  }

  void turn_off(const std::string &name)
  {
    std::cout << name << " off" << std::endl;
    state_ = false;
  }

  bool get_state() { return state_; }

  virtual ~Switch() {};

};

#endif // SWITCH_HPP
