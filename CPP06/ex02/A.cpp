#include "A.hpp"

A::A() {}

A::~A() {}

A::A(const A& other)
{
	*this = other;
}

A&			A::operator=(const A& other)
{
	(void)other;
	return (*this);
}
