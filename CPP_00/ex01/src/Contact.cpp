/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:45:34 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/02 15:33:07 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::print_info(std::string info) {
	if (info.length() > 10)
		std::cout << std::right << std::setw(9) << info.substr(0, 9) << ".|" ;
	else
		std::cout << std::right << std::setw(10) << info << "|" ;
	
}

void Contact::display_info(int index) {
	std::cout << "|         " << index << "|";
	print_info(_firstName);
	print_info(_lastName);
	print_info(_nickName);
	std::cout << std::endl;
}

void Contact::display_full_info(std::string info_name, std::string info) {
	std::cout << std::setw(10) << std::left << info_name << ": " << info << std::endl;
}

void Contact::display_all_info(int index) {
	
	std::cout << "Information for contact[" << index << "]: " << std::endl;
	this->display_full_info("- First", this->_firstName);
	this->display_full_info("- Last", this->_lastName);
	this->display_full_info("- Nick", this->_nickName);
	this->display_full_info("- Phone", this->_phoneNumber);
	this->display_full_info("- Secret", this->_darkestSecret);
	std::cout << std::endl;
}


void Contact::set_first_name(std::string name) {
	this->_firstName = name;
}

void Contact::set_last_name(std::string name) {
	this->_lastName = name;
}

void Contact::set_phone_number(std::string number) {
	this->_phoneNumber = number;
}

void Contact::set_nick_name(std::string name) {
	this->_nickName = name;
}

void Contact::set_darkest_secret(std::string secret) {
	this->_darkestSecret = secret;
}