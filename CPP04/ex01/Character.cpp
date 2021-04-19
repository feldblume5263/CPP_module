#include "Character.hpp"

std::ostream&       operator<<(std::ostream& os, const Character& character)
{
	if (character.getWeapon())
		os << character.getName() << " has " << character.getAp() <<" AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		os << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	return (os);
}

AWeapon*					Character::getWeapon() const
{
	return (this->weapon);
}

int							Character::getAp() const
{
	return (this->ap);
}

const std::string&			Character::getName() const
{
	return (this->name);
}

void						Character::attack(Enemy* enemy)
{
	if(!enemy || !weapon)
		return ;
	if (this->ap >= weapon->getAPCost())
	{
		ap -= weapon->getAPCost();
		std::cout << name << " attacks " << enemy->getType() <<
			" with a " << weapon->getName() << std::endl;
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
	else
		ap = 0;
}

void						Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

void						Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}

Character&					Character::operator=(const Character& other)
{
	name = other.name;
	ap = other.ap;
	weapon = other.weapon;
	return (*this);
}

Character::~Character()
{

}

Character::Character(const Character& other)
{
	*this = other;
}

Character::Character(std::string const &name)
	: name(name), ap(40), weapon(NULL)
{

}

Character::Character()
	: name("unknown"), ap(40), weapon(NULL)
{
}
