#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->set_name(name);
    // std::cout << zombie->get_name();
    return (zombie);
}