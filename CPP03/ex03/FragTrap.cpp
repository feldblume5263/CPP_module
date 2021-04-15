#include "FragTrap.hpp"

//bonus
std::string	FragTrap::skillList[5] = {"Meat Unicycle", "Funzerker", "Blightbot", "Miniontrap", "Medbot"};
std::string	FragTrap::skillVerse[5] =
	{"This was a reeeally bad idea!",
	"Oh god I can't stop!",
	"Tell me I'm the prettiest!",
	"Mini-trap on the field!",
	"Never fear, sugar!"};

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			skill;

	skill = rand() % 5;
	if (energyPoints < 25)
	{
		std::cout << "Not enough Energy" << std::endl;
		return ;
	}
	energyPoints -= 25;
	if (energyPoints < 0)
		energyPoints = 0;

	std::cout << "<<<<" << skillList[skill] << ">>>>" << std::endl;
	std::cout << "\"" << skillVerse[skill] << "\"" << std::endl;

	std::cout << "<" << target << "> takes <" << 0 << "> damages" << std::endl;
	std::cout << "Colorful but not substantial!" << std::endl;
}

// ranged 공격
void			FragTrap::rangedAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
	}
}

// melee 공격
void			FragTrap::meleeAttack(std::string const & target)
{
	if (hitPoints > 0)
	{
		std:: cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
	}
}

// 할당 연산자
FragTrap&				FragTrap::operator=(const FragTrap& other)
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
FragTrap::~FragTrap()
{
	std::cout << "I will be back!" << std::endl;
}

// copy 생성자
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	srand(time(NULL));
	*this = other;
	std::cout << name << " launched!! " << "AAAAAAAAAAAND OPEEEEEEEEEEENNNNNN!!!!!!!!!!" << std::endl;
}

// name 생성자
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	srand(time(NULL));
	std::cout << name << " launched!! " << "AAAAAAAAAAAND OPEEEEEEEEEEENNNNNN!!!!!!!!!!" << std::endl;
}

// default 생성자
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << name << " launched!! " << "AAAAAAAAAAAND OPEEEEEEEEEEENNNNNN!!!!!!!!!!" << std::endl;
	srand(time(NULL));
}
