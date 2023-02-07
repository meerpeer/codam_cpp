/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:36:52 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/07 14:36:53 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"

int	main()
{
	std::cout << "======== construct =======" << std::endl;
	ClapTrap	claptrap1;
	ClapTrap	claptrap2("Snake");
	ClapTrap	claptrap3(claptrap2);
	
	claptrap1 = ClapTrap("Perel");

	//check if copied correctly
	std::cout << std::endl;
	std::cout << "claptrap1: " << claptrap1 << std::endl;
	std::cout << "claptrap2: " << claptrap2 << std::endl;
	std::cout << "claptrap3: " << claptrap3 << std::endl;

	//attack, take damage and repair, then check info
	std::cout << std::endl;
	claptrap1.attack("Snake");
	claptrap2.takeDamage(claptrap1.getAttackDamage());
	claptrap2.beRepaired(5);
	std::cout << "claptrap2: " << claptrap2 << std::endl;

	//attack until tired, then try to repair
	std::cout << std::endl;
	for (int i = claptrap1.getEnergypoints() + 1; i > 0; i--)
		claptrap1.attack("Snake");
	claptrap1.beRepaired(5000);
	
	//take a lot of damage, then try to take more damage,
	//then try to attack and repair
	std::cout << std::endl;
	claptrap2.takeDamage(5000);
	claptrap2.takeDamage(1);
	claptrap2.attack("Perel");
	claptrap2.beRepaired(10);

	//print info
	std::cout << std::endl;
	std::cout << "claptrap1: " << claptrap1 << std::endl;
	std::cout << "claptrap2: " << claptrap2 << std::endl;
	std::cout << "claptrap3: " << claptrap3 << std::endl;

	//lets kill 1 :)
	std::cout << std::endl;
	claptrap1.takeDamage(claptrap1.getHitPoints());
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;

	return 0;
}