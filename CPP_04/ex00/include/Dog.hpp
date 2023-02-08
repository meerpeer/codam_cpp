/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:13 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 12:56:11 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(const Dog& copy);
	Dog& operator=(const Dog &other);
	~Dog();

	void	makeSound() const;
};



#endif