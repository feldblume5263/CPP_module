#include "NinjaTrap.hpp"

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "Ninja <" << name << "> attacks <" << trap.getName() << "> with Shuriken(Clap)" << std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "Ninja <" << name << "> attacks <" << trap.getName() << "> with Sword(Frag)" << std::endl;
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "Ninja <" << name << "> attacks <" << trap.getName() << "> with Punch(Scav)" << std::endl;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "Ninja <" << name << "> attacks <" << trap.getName() << "> with Magic(Ninja)" << std::endl;
}

// ranged 공격
void			NinjaTrap::rangedAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "Ninja <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
	}
}

// melee 공격
void			NinjaTrap::meleeAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "Ninja <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
	}
}



// 할당 연산자
NinjaTrap&				NinjaTrap::operator=(const NinjaTrap& other)
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
NinjaTrap::~NinjaTrap()
{
	std::cout << "I'm going back to Leaf town, bye bye!" << std::endl;
}

// copy 생성자
NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other)
{
	srand(time(NULL));
	*this = other;
	std::cout << "<" << name  << "> I'm very fast Ninja!!" << std::endl;
}

// name 생성자
NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name)
{
	srand(time(NULL));
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
	std::cout << "<" << name  << "> I'm very fast Ninja!!" << std::endl;
}

// default 생성자
NinjaTrap::NinjaTrap() : ClapTrap()
{
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
	std::cout << "<" << name  << "> I'm very fast Ninja!!" << std::endl;
	srand(time(NULL));
}
