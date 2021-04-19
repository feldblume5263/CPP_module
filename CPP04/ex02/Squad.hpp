#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class					Squad : public ISquad
{
private:
	ISpaceMarine**		units;
	// virtual 클래스라서 포인터로 선언해야 하는데, 여러개이기 때문에 이중 포인터로 선언했다.
	// getUnit 함수에서 index로 출력할 수 있어야한다.
	int					count;


public:
	Squad();
	~Squad();
	Squad(const Squad& other);
	Squad&				operator=(const Squad& other);

	int					getCount() const;
	ISpaceMarine*		getUnit(int index) const;
	int					push(ISpaceMarine* unit);
};





#endif
