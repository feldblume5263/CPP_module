#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria;

class					Character : public ICharacter
{
private:
	Character(void);

	std::string			name;
	int					count; // 존재하는 무기 개수
	AMateria*			inventory[4];

public:
	Character(const std::string& name);
	Character(const Character& other);
	virtual ~Character();

	Character&			operator=(const Character& other);

	const std::string&	getName(void) const;

	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
