/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:21:30 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:54:07 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog: assignment constructor called" << std::endl;
	this->type = other.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "* WOOF *" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: deconstructor called" << std::endl;
}
