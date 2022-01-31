#ifndef MACROCOMMAND_HPP
#define MACROCOMMAND_HPP
#include "ICommand.hpp"
#include <list>
#include <memory>

class MacroCommand : public ICommand
{
private:
  std::list<std::shared_ptr<ICommand>> inner_commands_;
public:
  MacroCommand(const std::list<std::shared_ptr<ICommand>> &list)
    : inner_commands_{list} { commandName_ = "macros"; }

  void execute()
  {
    for(auto& command:inner_commands_)
    {
      command->execute();
    }
  }

  void undo()
  {
    for(auto& command:inner_commands_)
    {
      command->undo();
    }
  }

  std::string to_string() const
  {
    std::string str;
    for(auto& command : inner_commands_)
    {
      str += command->to_string() + ", ";
    }

    return str;
  }

};

#endif // MACROCOMMAND_HPP
