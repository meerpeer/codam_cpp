/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:15:35 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:06:51 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout	<< "WrongAnimal: constuctor with type string called: \"" 
				<< animalType << "\""
				<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: deconstructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* random WrongAnimal noises *" << std::endl;
}
