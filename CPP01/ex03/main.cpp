#include "ZombieHorde.hpp"

int				main(void)
{
	Zombie		fighter("Junhpark", "Fighter");

	std::cout << std::endl;
	fighter.announce();
	std::cout << std::endl << std::endl;
	system("sleep 3");

	std::cout << std::endl << std::endl;
	ZombieHorde	horde(10);
	horde.hordeAnnounce();

	std::cout << std::endl << std::endl;


	return (0);
}
