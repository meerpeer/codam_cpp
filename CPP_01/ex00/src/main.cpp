/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:59 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 10:51:58 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ){
	Zombie	*Zombie1 = newZombie("Unicorn");
	Zombie	*Zombie2 = newZombie("Glenn");

	Zombie1->announce();
	randomChump("Bagel");
	Zombie2->announce();
	delete Zombie1;
	delete Zombie2;
}