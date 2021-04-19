#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Magician.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl << std::string(50, '-') << std::endl;
	std::cout << "---------------------- BONUS ---------------------" << std::endl;
    Magician      nabi("nabi");
    std::cout << nabi;
    robert.polymorph(nabi);
    std::cout << std::string(50, '-') << std::endl << std::endl;
    return (0);

	return 0;
}
