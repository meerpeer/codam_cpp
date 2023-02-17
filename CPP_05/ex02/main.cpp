/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:48 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/17 13:52:04 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include <iostream>

int	main()
{
	std::cout << " ====> trying to get a PresidentialPardonForm signed for a dinosaur" << std::endl;
	try {
		PresidentialPardonForm	presForm("🦕 Dino the Dinosaur");
		Bureaucrat				Trump("Trump", 26);
		Bureaucrat				Obama("Obama", 5);
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
		RobotomyRequestForm		robotForm("🦕 Dino the Dinosaur");
		Bureaucrat				Merel("Merel", 73);
		Bureaucrat				Perel("Perel", 46);
		Bureaucrat				Kerel("Kerel", 45);
		Merel.signForm(robotForm);
		Kerel.executeForm(robotForm);
		Perel.signForm(robotForm);
		Perel.executeForm(robotForm);
		Kerel.executeForm(robotForm);
	}
	catch (std::exception &e) {
		std::cout	<< "failed at trying to robotomize a dinosaur, because: "
					<< e.what()
					<< std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> creating a tree in the cluster" << std::endl;
	try {
		ShrubberyCreationForm	shrubForm("cluster");
		Bureaucrat				Casper("Casper", 145);
		Bureaucrat				Lisanne("Lisanne", 137);
		Bureaucrat				Sietse("Sietse", 150);
		Sietse.signForm(shrubForm);
		Casper.signForm(shrubForm);
		Casper.executeForm(shrubForm);
		Lisanne.executeForm(shrubForm);
	}
	catch (std::exception &e) {
		std::cout	<< "failed at creating a tree in the cluster because: "
					<< e.what()
					<< std::endl;
	}
	std::cout << std::endl;
	return 0;
}