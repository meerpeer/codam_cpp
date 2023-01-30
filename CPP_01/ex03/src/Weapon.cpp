#include "Weapon.hpp"

Weapon::Weapon(/* args */) {

}

const std::string	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}

Weapon::~Weapon() {

}