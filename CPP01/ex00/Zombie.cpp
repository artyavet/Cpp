#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    name = "Anonymous";
    std::cout << name << " Default Ctor is called" << std::endl;
}

Zombie::Zombie(const std::string& name) : name(name) {
    std::cout << this->name << ": Ctor with parametr is called" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Dtor is called " << name << " is destroyed" << std::endl;
}

void    Zombie::set_name(const std::string &name) {
   this->name = name;
}