#include "Character.hpp"

const std::string&		Character::getName(void) const
{
	return (name);
}

void					Character::equip(AMateria* m)
{
	int				idx;

	idx = 0;
	if (count < 4 && m)
	{
		while (idx < count)
		{
			if (inventory[idx] == m)
			{
				return ;
			}
			idx++;
		}
		inventory[count] = m;
		count++;
	}
}

void					Character::unequip(int idx)
{
	int					i;

	if (idx >= 0 && idx < count && inventory[idx])
	{
		if (idx == 3)
		{
			inventory[idx] = NULL;
		}
		else
		{
			i = 0;
			while (i < 3)
			{
				inventory[i] = inventory[i + 1];
				inventory[i + 1] = NULL;
				i++;
			}
		}
		count--;
	}
}

void					Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < count && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}


Character&				Character::operator=(const Character& other)
{
	int				idx;

	idx = 0;
	if (this == &other)
		return (*this);
	name = other.name;

	while (idx < this->count)
	{
		delete inventory[idx];
		inventory[idx] = NULL;
		idx++;
	}
	count = 0;
	idx = 0;
	while (idx < other.count)
	{
		equip(other.inventory[idx]->clone());
		idx++;
	}
	return (*this);
}

Character::Character(void)
	: name("unknown"), count(0)
{
	int					idx;

	idx = 0;
	while (idx < 4)
	{
		inventory[idx] = NULL; // 무기 4개 모두 초기화
		idx++;
	}
}

Character::Character(const std::string& name) : name(name), count(0)
{
	int					idx;

	idx = 0;
	while (idx < 4)
	{
		inventory[idx] = NULL; // 무기 4개 모두 초기화
		idx++;
	}
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
	int					idx;

	idx = 0;
	while (idx < 4)
	{
		delete inventory[idx]; // 무기 4개 모두 삭제
		idx++;
	}
}
