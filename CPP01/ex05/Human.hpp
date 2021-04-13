#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class			Human
{
private:
	Brain		brain;

public:
	Brain&		getBrain();
	std::string	identify();
};

Brain&			Human::getBrain()
{
	return (this->brain);
}

std::string		Human::identify()
{
	return (this->brain.identify());
}


#endif
