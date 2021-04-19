#include "AMateria.hpp"

void				AMateria::setXP(const int xp)
{
	_xp = xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

unsigned int			AMateria::getXP() const
{
	return (_xp);
}

const std::string& 		AMateria::getType() const
{
	return (_type);
}

AMateria&				AMateria::operator=(const AMateria& other)
{
	_type = other._type;
	_xp = other._xp;
	return (*this);
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::AMateria(const std::string& type) : _type(type), _xp(0)
{
}

AMateria::AMateria(void) : _type("unknown"), _xp(0)
{
}

AMateria::~AMateria()
{
}
