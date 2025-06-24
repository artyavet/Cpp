#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    wp1 = NULL;
    std::cout << "HumanB Ctor with params is called" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanB Dtor is called" << std::endl;
}

void    HumanB::attack() {
    if (wp1 == NULL)
        std::cout << name << " has no weapon" << std::endl;
    else
        std::cout << name << " attacks with their " << wp1->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& club) {
    wp1 = &club;
}