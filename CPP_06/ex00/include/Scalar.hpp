#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>

enum	e_type {
	CHAR,
	INT,
	DOUBLE,
	INF_DOUBLE,
	FLOAT,
	INF_FLOAT,
	INVALID
};

class Scalar
{
	private:
		std::string	_literal;

		void	convertFromInt() const;
		void	convertFromChar() const;
		void	convertFromFloat() const;
		void	convertFromDouble() const;
		void	convertFromInf(e_type type) const;
		e_type	getType() const;
		

	public:
		Scalar();
		Scalar(std::string literal);
		Scalar(const Scalar &copy);
		Scalar& operator=(const Scalar &other);
		~Scalar();

		void		convertLiteral() const;
		std::string	getLiteral() const;
};

std::ostream &operator<< (std::ostream &output, Scalar &scalar);

#endif