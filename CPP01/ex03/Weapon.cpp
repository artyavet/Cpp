#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "Weapon Ctor with param is called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon Dtor is called" << std::endl;
}


const std::string& Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string new_type) {
	// std::cout << "kancvav esi" << std::endl;
	this->type = new_type;
}
