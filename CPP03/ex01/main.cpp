#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj("tyom");
    ClapTrap *base = &obj;
    base->attack("H");
    obj.attack("H");
}