#include "Pony.hpp"

void			Pony::disapeared()
{
	makeBlank();
	std::cout << name << " was disapeared..." << std::endl;
	system("sleep 3");
}

void			Pony::runningPony()
{
	int			idx;
	int			blank;
	int			footprint;

	idx = 0;
	system("sleep 1");
	system("clear");
	while (idx <= 10 && (name == "Heaping" || name == "Stacking"))
	{
		makeBlank();
		blank = -1;
		while (++blank < 10 - idx)
			std::cout << " ";
		std::cout << face;
		footprint = -1;
		while (++footprint < idx)
			std::cout << "💨";
		std::cout << std::endl;
		system("sleep 0.5");
		system("clear");
		idx++;
	}
}

Pony::Pony(const std::string& name, const std::string& face)
	: name(name), face(face)
{
	if (name == "Heaping")
	{
		std::cout << name << " was born on the Heap!" << std::endl;
	}
	else if (name == "Stacking")
	{
		std::cout << name << " was born on the Stack!" << std::endl;
	}
}
