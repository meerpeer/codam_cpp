#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}


HumanB::~HumanB() {

}
