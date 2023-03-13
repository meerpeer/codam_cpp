#include "include/Scalar.hpp"
#include <iostream>
#include "Scalar.hpp"

Scalar::Scalar(){}

Scalar::Scalar(std::string literal) : _literal(literal) {}

Scalar::~Scalar(){}

Scalar& Scalar::operator=(const Scalar &other)
{
	this->_literal = other.getLiteral();
	return (*this);
}

Scalar::Scalar(const Scalar &copy)
{
	*this = copy;
}

std::string Scalar::getLiteral() const
{
	return this->_literal;
}

void Scalar::convertFromInt() const
{
}

void Scalar::convertFromChar() const
{
}

void Scalar::convertFromFloat() const
{
}

void Scalar::convertFromDouble() const
{
}

void Scalar::convertLiteral() const
{
	e_type	type = getType();
	switch (type)
	{
		case INVALID:
			/* code */
			break;
		case INF_DOUBLE || INF_FLOAT:
			convertFromInf(type);
			break ;
		default:
			break;
	}
}

/// @brief prints out impossible for char and int and the literal (with or without f)
/// for float and double
/// @param type should either be INF_DOUBLE or INF_FLOAT, other wise function returns
void Scalar::convertFromInf(e_type type) const
{
	if (type != INF_DOUBLE || type != INF_FLOAT)
		return ;
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

e_type Scalar::getType() const
{
	std::string literal = this->_literal;
	int	length = literal.length();

	if (length == 1) {
		if (isdigit(literal.at(0)))
			return INT;
		if (isprint(literal.at(0)))
			return CHAR;
		else
			return INVALID;
	}
	else if (literal == "inf" || literal == "-inf" || literal == "+inf"
			|| literal == "+nan" || literal == "nan")
		return INF_DOUBLE;
	else if (literal == "inff" || literal == "-inff" || literal == "+inff"
			|| literal == "+nanf" || literal == "nanf")
		return INF_FLOAT;
	else if (length > 3 && literal.at(length - 1) == 'f')
		return FLOAT; //check this one
	else if (length > 2 && literal.find('.') != std::string::npos)
		return DOUBLE;
	return INT;
}


std::ostream &operator<<(std::ostream &output, Scalar &scalar)
{
	scalar.convertLiteral();
	return (output);
}