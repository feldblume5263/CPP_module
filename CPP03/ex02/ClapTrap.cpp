#include "ClapTrap.hpp"

// get Name
const std::string&	ClapTrap::getName() const
{
	return (this->name);
}

//get HitPoint
const int&		ClapTrap::getHitPoints() const
{
	return (hitPoints);
}

// handle HitPoint
void			ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints < 0)
		hitPoints = 0;
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << "<" << name << "> is repaired!" << std::endl;
	std::cout << "Now <"<< hitPoints << "> left!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	int			realDamage;

	if ((realDamage = amount - armorDamageReduction) < 0)
		realDamage = 0;
	if (hitPoints <= 0)
	{
		std::cout << "<" << name << "> has already been brocken..." << std::endl;
		return ;
	}
	hitPoints -= realDamage;
	std::cout << "<" << name << "> takes <" << realDamage << "> damages" << std::endl;
	if (hitPoints < 0)
	{
		hitPoints = 0;
		std::cout << "<" << name << "> is brocken" << std::endl;
	}
}

// 소멸자
ClapTrap::~ClapTrap()
{
	std::cout << "base trap is distructed" << std::endl;
}

// copy 생성자
ClapTrap::ClapTrap(const ClapTrap& other)
{
	srand(time(NULL));
	*this = other;
	std::cout << "<" << name << "> base trap is launched!!" << std::endl;
}

// name 생성자
ClapTrap::ClapTrap(const std::string& name)
	:	name(name),
		hitPoints(100),
		energyPoints(100),
		maxHitPoints(100),
		maxEnergyPoints(100),
		level(1),
		meleeAttackDamage(30),
		rangedAttackDamage(20),
		armorDamageReduction(5)
{
srand(time(NULL));
std::cout << "<" << name << "> base trap is launched!!" << std::endl;
}

// default 생성자
ClapTrap::ClapTrap()
	:	name("CL4P-TP"),
		hitPoints(100),
		energyPoints(100),
		maxHitPoints(100),
		maxEnergyPoints(100),
		level(1),
		meleeAttackDamage(30),
		rangedAttackDamage(20),
		armorDamageReduction(5)
{
	srand(time(NULL));
	std::cout << "<" << name << "> base trap is launched!!" << std::endl;
}
