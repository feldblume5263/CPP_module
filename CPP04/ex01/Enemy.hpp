#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class					Enemy
{
private:
	int					hp;
	std::string			type;
public:
	Enemy();
	Enemy(int hp, std::string const& type);
	Enemy(const Enemy& other);
	virtual ~Enemy();
	Enemy&				operator=(const Enemy& other);
	const std::string&	getType() const;
	int					getHP() const;

	void				setType(const std::string& type);
	void				setHP(const int& hp);
	virtual void		takeDamage(const int& damage);
};

#endif
