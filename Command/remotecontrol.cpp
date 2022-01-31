#include "remotecontrol.hpp"
#include <iostream>

std::string RemoteControl::to_string() const
{
  std::string str;
  for(const auto& [command, _] : commands_)
  {
    str += std::to_string(command) + "\t-" + commands_.at(command)->to_string() + '\n';
  }

  str += "other\t-Exit";

  return str;
}

void RemoteControl::push_button(int button_id)
{
  if( !(commands_.find(button_id) == commands_.cend()) )
  {
    commands_[button_id]->execute();
  }
}

void RemoteControl::undo_button(int button_id)
{
  if( !(commands_.find(button_id) == commands_.cend()) )
  {
    commands_[button_id]->undo();
  }
}

void RemoteControl::set_command_for_button(int button_id, std::shared_ptr<ICommand> cmd)
{
  commands_[button_id] = cmd;
}

std::ostream& operator<<(std::ostream &out, const RemoteControl &r)
{
  return out << r.to_string();
}
