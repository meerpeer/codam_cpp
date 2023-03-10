/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:15:35 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 12:58:21 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include <iostream>

Animal::Animal() : type("")
{
	std::cout << "Animal: default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout	<< "Animal: constuctor with type string called: \"" 
				<< animalType << "\""
				<< std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: deconstructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "* random animal noises *" << std::endl;
}
