#include "HumanB.hpp"

HumanB::HumanB() {
	this->_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = weapon;
}


HumanB::~HumanB() {

}
