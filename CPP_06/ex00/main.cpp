#include <string>
#include <iostream>
#include "include/Scalar.hpp"

int main	(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please provide one argument" << std::endl;
		return (1);
	}
	Scalar converter(argv[1]);//static_cast<std::string>(argv[1]));
	converter.convertLiteral();
	return 0;
}