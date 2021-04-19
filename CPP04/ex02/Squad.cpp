#include "Squad.hpp"

int						Squad::push(ISpaceMarine* unit)
{
	// // string도 아닌데... pushback과 같은 기능을 구현해야 하는 것 같음...
	// ISpaceMarine**		temp;
	// int					idx;

	// if (unit)
	// {
	// 	temp = new ISpaceMarine*[count+ 1];
	// 	idx = 0;
	// 	while (idx < this->count)
	// 	{
	// 		temp[idx] = this->units[idx];
	// 		idx++;
	// 	}
	// 	if (this->count > 0)
	// 		delete[] this->units;
	// 	this->units = temp;
	// 	this->count += 1;
	// }
	// return (this->count);
	if (unit)
	{
		for (int i = 0; i < count; i++)
		{
			if (units[i] == unit)
			{
				return (count);
			}
		}
		ISpaceMarine **tmp = new ISpaceMarine*[count + 1];
		for (int i = 0; i < count; i++)
		{
			tmp[i] = units[i];
		}
		tmp[count] = unit;
		if (count)
		{
			delete[] units;
		}
		units = tmp;
		count++;
	}
	return (count);
}

ISpaceMarine*			Squad::getUnit(int index) const
{
	if (index >= 0 && this->count > index && this->count > 0)
		return (this->units[index]);
	else
		return (NULL);
}


int						Squad::getCount() const
{
	return (this->count);
}

Squad&					Squad::operator=(const Squad& other)
{
	int					idx;

	if (this == &other)
		return (*this);
	if (units)
	{
		for (int i = 0; i < count; i++)
		{
			delete units[i];
		}
		delete[] units;
		units = NULL;
	}
	count = 0;
	for (int i = 0; i < other.count; i++)
	{
		push(other.getUnit(i)->clone());
	}
	return (*this);
}


Squad::Squad(const Squad& other)
{
	*this = other;
}

Squad::Squad() : units(NULL), count(0)
{
}

Squad::~Squad()
{
	int					idx;

	idx = 0;
	while (idx < this->count)
	{
		delete this->units[idx];
		idx++;
	}
	delete[] this->units;
}
