/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 13:07:26 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:07:49 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat: assignment constructor called" << std::endl;
	this->type = other.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "* MEOW *" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: deconstructor called" << std::endl;
}
