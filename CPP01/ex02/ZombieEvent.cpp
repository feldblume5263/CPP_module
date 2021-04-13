#include "ZombieEvent.hpp"

const std::string		ZombieEvent::setRandomName()
{
	std::string		name;
	std::string		big_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::string		lit_alpha("abcdefghijklmnopqrstuvwxyz");
	int				size;
	int				idx;

	std::srand(std::time(NULL));
	size = (rand() % 6) + 5;
	idx = 0;
	while (idx < size)
	{
		if (idx == 0)
			name.push_back(big_alpha[rand() % big_alpha.length()]);
		else
			name.push_back(lit_alpha[rand() % lit_alpha.length()]);
		idx++;
	}
	return (name);
}

Zombie*					ZombieEvent::newZombie(const std::string type)
{
	return (new Zombie(setRandomName(), type));
}

ZombieEvent::ZombieEvent()
{

}
