#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class			C : public Base
{

public:
	C();
	virtual ~C();
	C(const C& other);
	C&			operator=(const C& other);

};

#endif
