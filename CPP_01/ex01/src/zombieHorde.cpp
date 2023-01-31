/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:18:58 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 10:49:49 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <exception>

Zombie*	zombieHorde( int N, std::string name ) {
	if (N < 1) {
		std::cout << "N for zombieHorde can't be less than 1" << std::endl;
		exit (1);
	}
	else if (name.empty()) {
		std::cout << "Please provide a name for the zombies" << std::endl;
		exit (1);
	}

	Zombie*	Zombies;
	try {
		Zombies = new Zombie [N];
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
		exit (1);
	}

	for (int i = 0; i < N; i++) {
		Zombies[i].setName(name);
	}
	return Zombies;
}