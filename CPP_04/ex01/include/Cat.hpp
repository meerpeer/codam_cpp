/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:13:50 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:20:21 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
	/* data */
public:
	Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& other);
	~Cat();

	void	makeSound() const;
};

#endif