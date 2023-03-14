#include "include/Scalar.hpp"
#include <iostream>
#include <sstream>
#include <limits>

Scalar::Scalar() : _literal("0") {}

Scalar::Scalar(std::string literal) : _literal(literal) {}

Scalar::~Scalar(){}

Scalar::Scalar(const Scalar &copy)
{
	*this = copy;
}

Scalar& Scalar::operator=(const Scalar &other)
{
	this->_literal = other.getLiteral();
	return (*this);
}

std::string Scalar::getLiteral() const
{
	return this->_literal;
}

// 1. check if num is in range of characters
// 2. check if num is within displayable characters
// 3. else print character
void Scalar::printChar(long double num)
{
	std::cout << "char: ";
	if (num < 0 || num > 127)
		std::cout << "impossible";
	else if ((num < 33 && num >= 0) || num == 127)
		std::cout << "non displayable";
	else
		std::cout << static_cast<char>(num);
	std::cout << std::endl;
}

void Scalar::printInt(long double num)
{
	std::cout << "int: ";
	if (num < std::numeric_limits<int>::max() //<=? >=?
		&& num > std::numeric_limits<int>::min())
		std::cout << static_cast<int>(num);
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

bool Scalar::shouldAddZero()
{
	size_t pointPos = _literal.find(".");

	if (pointPos == std::string::npos)
		return true;
	pointPos++;
	while (pointPos < _literal.length())
	{
		if(_literal[pointPos] != '0')
			return false;
		pointPos++;
	}
	return true;
}

void Scalar::printFloat(long double num)
{
	std::cout << "float: ";
	if (num < std::numeric_limits<float>::max() 
		&& num > std::numeric_limits<float>::min())
		std::cout << static_cast<float>(num);
	if (shouldAddZero())
		std::cout << ".0";
	std::cout << 'f';
	std::cout << std::endl;
}

void Scalar::printDouble(long double num)
{
	std::cout << "double: ";
	if (num < std::numeric_limits<double>::max()
		&& num > std::numeric_limits<double>::min())
		std::cout << static_cast<double>(num);
	if (shouldAddZero())
		std::cout << ".0";
	// doesnt work, we should check for infinite 0's
	std::cout << std::endl;
}

void Scalar::printValues(long double num)
{
	printChar(num);
	printInt(num);
	printFloat(num);
	printDouble(num);
}

/// @brief prints out impossible for char and int and the literal (with or without f)
/// for float and double
/// @param type should either be INF_DOUBLE or INF_FLOAT
void Scalar::printValuesInf(e_type type) const
{
	std::string inf = this->_literal;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	switch (type)
	{
		case INF_DOUBLE:
			std::cout	<< "float: " << inf << "f" << std::endl;
			std::cout	<< "double: " << inf << std::endl;
			break ;
		case INF_FLOAT:
			std::cout	<< "float: " << inf << std::endl;
			std::cout	<< "double: " << inf.substr(0, inf.length() - 1) << std::endl;
			break ;
	}
}

void Scalar::convertLiteral()
{
	std::stringstream	stringStream;
	long double			num;

	//checking if an 'f' is at the end, should be removed (will be added when printing float)
	if (this->_literal.back() == 'f')
		this->_literal.pop_back();
	
	//assigning the literal to string stream
	stringStream << this->_literal;

	//trying to convert stringstream to double long
	if (stringStream >> num)
		printValues(num);
	else if (_literal == "inf" || _literal == "-inf" || _literal == "+inf"
			|| _literal == "+nan" || _literal == "nan")
		printValuesInf(INF_DOUBLE);
	else if (_literal == "inff" || _literal == "-inff" || _literal == "+inff"
			|| _literal == "+nanf" || _literal == "nanf")
		printValuesInf(INF_FLOAT);
	else
		std::cout << "argument non-convertable" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Scalar &scalar)
{
	scalar.convertLiteral();
	return (output);
}

/*
--- resources ---
stringstream:
- //https://www.programiz.com/cpp-programming/string-float-conversion example 4
- The way I convert the input to long double for 98: shorturl.at/qwDK6

static casting:
- https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/

*/