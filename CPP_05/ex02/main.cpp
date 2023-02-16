/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:48 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/16 17:45:33 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include <iostream>

int	main()
{
	std::cout << " ====> initializing a form with required grade -100" << std::endl;
	try {
		AForm form("important", -100, 5);
		std::cout << "Does this even print?" << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> initializing a form with execute grade 151" << std::endl;
	try {
		AForm form("important", 100, 151);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> Trying to sign a form, but failing" << std::endl;
	try {
		AForm importantForm("Important Form", 1, 1);
		Bureaucrat nonImportantBureaucrat("Willie", 150);
		std::cout << nonImportantBureaucrat << std::endl;
		std::cout << importantForm << std::endl;
		nonImportantBureaucrat.signForm(importantForm);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> Trying to sign a form, and succeeding" << std::endl;
	try {
		AForm importantForm("Important Form", 150, 150);
		Bureaucrat superImportantBureaucrat("Kid with pencil", 149);
		std::cout << superImportantBureaucrat << std::endl;
		std::cout << importantForm << std::endl;
		superImportantBureaucrat.signForm(importantForm);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}