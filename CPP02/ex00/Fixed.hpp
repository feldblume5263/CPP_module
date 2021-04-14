#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class			Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const Fixed& other);
	~Fixed();
	Fixed&				operator=(const Fixed& other);

	int			getValue(void) const;
	void		setValue(int const raw);

};

int			Fixed::getValue(void) const
{
	std::cout << "I am get function" << std::endl << "I get and return value" << std::endl;
	return (value);
}

void		Fixed::setValue(int const raw)
{
	std::cout << "I am set function!" << std::endl << "I set value by parameter!!" << std::endl;
	value = raw;
}

Fixed::Fixed() : value(0)
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
	value = other.getValue();
	return (*this);
}


#endif
