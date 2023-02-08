/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 13:24:30 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:46:07 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain& copy);
	Brain& operator=(const Brain& other);
	~Brain();

	std::string	getIdea(int index) const;
};

#endif