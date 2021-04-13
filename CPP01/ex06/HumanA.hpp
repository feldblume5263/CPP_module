#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
# include "Weapon.hpp"

class		HumanA
{
private:
	std::string		name;
	Weapon&			weapon;

public:
	HumanA(const std::string& name, Weapon& Weapon);
	~HumanA();
	void			attack();
};

void				HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}


HumanA::HumanA(const std::string& name, Weapon& weapon)
	: name(name), weapon(weapon)
{

}

HumanA::~HumanA()
{
}


#endif
