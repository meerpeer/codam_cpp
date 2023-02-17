/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:48 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/17 12:04:49 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
//#include "include/ShrubberyCreationForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include <iostream>

int	main()
{
	std::cout << " ====> trying to get a PresidentialPardonForm signed for a dinosaur" << std::endl;
	try {
		PresidentialPardonForm	presForm("🦕 Dino the Dinosaur");
		Bureaucrat				Trump("Trump", 150);
		Bureaucrat				Obama("Obama", 1);
		Trump.signForm(presForm);
		Trump.executeForm(presForm);
		Obama.executeForm(presForm);
		Obama.signForm(presForm);
		Trump.executeForm(presForm);
		Obama.executeForm(presForm);
	}
	catch (std::exception &e) {
		std::cout	<< "failed at trying to get a PresidentialPardonForm signed for a dinosaur because: "
					<< e.what()
					<< std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> trying to get a robotomize a dinosaur" << std::endl;
	try {
		RobotomyRequestForm	robotForm("🦕 Dino the Dinosaur");
		Bureaucrat				Trump("Trump", 150);
		Bureaucrat				Obama("Obama", 1);
		Trump.signForm(robotForm);
		Trump.executeForm(robotForm);
		Obama.executeForm(robotForm);
		Obama.signForm(robotForm);
		Trump.executeForm(robotForm);
		Obama.executeForm(robotForm);
	}
	catch (std::exception &e) {
		std::cout	<< "failed at trying to get a PresidentialPardonForm signed for a dinosaur because: "
					<< e.what()
					<< std::endl;
	}
	std::cout << std::endl;
	return 0;
}