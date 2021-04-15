#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class 			ScavTrap : public ClapTrap
{
private:
	static std::string	challengeList[5];


public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);

	ScavTrap&		operator=(const ScavTrap& other);

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);

	void			challengeNewcomer(std::string const & target);
};

#endif
