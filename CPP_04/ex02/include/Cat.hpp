/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:13:50 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/16 13:59:32 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		virtual ~Cat();

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif