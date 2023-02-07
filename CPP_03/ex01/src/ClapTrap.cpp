/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:36:11 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/07 14:36:12 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
	: _name(name), _hitPoints(hitPoints),
	_energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "Claptrap: initialize constructor called" << std::endl;
}


ClapTrap::ClapTrap() :
	_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap: default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Claptrap: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap::ClapTrap(const std::string name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	
	std::cout << "Claptrap: constructor with name \"" << name << "\" called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap: assignment operator called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergypoints();
	this->_attackDamage = other.getAttackDamage();

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "Claptrap: " 
				<< this->_name
				<< " :destructor called" 
				<< std::endl;
}


std::string ClapTrap::getName(void) const
{
	return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergypoints(void) const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

bool ClapTrap::canDoAction(void)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Claptrap: " << this->_name << " is DEATH..." << std::endl;
		return false;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< "Claptrap: " << this->_name
					<< " doesn't have enough energy to perform the action..."
					<< std::endl;
		return false;
	}
	return true;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Claptrap: "<< this->_name << " is already death!" << std::endl;
		return ;
	}
	else if (amount >= (unsigned int) this->_hitPoints)
	{
		std::cout	<< "Claptrap: " << this->_name
					<< " died.. RIP"
					<< std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout	<< "Claptrap: " << this->_name 
					<< " takes [" << amount << "] damage."
					<< std::endl;
	}

}

void ClapTrap::attack(const std::string &target)
{
	if (!canDoAction())
		return ;
	std::cout	<< "Claptrap: "
				<< this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage!"
				<< std::endl;
	this->_energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canDoAction())
		return ;
	std::cout	<< "Claptrap: "
				<< this->_name
				<< " gets repaired for [" << amount 
				<< "] points!"
				<< std::endl;
	this->_energyPoints--;
}

std::ostream &operator<<(std::ostream &output, const ClapTrap &clapTrap)
{
	output << "ClapTrap object info:" << std::endl;
	output << "---------------------" << std::endl;
	output << "Name:\t\t\t" << clapTrap.getName() << std::endl;
	output << "Current Hit points:\t" << clapTrap.getHitPoints() << std::endl;
	output << "Current Energy:\t\t" << clapTrap.getEnergypoints() << std::endl;
	output << "Attack Damage:\t\t" << clapTrap.getAttackDamage() << std::endl;
	return output;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hp)
{
	this->_hitPoints = hp;
}

void ClapTrap::setEnergypoints(int ep)
{
	this->_energyPoints = ep;
}

void ClapTrap::setAttackDamage(int ad)
{
	this->_attackDamage = ad;
}
