#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class						PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& plasmaRifle);
	~PlasmaRifle();

	PlasmaRifle&			operator=(const PlasmaRifle& other);
	void					attack() const;
};

#endif
