#include "Fixed.hpp"

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

Fixed::Fixed() : value(42)
{
	std::cout << "I am default Constructor!" << std::endl << "I set value as 0!!" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "I am copy Constructor!" << std::endl << "I make one more of the same!" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "I am copy Destructor!" << std::endl << "I delete Object!" << std::endl;
}

Fixed& 		Fixed::operator=(const Fixed& other)
{
	std::cout << "I am Assignation operator!" << std::endl << "I assign a value to the class"<< std::endl;
	value = other.getRawBits();
	return (*this);
}

int			main(void)
{
	std::cout << std::endl << "--------------------" << std::endl;
	std::cout << "<<< Default Constructor >>> " << std::endl;
	Fixed a;
	std::cout << "--------------------" << std::endl << std::endl;

	std::cout << std::endl << "--------------------" << std::endl;
	std::cout << "<<< Copy Constructor >>> " << std::endl;
	Fixed b(a);
	std::cout << "--------------------" << std::endl << std::endl;

	std::cout << std::endl << "--------------------" << std::endl;
	std::cout << "<<< Assignation Operator >>> " << std::endl;
	Fixed c;
	c = b;
	std::cout << "--------------------" << std::endl << std::endl;

	std::cout << std::endl << "--------------------" << std::endl;
	std::cout << "<<< Get fuctions >>> " << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
	return 0;
}
