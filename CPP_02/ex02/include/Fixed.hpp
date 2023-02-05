#ifndef FIXED_HPP
# define FIXED_HPP
#include <cmath>
#include <iostream>

class	Fixed{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed& other);

		float toFloat( void ) const;
		int toInt( void ) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
		//ex02
		//comparision operators
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		//arithmetic operators:
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);

		//increment operators:
		//https://www.programiz.com/cpp-programming/increment-decrement-operator-overloading
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		//min max funtions:
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		const static Fixed&	min(const Fixed& a, const Fixed& b);
		const static Fixed&	max(const Fixed& a, const Fixed& b);


		~Fixed();

};

		std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif