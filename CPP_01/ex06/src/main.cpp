#include "Harl.hpp"
#include <iostream>

int	main ( void )
{
	Harl	harlbot;

	std::cout << "[ DEBUG ]" << std::endl;
	harlbot.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[ INFO ]" << std::endl;
	harlbot.complain("INFO");
	std::cout << std::endl;

	std::cout << "[ WARNING ]" << std::endl;
	harlbot.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ ERROR ] " << std::endl;
	harlbot.complain("ERROR");
	std::cout << std::endl;

	std::cout << "[ Something random: ]" << std::endl;
	harlbot.complain("SNAKES");
	std::cout << std::endl;

}