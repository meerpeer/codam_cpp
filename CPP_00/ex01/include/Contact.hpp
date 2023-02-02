/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 15:34:07 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/02 15:25:46 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class	Contact {
private:
	void		print_info(std::string info);
	void		display_full_info(std::string info_name, std::string info);
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	Contact();
	~Contact();

	void	set_first_name(std::string name);
	void	set_last_name(std::string name);
	void	set_nick_name(std::string name);
	void	set_phone_number(std::string number);
	void	set_darkest_secret(std::string secret);

	void	display_info(int index);
	void	display_all_info(int index);
};

#endif