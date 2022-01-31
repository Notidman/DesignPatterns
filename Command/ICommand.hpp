#ifndef ICOMMAND_HPP
#define ICOMMAND_HPP
#include <string>

class ICommand
{
public:
  std::string commandName_;
public:
  virtual void execute() = 0;
  virtual void undo() = 0;
  std::string to_string() const { return "On " + commandName_; }
  virtual ~ICommand() {}
};

#endif // ICOMMAND_HPP
