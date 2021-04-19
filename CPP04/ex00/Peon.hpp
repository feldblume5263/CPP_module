#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class					Peon : public Victim
{
private:

public:
	Peon();
	~Peon();
	Peon(const std::string& name);
	Peon(const Peon& peon);
	Peon&				operator=(const Peon& other);

	void				getPolymorphed(void) const;
};

#endif
