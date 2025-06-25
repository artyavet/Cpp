#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap Default Ctor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Ctor with params is called" << std::endl;
    this->_hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap Copy Ctor is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this == &other)
        return (*this);
        this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return (*this);
}


void FragTrap::highFivesGuys() {
    if (this->_hit_points > 0)
        std::cout << "FragTrap High five Broo" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Dtor is called" << std::endl;
}