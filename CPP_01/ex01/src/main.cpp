/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:59 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 10:51:38 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void ){
	int		nr_zombs = 5;
	std::cout << "creating " << nr_zombs << " zombies: " << std::endl;
	Zombie	*Zombies = zombieHorde(nr_zombs, "sinterklaas");

	for (int i = 0; i < nr_zombs; i++){
		Zombies[i].announce();
	}

	std::cout << std::endl << "deleting all zombies: " << std::endl;
	delete[] Zombies;
}