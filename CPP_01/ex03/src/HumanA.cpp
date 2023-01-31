#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(Weapon weapon) : _weapon(weapon) {

}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}
