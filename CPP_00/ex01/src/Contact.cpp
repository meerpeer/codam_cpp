/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:45:34 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/25 18:24:25 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
	//return ;
}

void Contact::print_info(std::string info) {
	if (info.length() > 10)
		std::cout << std::right << std::setw(10) << info.substr(0, 9) << ".|" ;
	else
		std::cout << std::right << std::setw(10) << info << "|" ;
	
}

void Contact::display_info(int index) {
	std::cout << "|         " << index << "|";
	print_info(this->firstName);
	print_info(this->lastName);
	print_info(this->nickName);
	std::cout << std::endl;
}
