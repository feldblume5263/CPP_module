#include "SuperTrap.hpp"

void					SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void					SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}



// 할당 연산자
SuperTrap&				SuperTrap::operator=(const SuperTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	maxHitPoints = other.maxHitPoints;
	maxEnergyPoints = other.maxEnergyPoints;
	level = other.level;
	meleeAttackDamage = other.meleeAttackDamage;
	rangedAttackDamage = other.rangedAttackDamage;
	armorDamageReduction = other.armorDamageReduction;
	return (*this);
}


SuperTrap::~SuperTrap(void)
{
	std::cout << "Superman left for the Kryptonite planet" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other), FragTrap(other), NinjaTrap(other)
{
	std::cout << "<" << name  << "> BBAM!! Superman comming!" << std::endl;
	srand(time(NULL));
	*this = other;
}

SuperTrap::SuperTrap(const std::string& name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	meleeAttackDamage = 60;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	std::cout << "<" << name  << "> BBAM!! Superman comming!" << std::endl;
	srand(time(NULL));
}

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	meleeAttackDamage = 60;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	std::cout << "<" << name  << "> BBAM!! Superman comming!" << std::endl;
	srand(time(NULL));
}
