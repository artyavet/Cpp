#pragma once

#include <iostream>
#include <string>
#include <climits>

class ClapTrap
{
private:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

 