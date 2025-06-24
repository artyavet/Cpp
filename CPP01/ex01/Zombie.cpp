#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Default Ctor is called" << std::endl;
    this->name = "";
}

void Zombie::set_name(const std::string& name)
{
	this->name = name;
}


Zombie::Zombie(std::string name)
{
	std::cout << "Zombie Ctor whit parametr is called" << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie Dtor is called ->";
	std::cout << this->name << " is destroyed" << std::endl;
}