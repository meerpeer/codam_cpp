#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>

enum	e_type {
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	INVALID
};

class Scalar
{
	private:
		std::string	_literal;
		e_type		_type;
		void ConvertFromInt();
		void ConvertFromChar();

	public:
		Scalar();
		Scalar(std::string literal);
		~Scalar();
		ConvertLiteral()
};

Scalar::Scalar()
{
}

Scalar::~Scalar()
{
}


#endif