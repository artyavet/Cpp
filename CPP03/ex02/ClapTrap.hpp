#pragma once

#include <iostream>
#include <string>
#include <climits>

class ClapTrap
{
    protected:
            std::string _name;
            int _hit_points;
            int _energy_points;
            int _attack_damage;
    public:
            ClapTrap();
            ClapTrap(const ClapTrap& other);
            ClapTrap& operator=(const ClapTrap& other);
            ClapTrap(std::string name);
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            virtual ~ClapTrap();
};