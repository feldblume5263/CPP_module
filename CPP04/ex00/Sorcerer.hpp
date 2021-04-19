#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class					Sorcerer
{
private:
	std::string			name;
	std::string			title;
public:
	Sorcerer();
	~Sorcerer();
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer&			operator=(const Sorcerer& other);

	const std::string		getName() const;
	const std::string		getTitle() const;

	void polymorph(Victim const& victim) const;
};

std::ostream&			operator<<(std::ostream& os, const Sorcerer& sorcerer);

#endif
