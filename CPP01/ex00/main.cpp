#include "Pony.hpp"

void	makeBlank()
{
	int		idx;

	idx = 0;
	while (idx < 5)
	{
		std::cout << std::endl;
		idx++;
	}
}

void	ponyOnTheHeap()
{
	Pony*	pony;

	pony = new Pony("Heaping", "🐴");
	system("sleep 3");
	pony->runningPony();
	pony->disapeared();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony("Stacking", "🦄");
	system("sleep 3");
	pony.runningPony();
	pony.disapeared();
}

int		main(void)
{
	system("clear");
	makeBlank();
	std::cout << "<<ponyOnTheHeap>>" << std::endl << std::endl;
	ponyOnTheHeap();

	std::cout << std::endl;
	system("sleep 2");

	system("clear");
	makeBlank();
	std::cout << "<<ponyOnTheStack>>" << std::endl << std::endl;;
	ponyOnTheStack();

	return (0);
}
