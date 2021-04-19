#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	int				count;
	AMateria*		sources[4];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	virtual ~MateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& other);

	void			learnMateria(AMateria* m);
	AMateria*		createMateria(const std::string& type);
};

#endif
