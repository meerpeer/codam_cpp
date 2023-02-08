/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:15:35 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:21:07 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal: default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string animalType) : type(animalType)
{
	std::cout	<< "AAnimal: constuctor with type string called: \"" 
				<< animalType << "\""
				<< std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal: copy constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: deconstructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "* random AAnimal noises *" << std::endl;
}
