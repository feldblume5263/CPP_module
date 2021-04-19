#include "Peon.hpp"

void				Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

Peon&   			Peon::operator=(const Peon& other)
{
	this->setName(other.getName());
	return (*this);
}


Peon::Peon(const Peon& other) : Victim(other)
{
	*this = other;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
