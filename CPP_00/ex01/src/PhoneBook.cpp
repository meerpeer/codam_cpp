/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:46:59 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/25 18:41:29 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	this->_currContactIndex = 0;
	this->_nrOfContacts = 0;
	this->loop();
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
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
	while (1)
	{
		std::cout << prompt;
		getline(std::cin, input);
		if (input.length() <= 0)
			std::cout << "Please provide an argument" << std::endl;
		else if (!isPhoneNr)
			return (input);
		else if (input.find_first_not_of("0123456789") == std::string::npos)
			return (input);
		else
			std::cout << "Please provide a number (without spaces)" << std::endl;
	}
}

void PhoneBook::save_new_contact() {
	bool	correct_input = false;
	int		index = this->_currContactIndex;

	std::cout << std::endl << "Adding new contact" << std::endl;
	std::cout << "------------------" << std::endl;

	this->contacts[index].firstName = this->get_input("first name: ", false);
	this->contacts[index].lastName = this->get_input("last name: ", false);
	this->contacts[index].nickName = this->get_input("nick name: ", false);
	this->contacts[index].phoneNumber = this->get_input("phone number: ", true);
	this->contacts[index].darkestSecret = this->get_input("darkest secret: ", false);
	this->increment_contact_index();

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
	getline(std::cin, input);
	//TODO 
// 	Then, prompt the user again for the index of the entry to display. If the index
// is out of range or wrong, define a relevant behavior. Otherwise, display the
// contact information, one field per line.
}

void	PhoneBook::loop() {
	std::string	input;
	input_type	input_type;

	while (1)
	{
		std::cout << "Use commands: ADD, SEARCH, EXIT\n";
		getline(std::cin, input);
		input_type = this->get_input_type(input);
		switch (input_type)
		{
			case ADD:
				this->save_new_contact();
				break;
			case SEARCH:
				this->search();
				break;
			case EXIT:
				exit(0);
				break;
			default:
				std::cout << "what?!\n";
		}
	}
}

