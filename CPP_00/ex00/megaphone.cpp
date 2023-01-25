/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 12:17:22 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/01/25 17:52:03 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string	str;
	for (int i = 1; i < argc; i++){
		str = argv[i];
		for (int j = 0; j < str.length(); j++)
			std::cout << (char) toupper(str[j]);
	}
	std::cout << std::endl;
	return 0;
}
