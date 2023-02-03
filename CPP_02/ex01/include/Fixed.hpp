#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		//A default constructor that initializes the fixed-point number value to 0.
		Fixed();

		//A copy constructor.
		Fixed(Fixed &copy);

		//A copy assignment operator overload.
		Fixed& operator=(const Fixed& other);
	
		//A destructor
		~Fixed();

		//A member function int getRawBits( void ) const;
		//that returns the raw value of the fixed-point value.
		int		getRawBits(void) const;

		//A member function void setRawBits( int const raw );
		//that sets the raw value of the fixed-point number.
		void	setRawBits(int const raw);

};

#endif