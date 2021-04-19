#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class					AWeapon
{
private:
	std::string			name;
	int					apCost;
	int					damage;
public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon();

	AWeapon&			operator=(const AWeapon& other);


	std::string			getName() const;
	int					getAPCost() const;
	int					getDamage() const;

	virtual void		attack() const = 0; // 일단 virtual 함수로 선언해놓고 나중에 수정하는건가?

	void				setName(const std::string& name);
	void				setAPCost(const int& apCost);
	void				setDamage(const int& damage);
};

#endif
