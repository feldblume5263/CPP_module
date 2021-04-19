#include "Magician.hpp"

void				Magician::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into cuty cat!?!" << std::endl;
}

Magician&   			Magician::operator=(const Magician& other)
{
	this->setName(other.getName());
	return (*this);
}


Magician::Magician(const Magician& other) : Victim(other)
{
	*this = other;
	std::cout << "Meoweeeee~~~." << std::endl;
}

Magician::Magician(const std::string& name) : Victim(name)
{
	std::cout << "Meoweeeee~~~." << std::endl;
}

Magician::Magician() : Victim()
{
	std::cout << "Meoweeeee~~~." << std::endl;
}

Magician::~Magician()
{
	std::cout << "LOL..." << std::endl;
}
