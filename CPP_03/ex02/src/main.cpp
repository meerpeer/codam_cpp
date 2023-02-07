/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:35:37 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/07 15:01:30 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main()
{
	std::cout << "======== construct =======" << std::endl;
	ScavTrap scavvie("Scavvie");
	ClapTrap clappie("Clappie");
	FragTrap fraggie("Fraggie");

	std::cout << std::endl;
	std::cout << "===== attack sequence ====" << std::endl;
	scavvie.attack("Fraggie");
	fraggie.takeDamage(scavvie.getAttackDamage());
	fraggie.attack("Clappie");
	clappie.takeDamage(fraggie.getAttackDamage());
	scavvie.guardGate();
	fraggie.attack("Scavvie");
	scavvie.takeDamage(fraggie.getAttackDamage());
	fraggie.highFivesGuys();

	std::cout << std::endl;
	std::cout << "==== displaying info ====" << std::endl;
	std::cout << clappie << std::endl;
	std::cout << scavvie << std::endl;
	std::cout << fraggie << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	return 0;
}