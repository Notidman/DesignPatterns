#ifndef LIGHT_HPP
#define LIGHT_HPP
#include "ToggleLight.hpp"
#include <vector>

class Light
{
private:
  ToggleLight switch_;
  std::string name_;

  void print_action(int state) const
  {
    const std::vector<std::string> name_state{"off", "low", "medium", "higth"};
    std::cout << name_ << " " << name_state.at(state) << std::endl;
  }

public:
  Light() { name_ = "Light"; }

  void toggle_light()
  {
    print_action(switch_.toggle_on());
  }

  void toggle_undo()
  {
    print_action(switch_.toggle_undo());
  }

  LIGHT_STATE get_state()
  {
    return switch_.get_toggle();
  }

  std::string get_name()
  {
    return name_;
  }

};

#endif // LIGHT_HPP
