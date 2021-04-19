#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class					SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& other);
	~SuperMutant();

	SuperMutant&		operator=(const SuperMutant& other);

	void				takeDamage(int damage);
};

#endif
