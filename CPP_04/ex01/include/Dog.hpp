/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:13 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 14:34:21 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _dogBrain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog &other);
		~Dog();

		void	makeSound() const;
		Brain	*getBrain() const;
};



#endif