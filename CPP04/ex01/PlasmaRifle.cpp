#include "PlasmaRifle.hpp"

void						PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle&				PlasmaRifle::operator=(const PlasmaRifle& other)
{
	setName(other.getName());
	setAPCost(other.getAPCost());
	setDamage(other.getDamage());
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other)
{
	*this = other;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}
