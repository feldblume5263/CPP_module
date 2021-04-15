#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "----------constructor test----------" << std::endl;
	FragTrap a("AI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------constructor test----------" << std::endl;
	ScavTrap b("BI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "------------function test-----------" << std::endl;
	std::cout << "HP : " << b.getHitPoints() << std::endl;
	a.meleeAttack("BI");
	b.takeDamage(30);
	std::cout << "HP : " <<  b.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "HP : " <<  a.getHitPoints() << std::endl;
	b.meleeAttack("AI");
	a.takeDamage(20);
	std::cout << std::endl;
	std::cout << "HP : " <<  a.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;
	a.vaulthunter_dot_exe("BI");
	std::cout << std::endl;
	b.challengeNewcomer("AI");
	std::cout << std::endl;
	std::cout << "----------destructor test-----------" << std::endl;
	return (0);
}
