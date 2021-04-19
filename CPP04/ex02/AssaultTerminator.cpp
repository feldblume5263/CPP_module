#include "AssaultTerminator.hpp"

void						AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

void						AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void						AssaultTerminator::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

ISpaceMarine*				AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

AssaultTerminator&				AssaultTerminator::operator=(const AssaultTerminator& other)
{
	*this = other;
	return (*this);
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	*this = other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "Aaargh..." << std::endl;
}
