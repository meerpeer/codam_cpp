/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:13:41 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 12:52:57 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		std::string	getType() const;
		virtual void		makeSound() const;
};

#endif