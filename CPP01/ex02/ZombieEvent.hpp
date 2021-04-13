#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	/* data */
public:
	ZombieEvent();
	Zombie*					newZombie(const std::string type);
	const std::string		setRandomName();
};

#endif
