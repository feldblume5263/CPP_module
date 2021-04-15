#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
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

	void			vaulthunter_dot_exe(std::string const & target); // Bonus
};

#endif
