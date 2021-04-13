#include "ZombieEvent.hpp"

int				main(void)
{
	Zombie		fighter("Junhpark", "Fighter");

	std::cout << std::endl;
	fighter.announce();
	std::cout << std::endl << std::endl;
	system("sleep 3");

	ZombieEvent	event;
	Zombie*		enemy[5];
	int			idx;

	idx = 0;
	while (idx < 5)
	{
		enemy[idx] = event.newZombie("Enemy");
		enemy[idx]->announce();
		system("sleep 1");
		idx++;
	}

	std::cout << std::endl;
	std::cout << "Fighter zombie starts to kill enemy zombies" << std::endl;
	std::cout << std::endl;
	system("sleep 2");

	idx = 0;
	while (idx < 5)
	{
		enemy[idx]->killMessage();
		delete (enemy[idx]);
		system("sleep 1");
		idx++;
	}
	std::cout << std::endl << std::endl;

	Zombie*		clone;

	clone = event.newZombie("Clone");
	clone->announce();
	system("sleep 1");

	delete (clone);
	std::cout << std::endl;
	clone->killMessage();
	std::cout << std::endl;
	system("sleep 2");

	std::cout << std::endl << std::endl;
	std::cout << "Only Figher Zombie is left" << std::endl;
	system("sleep 3");

	return (0);
}
