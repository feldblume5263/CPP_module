#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class						PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist& PowerFist);
	~PowerFist();

	PowerFist&			operator=(const PowerFist& other);
	void					attack() const;
};

#endif
