#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <climits>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        void attack(const std::string& target);
        void guardGate();
};