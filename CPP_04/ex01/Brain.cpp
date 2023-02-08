/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 13:26:29 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 14:21:24 by mevan-de      ########   odam.nl         */
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
	int	nr_ideas = getNrIdeas();
	for (int i = 0; i < nr_ideas; i++)
		this->_ideas[i] = other.getIdea(i);
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index >= getNrIdeas() || index < 0 )
		return (NULL) ;
	return this->_ideas[index];
}

void Brain::setIdea(int index, std::string newIdea)
{
	if (index >= getNrIdeas() || index < 0 )
		return ;
	this->_ideas[index] = newIdea;
}

int Brain::getNrIdeas() const
{
	return (int)(sizeof(this->_ideas) / sizeof(std::string));
}

Brain::~Brain()
{
	std::cout << "Brain: deconstructor called" << std::endl;
}