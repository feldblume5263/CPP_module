#include "Sorcerer.hpp"

void					Sorcerer::polymorph(Victim const& victim) const
{
	victim.getPolymorphed();
}



std::ostream&			operator<<(std::ostream& os, const Sorcerer& sorcerer)
{
	return (os << "I am " << sorcerer.getName() << ", " <<
			sorcerer.getTitle() << ", and I like ponies!" << std::endl);
}

// 예전부터 계속 문제가 되던 부분...
// 이 자체를 클래스 밖에서 리터럴로 사용하고 싶으면 뒤에 const를 붙여야 하는 듯 하다..
// 정확한 원인은 잘 모르겠지만, 멤버변수를 가져오는데 뒤에 const가 반드시 필요하다.
const std::string		Sorcerer::getTitle() const
{
	return (this->title);
}

const std::string		Sorcerer::getName() const
{
	return (this->name);
}
// ----------------------------------------------------------------------
// ----------------------------------------------------------------------
// ----------------------------------------------------------------------


Sorcerer&				Sorcerer::operator=(const Sorcerer& other)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	*this = other;
	return (*this);
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
					: name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer() : name("Unknown"), title("Unknown")
{
	std::cout << name <<  ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title <<
			", is dead. Consequences will never be the same!" << std::endl;
}
