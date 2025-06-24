#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    int i = 0;
    Phonebook user;
    std::string str_in;
    std::cout << "ADD command: add a new contact." << std::endl;
    std::cout << "SEARCH command: search and display contacts." << std::endl;
    std::cout << "EXIT command: terminates the program." << std::endl;
    std::cout << "Please enter the command: " << std::endl;
    while (1)
    {
        if (!str_in.empty())
            std::cout << "Please enter the command: " << std::endl;
        std::getline(std::cin, str_in);
        if (std::cin.eof())
            break;
        if (str_in == "ADD")
        {
            if (i == 8)
                i = 0;
            user.set_members(i);
            i++;
        }
        else if (str_in == "SEARCH")
            user.get_all_contact();
        else if (str_in == "EXIT")
            return 0;
        else
            std::cout << "Invalid command. Available commands: ADD, SEARCH, EXIT." << std::endl;
    }
    return 0;
}