/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:18:46 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:23:09 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat: assignment constructor called" << std::endl;
	this->type = other.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "* MEOW *" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: deconstructor called" << std::endl;
}
