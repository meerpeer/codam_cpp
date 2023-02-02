/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:46:59 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/02 15:31:28 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	this->_currContactIndex = 0;
	this->_nrOfContacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void PhoneBook::start_phonebook()
{
	loop();
}

void	PhoneBook::increment_contact_index() {
	this->_currContactIndex++;
	this->_currContactIndex %= 8;
	if (this->_nrOfContacts < 8)
		this->_nrOfContacts++;
	return ;
}

std::string	PhoneBook::get_input(std::string prompt, bool isPhoneNr) {
	std::string	input;
	std::cout << prompt;
	while (getline(std::cin, input))
	{
		if (input.length() <= 0)
			std::cout << "Please provide an argument" << std::endl;
		else if (!isPhoneNr)
			return (input);
		else if (input.find_first_not_of("0123456789") == std::string::npos)
			return (input);
		else
			std::cout << "Please provide a number (without spaces)" << std::endl;
		std::cout << prompt;
	}
	exit (0);
}

void PhoneBook::save_new_contact() {
	bool	correct_input = false;
	int		index = this->_currContactIndex;

	std::cout << std::endl << "Adding new contact" << std::endl;
	std::cout << "------------------" << std::endl;

	this->contacts[index].set_first_name(get_input("first name: ", false));
	this->contacts[index].set_last_name(get_input("last name: ", false));
	this->contacts[index].set_nick_name(get_input("nick name: ", false));
	this->contacts[index].set_phone_number(this->get_input("phone number: ", true));
	this->contacts[index].set_darkest_secret(this->get_input("darkest secret: ", false));
	increment_contact_index();

	std::cout << std::endl << "Contact added!" << std::endl;
	std::cout << "--------------" << std::endl << std::endl;
}

input_type	PhoneBook::get_input_type (std::string str)
{
	if (str == "ADD")
		return (ADD);
	else if (str == "SEARCH")
		return (SEARCH);
	else if (str == "EXIT")
		return (EXIT);
	return (UNKNOWN);
}

void	PhoneBook::display_contacts() {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     INDEX|     FIRST|      LAST|      NICK|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->_nrOfContacts; i++) {
		this->contacts[i].display_info(i);
		std::cout << "---------------------------------------------" << std::endl;
	}
}

void	PhoneBook::search() {
	if (this->_nrOfContacts > 0)
		this->display_contacts();
	else {
		std::cout << "No contacts found" << std::endl << std::endl;
		return ;
	}
	
	std::string input;
	std::cout << "contact index: ";
	while(getline(std::cin, input)) {
		if (input.find_first_not_of("01234567") == std::string::npos
			&& input.length() == 1) {
				int	index = input[0] - '0';
				if (index < this->_nrOfContacts) {
					this->contacts[index].display_all_info(index);
					return ;
				}
			}
		std::cout << "please provide a valid index" << std::endl;
		std::cout << "contact index: ";
	}
	exit (0);
}

void	PhoneBook::loop() {
	std::string	input;
	input_type	input_type;

	std::cout << "Use commands: ADD, SEARCH, EXIT\n";
	while (getline(std::cin, input))
	{
		input_type = get_input_type(input);
		switch (input_type)
		{
			case ADD:
				save_new_contact();
				break;
			case SEARCH:
				search();
				break;
			case EXIT:
				exit(0);
				break;
			default:
				std::cout << "what?!\n";
		}
		std::cout << "Use commands: ADD, SEARCH, EXIT\n";
	}
}

