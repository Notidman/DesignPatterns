#ifndef MUSIC_HPP
#define MUSIC_HPP
#include "Switch.hpp"

class Music
{
private:
  Switch switch_;
  std::string name_;
public:
  Music() { name_ = "Music"; }
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


#endif // MUSIC_HPP
