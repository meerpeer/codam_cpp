/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:45:34 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/26 13:38:31 by mevan-de      ########   odam.nl         */
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
		std::cout << std::right << std::setw(9) << info.substr(0, 9) << ".|" ;
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

void Contact::display_full_info(std::string info_name, std::string info) {
	std::cout << std::setw(10) << std::left << info_name << ": " << info << std::endl;
}

void Contact::display_all_info(int index) {
	
	std::cout << "Information for contact[" << index << "]: " << std::endl;
	this->display_full_info("- First", this->firstName);
	this->display_full_info("- Last", this->lastName);
	this->display_full_info("- Nick", this->nickName);
	this->display_full_info("- Phone", this->phoneNumber);
	this->display_full_info("- Secret", this->darkestSecret);
	std::cout << std::endl;
}
