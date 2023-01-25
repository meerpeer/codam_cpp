/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:33:52 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/25 15:53:31 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class	PhoneBook{
private:
	Contact	contacts[8];
	int		_index;
	int		_nrOfContacts;
	
public:
	PhoneBook( void );
	~PhoneBook( void );
};

#endif