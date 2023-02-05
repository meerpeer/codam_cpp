#include "../include/Fixed.hpp"
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called" << std::endl;
	setRawBits(value << this->_bits);
	return ;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return (*this) ;
}

float Fixed::toFloat(void) const
{
	float convertedFloat;
	convertedFloat = (float) this->_value / (1 << this->_bits);
	return (convertedFloat);
}

int Fixed::toInt(void) const
{
	int	convertedInt;
	convertedInt = this->_value >> this->_bits;
	return (convertedInt);
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{

	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	//std::cout << "Deconstructor called" << std::endl;
	return ;
}

//ex02
// compare:
bool Fixed::operator>(Fixed const &rhs) const
{
	if (this->_value > rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	if (this->_value < rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_value >= rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_value <= rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	if (this->_value == rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_value != rhs.getRawBits())
		return (true);
	return false;
}


//arithmetic :
Fixed Fixed::operator+(Fixed const &rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}


//increments :
Fixed Fixed::operator++(void)
{
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	copy(*this);
	setRawBits(getRawBits() + 1);
	return copy;
}

Fixed Fixed::operator--(void)
{
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	copy(*this);
	setRawBits(getRawBits() - 1);
	return copy;
}


// min max:
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}
