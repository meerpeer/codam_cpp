/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:33:52 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/02 15:31:02 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

enum	input_type {
	ADD,
	SEARCH,
	EXIT,
	UNKNOWN
};

class	PhoneBook{
private:
	Contact		contacts[8];
	int			_currContactIndex;
	int			_nrOfContacts;

	void		increment_contact_index();
	std::string	get_input(std::string prompt, bool isPhoneNr);
	void		save_new_contact();
	input_type	get_input_type (std::string str);
	void		loop();
	void		search();
	void		display_contacts();

public:
	PhoneBook( void );
	~PhoneBook( void );

	void		start_phonebook();
};

#endif