#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class		NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);

	NinjaTrap&		operator=(const NinjaTrap& other);

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);
	void			ninjaShoebox(ClapTrap &trap);
	void			ninjaShoebox(FragTrap &trap);
	void			ninjaShoebox(ScavTrap &trap);
	void			ninjaShoebox(NinjaTrap &trap);

};


#endif
