#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----------constructor test----------" << std::endl << std::endl;
	FragTrap	a;
	FragTrap	b("b");
	FragTrap	c(b);
	std::cout << "------------------------------------" << std::endl << std::endl;
	std::cout << "------------fuction test------------" << std::endl << std::endl;
	a.rangedAttack("b");
	b.takeDamage(20);
	std::cout << std::endl;

	a.meleeAttack("b");
	b.takeDamage(30);
	std::cout << std::endl;

	a.meleeAttack("b");
	b.takeDamage(30);
	std::cout << std::endl;

	a.meleeAttack("b");
	b.takeDamage(30);
	std::cout << std::endl;

	a.meleeAttack("b");
	b.takeDamage(30);
	b.takeDamage(30);
	std::cout << std::endl;

	std::cout << "------------------------------------" << std::endl << std::endl;
	std::cout << "------------repair  test------------" << std::endl << std::endl;
	std::cout << "HP : " << b.getHitPoints() << std::endl << std::endl;

	b.beRepaired(50);
	std::cout << std::endl;

	b.beRepaired(50);
	std::cout << std::endl;

	std::cout << "HP : " << b.getHitPoints() << std::endl << std::endl;

	b.beRepaired(50);
	std::cout << std::endl;

	std::cout << "HP : " << b.getHitPoints() << std::endl << std::endl;


	std::cout << "------------------------------------" << std::endl << std::endl;
	std::cout << "-------------Bonus test-------------" << std::endl << std::endl;
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	std::cout << std::endl << "----------destructor test-----------" << std::endl << std::endl;
	return (0);
}
