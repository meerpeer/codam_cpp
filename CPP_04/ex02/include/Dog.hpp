/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:13 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/16 13:59:44 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _dogBrain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog &other);
		virtual ~Dog();

		void	makeSound() const;
		Brain	*getBrain() const;
};



#endif