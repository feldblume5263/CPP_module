#include "Zombie.hpp"

void	Zombie::setType(const std::string& type)
{
	this->type = type;
}

void	Zombie::setName(const std::string& name)
{
	this->name = name;
}

void	Zombie::killMessage()
{
	std::cout << "<" << name << " (" << type << ")>" << " was killed by fighter..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{

}

Zombie::Zombie(const std::string& name, const std::string& type)
	: name(name), type(type)
{
	std::cout << type << name << " is born" << std::endl;
}

