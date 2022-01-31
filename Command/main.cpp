#include <iostream>
#include <remotecontrol.hpp>
#include <memory>

int
main()
{
  auto remote{std::make_unique<RemoteControl>()};
  std::string user_input;

  remote->set_command_for_button(2, std::make_shared<LightCommand>(Light()));
  remote->set_command_for_button(3, std::make_shared<MusicCommand>(Music()));
  remote->set_command_for_button(1, std::make_shared<TVCommand>(Tv()));

  auto macro_list{std::list<std::shared_ptr<ICommand>>()};
  macro_list.push_back(std::make_shared<TVCommand>(Tv()));
  macro_list.push_back(std::make_shared<LightCommand>(Light()));

  remote->set_command_for_button(4, std::make_shared<MacroCommand>(macro_list));

  do
  {
    std::cout << "Enter var: " << std::endl;
    std::cout << *remote << std::endl;

    try
    {
      std::cout << "Your choose: ";
      std::cin >> user_input;

      if(user_input == "0") { exit(0); }

      const auto usri{std::stoi(user_input)};
      remote->push_button(usri);
      remote->push_button(usri);
      remote->push_button(usri);
      remote->undo_button(usri);
      remote->undo_button(usri);
    }
    catch(...)
    {
      std::cout << "Error input!\n";
    }

    std::cout << "\nDo you want continue(y/n): ";

    std::cin >> user_input;

  } while (user_input == "y");
}
