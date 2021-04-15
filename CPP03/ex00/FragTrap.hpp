#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
private:
	std::string			name;
	int					hitPoints;
	int					energyPoints;
	int					maxHitPoints;
	int					maxEnergyPoints;
	int					level;
	int					meleeAttackDamage;
	int					rangedAttackDamage;
	int					armorDamageReduction;

	//bonus
	static std::string			skillList[5];
	static std::string			skillVerse[5];



public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap();

	FragTrap&		operator=(const FragTrap& other);

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	const int&		getHitPoints() const;

	void			vaulthunter_dot_exe(std::string const & target); // Bonus
};

#endif
