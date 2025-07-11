#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap Default Ctor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Ctor with params is called" << std::endl;
    this->_hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy Ctor is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this == &other)
        return (*this);
        this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points > 0 && this->_energy_points > 0)
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ",causing " << this->_attack_damage << " points of damage!" << std::endl;
    else
        std::cout << "ScavTrap can not do anything" << std::endl;
    if (this->_energy_points > 0)
        this->_energy_points--;   
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap dtor is called" << std::endl;
}