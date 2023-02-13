/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 13:38:41 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/13 14:05:06 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap( void ) 
	: ClapTrap("", 100, 50, 20), _gateKeeping(false)
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) 
	: ClapTrap(name, 100, 50, 20), _gateKeeping(false)
{
	std::cout << "ScavTrap: constructor with name \"" << name << "\" called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: assignment operator called" << std::endl;

	this->_name = other.getName();
	this->_hitPoints = (other.getHitPoints());
	this->_energyPoints = other.getEnergypoints();
	this->_attackDamage = other.getAttackDamage();
	this->_gateKeeping = other.getGateKeepingMode();

	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (!canDoAction())
		return ;
	std::cout	<< "Scavtrap: "
				<< this->getName() << " attacks " << target
				<< ", causing " << this->getAttackDamage() << " points of damage!"
				<< std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap: "
				<< this->getName()
				<< " is in Gate keeper mode"
				<< std::endl;
	this->_gateKeeping = true;
}

bool ScavTrap::getGateKeepingMode() const
{
	return this->_gateKeeping;
}

ScavTrap::~ScavTrap( void )
{
		std::cout	<< "ScavTrap: "
				<< this->getName()
				<< " :destructor called"
				<< std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &output, const ScavTrap &scavTrap)
{
	output << "ScavTrap object info:" << std::endl;
	output << "---------------------" << std::endl;
	output << "Name:\t\t\t" << scavTrap.getName() << std::endl;
	output << "Current Hit points:\t" << scavTrap.getHitPoints() << std::endl;
	output << "Current Energy:\t\t" << scavTrap.getEnergypoints() << std::endl;
	output << "Attack Damage:\t\t" << scavTrap.getAttackDamage() << std::endl;
	output << "Guarding gate:\t\t" << scavTrap.getGateKeepingMode() << std::endl;
	return output;
}
