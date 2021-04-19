#include "RadScorpion.hpp"

void				RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

RadScorpion&		RadScorpion::operator=(const RadScorpion& other)
{
	setHP(other.getHP());
	setType(other.getType());
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) : Enemy(other)
{
	*this = other;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion() : Enemy(80, "Super Mutant")
{
	std::cout << "* click click click *" << std::endl;
}
