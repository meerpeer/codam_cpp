#include <iostream>
#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main()
{
	std::cout << "======== construct =======" << std::endl;
	ScavTrap scavvie("Scavvie");
	ClapTrap clappie("Clappie");

	std::cout << std::endl;
	clappie.attack("Scavvie");
	scavvie.takeDamage(clappie.getAttackDamage());
	scavvie.attack("Clappie");
	clappie.takeDamage(scavvie.getAttackDamage());
	scavvie.guardGate();
	std::cout << std::endl;

	std::cout << clappie << std::endl;
	std::cout << scavvie << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	return 0;
}