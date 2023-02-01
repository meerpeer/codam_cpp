#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra seaweed for my ";
	std::cout << "7XL-double-tomato-triple-pickle-specialketchup ";
	std::cout << "burger. I really do!";
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra seaweed costs more money. ";
	std::cout << "You didn’t put enough seaweed in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra seaweed for free. ";
	std::cout << "I’ve been coming for years ";
	std::cout << "whereas you started working here since last month.";
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now.";
	std::cout << std::endl;
}

int Harl::get_level(std::string level)
{
	std::string	complainLevels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR" };
	
	for (int i = 0; i < 4; i++) {
		std::string complainLevel = complainLevels[i];
		if (complainLevel == level)
			return (i);
	}
	return -1;
}

void Harl::complain(std::string level)
{
	switch(get_level(level))
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			return ;
	}
	std::cout << "\"" << level << "\" is not an option for Harl";
	std::cout << std::endl;
}

Harl::~Harl()
{
}