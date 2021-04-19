#include "AWeapon.hpp"

void				AWeapon::setDamage(const int& damage)
{
	this->damage = damage;
}

void				AWeapon::setAPCost(const int& apCost)
{
	this->apCost = apCost;
}

void				AWeapon::setName(const std::string& name)
{
	this->name = name;
}

int					AWeapon::getDamage() const
{
	return (this->damage);
}

int					AWeapon::getAPCost() const
{
	return (this->apCost);
}

std::string			AWeapon::getName() const
{
	return (this->name);
}


AWeapon&			AWeapon::operator=(const AWeapon& other)
{
	name = other.name;
	apCost = other.apCost;
	damage = other.damage;
	return (*this);
}


AWeapon::AWeapon(const AWeapon& other)
{
	*this = other;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
				: name(name), apCost(apcost), damage(damage)
{
}

AWeapon::AWeapon()
				: name("unknown"), apCost(0), damage(0)
{
}

AWeapon::~AWeapon()
{
}
