#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class			ZombieHorde
{
private:
	Zombie*		horde;
	int			size;

public:
	ZombieHorde(const int& size);
	~ZombieHorde();
	const std::string		setRandomName();
	void					hordeAnnounce();
};

#endif
