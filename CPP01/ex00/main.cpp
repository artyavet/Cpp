#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    std::string zombie_name;
    
    if (argc == 1)
    {
        while (1)
        {
            std::cout << "zombie_name = ";
            getline(std::cin, zombie_name);
            if (zombie_name != "")
            break;
            std::cout << "You must give Zombie's name" << std::endl;
        }
        Zombie *zombie;
        zombie = newZombie(zombie_name);
        zombie->announce();
        // std::cout << "now zombie in stack" <<zombie->get_name()<< std::endl;
        randomChump("tyom");
        delete zombie;
    }
    else
        std::cout << "Don't add any other arguments" << std::endl;
    return (0);
}