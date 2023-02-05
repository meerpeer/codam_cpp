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
	
		~Fixed();

};

		std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif