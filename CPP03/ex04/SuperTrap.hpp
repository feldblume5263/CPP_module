#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "NinjaTrap.hpp"

class			SuperTrap : public NinjaTrap, public FragTrap
{
private:

public:
	SuperTrap();
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& other);
	~SuperTrap();

	SuperTrap&		operator=(const SuperTrap& other);

	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
};


#endif
