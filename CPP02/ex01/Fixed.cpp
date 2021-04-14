#include "Fixed.hpp"

float			Fixed::toFloat(void) const
{
	return (float(this->value) / float(1 << bits));
}

int				Fixed::toInt(void) const
{
	return (this->value >> bits);
}





int			Fixed::getRawBits(void) const
{
	std::cout << "I am get function" << std::endl << "I get and return value" << std::endl;
	return (value);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "I am set function!" << std::endl << "I set value by parameter!!" << std::endl;
	value = raw;
}





Fixed::Fixed(const int raw)
{
	this->value = (raw << bits);
}

Fixed::Fixed(const float raw)
{
	this->value = roundf(raw * (1 << bits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "I am copy Constructor!" << std::endl << "I make one more of the same!" << std::endl;
	*this = other;
}

Fixed::Fixed() : value(42)
{
	std::cout << "I am default Constructor!" << std::endl << "I set value as 0!!" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "I am Destructor!" << std::endl << "I delete Object!" << std::endl;
}





std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}

Fixed& 		Fixed::operator=(const Fixed& other)
{
	std::cout << "I am Assignation operator!" << std::endl << "I assign a value to the class"<< std::endl;
	value = other.getRawBits();
	return (*this);
}





int main( void )
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
