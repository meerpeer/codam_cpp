/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:54:48 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 11:03:54 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main ( void ) {
	std::string		stringVAR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringVAR;
	std::string&	stringREF = stringVAR;

	std::cout << "memory address stringVAR = " << &stringVAR << std::endl;
	std::cout << "memory address stringPTR = " << stringPTR << std::endl;
	std::cout << "memory address stringREF = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value stringVAR = " << stringVAR << std::endl;
	std::cout << "value stringPTR = " << *stringPTR << std::endl;
	std::cout << "value stringREF = " << stringREF << std::endl;

	return (0) ;
}
