#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria;
class ICharacter;

class						AMateria
{
	private:
		unsigned int		_xp;
		std::string			_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria&			operator=(const AMateria& other);

		std::string const&	getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		void				setXP(const int xp);

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
