#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class			Fixed
{
private:
	int					value;
	static const int	bits = 8; // 항상 리터럴 변수를 사용한다.
public:
	Fixed();
	Fixed(const Fixed& other);
	~Fixed();
	Fixed&				operator=(const Fixed& other);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);

};



#endif
