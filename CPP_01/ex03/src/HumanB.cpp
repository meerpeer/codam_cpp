#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

Weapon *HumanB::getWeapon()
{
	return (this->_weapon);
}

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << getWeapon()->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack without a weapon " << std::endl;
}


HumanB::~HumanB() {

}
