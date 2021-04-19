#ifndef MAGICIAN_HPP
# define MAGICIAN_HPP

# include <iostream>
# include "Victim.hpp"

class					Magician : public Victim
{
private:

public:
	Magician();
	~Magician();
	Magician(const std::string& name);
	Magician(const Magician& Magician);
	Magician&				operator=(const Magician& other);

	void				getPolymorphed(void) const;
};

#endif
