#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class		Weapon
{
private:
	std::string		type;
public:
	Weapon(const std::string& type);
	~Weapon();
	std::string		getType();
	void			setType(const std::string& type);
};

void				Weapon::setType(const std::string& type)
{
	this->type = type;
}

std::string			Weapon::getType()
{
	return (this->type);
}

Weapon::Weapon(const std::string& type)
	: type(type)
{

}

Weapon::~Weapon()
{
}


#endif
