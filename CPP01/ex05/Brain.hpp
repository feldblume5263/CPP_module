#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class			Brain
{
private:
	int			happiness;
	int			passion;

public:
	Brain();
	Brain(const int& happiness, const int& passion);
	std::string	identify();
};


std::string		Brain::identify()
{
	std::stringstream	ret;

	ret << "0x" << std::uppercase << std::hex << intptr_t(this);
	return (ret.str());
}

Brain::Brain()
	: happiness(100), passion(100)
{
}

Brain::Brain(const int& happiness, const int& passion)
	: happiness(happiness), passion(passion)
{
}


#endif
