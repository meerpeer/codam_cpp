/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:34:07 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/26 13:36:17 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class	Contact {
private:
	void		print_info(std::string info);
	void		display_full_info(std::string info_name, std::string info);

public:
	Contact();
	~Contact();
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
	void		display_info(int index);
	void		display_all_info(int index);

};

#endif