#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class						Character
{
	private:
		std::string			name;
		int					ap; // action point
		AWeapon*			weapon; // 포인터로 선언하는 이유?
		// AWeapon Class의 attack() 때문이다.
		// 순수 가상함수로 써놓고 나중에 정말 사용해야 할 때 사용하는 것이다.

	public:
		Character();
		Character(std::string const &name);
		Character(const Character& other);
		~Character();
		Character&			operator=(const Character& other);

		void				recoverAP();
		void				equip(AWeapon* weapon);
		void				attack(Enemy* enemy);
		const std::string&	getName() const;
		int					getAp() const;
		AWeapon*			getWeapon() const;
};

std::ostream&				operator<<(std::ostream& os, const Character& character);

#endif
