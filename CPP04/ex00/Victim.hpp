#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class					Victim
{
private:
	std::string			name;
public:
	Victim();
	~Victim();
	Victim(const std::string& name);
	Victim&			operator=(const Victim& other);

	const std::string		getName() const;
	void					setName(const std::string& name);

	// virtual을 반드시 해줘야 한다.
	// virtual을 해주지 않으면 Peon Class가 Victim의 함수를 가져오게 된다.
	// virtual 없이는, "Joe has been turned into a pink pony!" 가 아닌
	//"Joe has been turned into a cute little sheep!" 를 출력하게 된다.
	virtual void					getPolymorphed() const;
	// 정확한 매커니즘 공부가 필요!
};

std::ostream&			operator<<(std::ostream& os, const Victim& victim);

#endif
