#ifndef REMOTECONTROL_HPP
#define REMOTECONTROL_HPP
#include "ICommand.hpp"
#include "LightCommand.hpp"
#include "MusicCommand.hpp"
#include "TvCommand.hpp"
#include "MacroCommand.hpp"
#include <memory>
#include <unordered_map>

class RemoteControl
{
public:

  RemoteControl() = default;

  void push_button(int button_id);
  void undo_button(int button_id);
  std::string to_string() const;
  void set_command_for_button(int button_id , std::shared_ptr<ICommand> cmd);

  friend std::ostream& operator<<(std::ostream &out, const RemoteControl &r);

private:
  std::unordered_map<int, std::shared_ptr<ICommand>> commands_;
};

#endif // REMOTECONTROL_HPP
