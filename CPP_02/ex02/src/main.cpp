#include <iostream>
#include "../include/Fixed.hpp"

int main( void )
{
	//subject tests
	std::cout << "SUBJECT:" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//extra tests
	std::cout << std::endl;
	std::cout << "EXTRA:" << std::endl;

	Fixed	c(3);
	Fixed	d(2);
	Fixed	e(c / d);

	std::cout << "arithmetic:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e + a = " << e + a << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << std::endl;

	std::cout << "comparison:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "c < d = " << (c < d) << std::endl;
	std::cout << "c > d = " << (c > d) << std::endl;
	std::cout << "c >= d = " << (c >= d) << std::endl;
	std::cout << "c <= d = " << (c <= d) << std::endl;
	std::cout << "c == d = " << (c == d) << std::endl;
	std::cout << "c == c = " << (c == c) << std::endl;
	std::cout << "c != d = " << (c != d) << std::endl;
	std::cout << std::endl;

	std::cout << "increment:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "--e = " << --e << std::endl;
	std::cout << std::endl;

	std::cout << "min, max:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "min = " << Fixed::min( c, d ) << std::endl;
	std::cout << "max = " << Fixed::max( c, d ) << std::endl;
	std::cout << "min = " << Fixed::min( e, d ) << std::endl;
	std::cout << "max = " << Fixed::max( e, d ) << std::endl;
	return 0;

}

// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called