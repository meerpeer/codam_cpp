/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:46:59 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/25 15:50:57 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	std::cout << "created a phonebook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "destroyed a phonebook" << std::endl;
	return ;
}
