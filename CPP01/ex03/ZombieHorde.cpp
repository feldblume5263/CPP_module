#include "ZombieHorde.hpp"

const std::string		ZombieHorde::setRandomName()
{
	std::string		name;
	std::string		big_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::string		lit_alpha("abcdefghijklmnopqrstuvwxyz");
	int				size;
	int				idx;

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

void					ZombieHorde::hordeAnnounce()
{
	int					idx;

	idx = 0;
	while (idx < this->size)
	{
		horde[idx].announce();
		idx++;
	}
}

ZombieHorde::ZombieHorde(const int& size)
	: size(size)
{
	int				idx;

	std::srand(std::time(NULL));
	horde = new Zombie[size];
	idx = 0;
	while (idx < size)
	{
		horde[idx].setName(setRandomName());
		horde[idx].setType("Horde");
		idx++;
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Fighter zombie kills all" << std::endl << "only Fighter zombie has left" << std::endl;
	delete[] horde;
}
