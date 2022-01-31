#ifndef TV_HPP
#define TV_HPP
#include "Switch.hpp"

class Tv
{
private:
  Switch switch_;
  std::string name_;
public:
  Tv() { name_ = "Tv"; }
  void turn_on()
  {
    switch_.turn_on(name_);
  }

  void turn_off()
  {
    switch_.turn_off(name_);
  }

  bool get_state()
  {
    return switch_.get_state();
  }

  std::string get_name()
  {
    return name_;
  }

};

#endif // TV_HPP
