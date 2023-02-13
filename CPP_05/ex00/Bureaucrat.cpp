/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:17 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/13 16:36:18 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

inline std::string Bureaucrat::getName() const
{
		return this->_name;
}

inline int Bureaucrat::getGrade() const
{
		return 0;
}

inline void Bureaucrat::incrementGrade()
{
}

inline void Bureaucrat::decrementGrade()
{
}