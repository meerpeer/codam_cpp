/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:57:34 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 10:12:08 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <exception>

Zombie *newZombie(std::string name) {
	Zombie *zombie;

	try {
		zombie = new Zombie(name);
	}
	catch (std::exception& e) {
		std::cout << "standard exception: " << e.what() << std::endl;
	}

	return zombie;
}