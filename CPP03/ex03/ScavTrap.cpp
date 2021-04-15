#include "ScavTrap.hpp"

std::string	ScavTrap::challengeList[5] = {"Push up", "Start Coding", "Study Algorithm", "Watch Youtube", "Wake up early"};

// bonus
void			ScavTrap::challengeNewcomer(std::string const & target)
{
	int			challenge;

	challenge = rand() % 5;
	if (energyPoints < 25)
	{
		std::cout << "Not enough Energy" << std::endl;
		return ;
	}
	energyPoints -= 25;
	if (energyPoints < 0)
		energyPoints = 0;

	std::cout << "<" << name << "> challenged <" << target << "> with the event <" << challengeList[challenge] << ">" << std::endl;
}


// ranged 공격
void			ScavTrap::rangedAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
	}
}

// melee 공격
void			ScavTrap::meleeAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
	}
}



// 할당 연산자
ScavTrap&				ScavTrap::operator=(const ScavTrap& other)
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

// 소멸자
ScavTrap::~ScavTrap()
{
	std::cout << "Oh... my mistake!!" << std::endl;
}

// copy 생성자
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	srand(time(NULL));
	*this = other;
	std::cout << "<" << name  << "> It is good day to die!" << std::endl;
}

// name 생성자
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	srand(time(NULL));
	energyPoints = 50;
	maxEnergyPoints = 50;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	std::cout << "<" << name  << "> It is good day to die!" << std::endl;
}

// default 생성자
ScavTrap::ScavTrap() : ClapTrap()
{
	energyPoints = 50;
	maxEnergyPoints = 50;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	std::cout << "<" << name  << "> It is good day to die!" << std::endl;
	srand(time(NULL));
}
