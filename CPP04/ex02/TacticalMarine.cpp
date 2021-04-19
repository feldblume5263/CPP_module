#include "TacticalMarine.hpp"

void						TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

void						TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void						TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

ISpaceMarine*				TacticalMarine::clone(void) const
{
	return (new TacticalMarine(*this));
}

TacticalMarine&				TacticalMarine::operator=(const TacticalMarine& other)
{
	*this = other;
	return (*this);
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	*this = other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}
