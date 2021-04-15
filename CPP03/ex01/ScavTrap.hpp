#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class 			ScavTrap
{
private:
	std::string		name;
	int				hitPoints;
	int				maxHitPoints;
	int				energyPoints;
	int				maxEnergyPoints;
	int				level;
	int				meleeAttackDamage;
	int				rangedAttackDamage;
	int				armorDamageReduction;

	static std::string	challengeList[5];


public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);

	ScavTrap&		operator=(const ScavTrap& other);

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	const int&		getHitPoints() const;

	void			goPicnic(std::string const & target) const;
	void			challengeNewcomer(std::string const & target);
};

#endif
