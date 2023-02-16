/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:48 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/16 16:11:32 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include <iostream>

int	main()
{
	std::cout << " ====> Initializing bureaucrat wrong with: 0" << std::endl;
	try {
		Bureaucrat	bob("Bobbo", 0);
		std::cout << "Does this even print?" << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << " ====> Initializing bureaucrat wrong with: 151" << std::endl;
	try {
		Bureaucrat	bob("Bobbo", 151);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << " ====> Incrementing grade until impossible" << std::endl;
	try {
		int grade = 5;
		Bureaucrat	snob("Snobbo", grade);
		for (int i = grade; i > 0; i--) {
			std::cout << snob;
			snob.incrementGrade();
		}
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "===> Decrementing grade until impossible" << std::endl;
	try {
		int grade = 145;
		Bureaucrat	low("LowGradeMan", grade);
		for (int i = grade; i < 160; i++) {
			std::cout << low;
			low.decrementGrade();
		}
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}