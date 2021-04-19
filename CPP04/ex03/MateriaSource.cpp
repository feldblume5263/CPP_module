#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void) : count(0)
{
	int			idx;

	idx = 0;
	while (idx < 4)
	{
		sources[idx] = NULL;
		idx++;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) : count(0)
{
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	int			idx;

	idx = 0;
	while (idx < 4)
	{
		sources[idx] = NULL;
		idx++;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	int				i;

	if (this == &other)
	{
		return (*this);
	}
	i = 0;
	while (i < count)
	{
		delete sources[i];
		sources[i] = NULL;
		i++;
	}
	count = 0;
	i = 0;
	while (i < other.count)
	{
		learnMateria(other.sources[i]->clone());
		i++;
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria* m)
{
	int			i;

	if (count < 4 && m)
	{
		i = 0;
		while (i < count)
		{
			if (sources[i] == m)
			{
				return ;
			}
			i++;
		}
		sources[count] = m;
		count++;
	}
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	int			i;

	i = 0;
	while (i < count)
	{
		if (sources[i]->getType().compare(type) == 0)
		{
			return (sources[i]->clone());
		}
		i++;
	}
	return (NULL);
}
