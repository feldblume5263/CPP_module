#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class			Zombie
{
private:
	std::string	name;
	std::string	type;

public:
	Zombie(const std::string& name, const std::string& type);
	~Zombie();
	void	announce();
	void	killMessage();
	void	setName(const std::string& name);
	void	setType(const std::string& type);
};



#endif
