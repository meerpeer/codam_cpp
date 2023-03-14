#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>

enum	e_type {
	INF_DOUBLE,
	INF_FLOAT
};

class Scalar
{
	private:
		std::string	_literal;

		void printValues(long double num);
		void printChar(long double num);
		void printInt(long double num);
		void printFloat(long double num);
		void printDouble(long double num);
		void printValuesInf(e_type type) const;
		bool shouldAddZero();

	public:
		Scalar();
		Scalar(std::string literal);
		Scalar(const Scalar &copy);
		Scalar& operator=(const Scalar &other);
		~Scalar();


		void		convertLiteral();
		std::string	getLiteral() const;
};

std::ostream &operator<< (std::ostream &output, Scalar &scalar);

#endif