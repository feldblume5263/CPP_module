#include "PowerFist.hpp"

void						PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist&					PowerFist::operator=(const PowerFist& other)
{
	setName(other.getName());
	setAPCost(other.getAPCost());
	setDamage(other.getDamage());
	return (*this);
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other)
{
	*this = other;
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}
