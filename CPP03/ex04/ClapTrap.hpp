#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class				ClapTrap
{
protected:
	std::string			name;
	int					hitPoints;
	int					energyPoints;
	int					maxHitPoints;
	int					maxEnergyPoints;
	int					level;
	int					meleeAttackDamage;
	int					rangedAttackDamage;
	int					armorDamageReduction;
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	const int&			getHitPoints() const;
	const std::string&	getName() const;
};

#endif
