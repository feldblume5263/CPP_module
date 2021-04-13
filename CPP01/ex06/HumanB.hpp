#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class		HumanB
{
private:
	std::string		name;
	Weapon*			weapon;
public:
	HumanB(const std::string& name);
	~HumanB();
	void			setWeapon(Weapon& weapon);
	void			attack();
};

void				HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void			HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(const std::string& name)
	: name(name), weapon(NULL)
{

}

HumanB::~HumanB()
{
}


#endif
