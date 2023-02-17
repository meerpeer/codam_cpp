/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:48 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/17 14:30:30 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/Intern.hpp"
#include <iostream>

int	main()
{
	std::cout << " ====> creating a robotomy request form" << std::endl;
	try {
		Intern	Miep;
		AForm*	rff;

		rff = Miep.makeForm("robotomy request", "your mother");
		delete (rff);
	}
	catch (std::exception &e) {
		std::cout	<<  e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << " ====> failing at creating a robotomy request form" << std::endl;
	try {
		Intern	Miep;
		AForm*	rff;

		rff = Miep.makeForm("robotomy rest", "your mother");
		delete (rff);
	}
	catch (std::exception &e) {
		std::cout	<<  e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << " ====> creating a shrubbery request form" << std::endl;
	try {
		Intern	Miep;
		AForm*	rff;

		rff = Miep.makeForm("shrubbery request", "your mother");
		delete (rff);
	}
	catch (std::exception &e) {
		std::cout	<<  e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << " ====> creating a presidential request form" << std::endl;
	try {
		Intern	Miep;
		AForm*	rff;

		rff = Miep.makeForm("presidential request", "your mother");
		delete (rff);
	}
	catch (std::exception &e) {
		std::cout	<<  e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}