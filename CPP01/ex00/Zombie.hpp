#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
        std::string name;
public:
        Zombie(const std::string& name);
        Zombie();
        ~Zombie();
        void announce( void );
        void set_name(const std::string &name);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif

