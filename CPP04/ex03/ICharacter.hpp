#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
# include <iostream>

class AMateria;
class ICharacter;

// 완전 추상 클래스...
class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual const std::string&	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
