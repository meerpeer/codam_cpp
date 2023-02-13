/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:35:30 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/13 14:03:48 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap: default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) 
	: ClapTrap(name, 100, 100, 30)
{
		std::cout	<< "FragTrap: constructor with name \"" 
					<< name 
					<< "\" called"
					<< std::endl;
		return ;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap: assignment operator called" << std::endl;
	
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergypoints();
	this->_attackDamage = other.getAttackDamage();

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap: "
				<< this->getName()
				<< " :destructor called"
				<< std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap: "
				<< getName()
				<< " wants to HIGH FIVE!"
				<< std::endl;
}

std::ostream &operator<<(std::ostream &output, const FragTrap &fragTrap)
{
	output << "fragTrap object info:" << std::endl;
	output << "---------------------" << std::endl;
	output << "Name:\t\t\t" << fragTrap.getName() << std::endl;
	output << "Current Hit points:\t" << fragTrap.getHitPoints() << std::endl;
	output << "Current Energy:\t\t" << fragTrap.getEnergypoints() << std::endl;
	output << "Attack Damage:\t\t" << fragTrap.getAttackDamage() << std::endl;
	return output;
}