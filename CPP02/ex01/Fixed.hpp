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
	Fixed(const int raw);
	Fixed(const float raw);
	~Fixed();
	Fixed&				operator=(const Fixed& other);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	int			toInt(void) const;
	float		toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
