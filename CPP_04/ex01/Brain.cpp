/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 13:26:29 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:49:18 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain: assignment operator called" << std::endl;
	int	nr_ideas = sizeof(this->_ideas) / sizeof(std::string);
	std::cout << "nr_ideas = " << nr_ideas << std::endl;
	for (int i = 0; i < nr_ideas; i++)
		this->_ideas[i] = other.getIdea(i);
	return *this;
}
Brain::~Brain()
{
	std::cout << "Brain: deconstructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	int	nr_ideas = sizeof(this->_ideas) / sizeof(std::string);
	if (index >= nr_ideas || index < 0 )
		return (NULL) ;
	return this->_ideas[index];
}