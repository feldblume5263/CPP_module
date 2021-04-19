#include "Victim.hpp"

void					Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&			operator<<(std::ostream& os, const Victim& victim)
{
	return (os << "I'm " << victim.getName() << " and I like otters!" << std::endl);
}

void					Victim::setName(const std::string& name)
{
	this->name = name;
}

// 예전부터 계속 문제가 되던 부분...
// 이 자체를 클래스 밖에서 리터럴로 사용하고 싶으면 뒤에 const를 붙여야 하는 듯 하다..
// 정확한 원인은 잘 모르겠지만, 멤버변수를 가져오는데 뒤에 const가 반드시 필요하다.
const std::string		Victim::getName() const
{
	return (this->name);
}
// ----------------------------------------------------------------------
// ----------------------------------------------------------------------
// ----------------------------------------------------------------------


Victim&				Victim::operator=(const Victim& other)
{
	std::cout << "Some random victim called " << name <<
			" just appeared!" << std::endl;
	*this = other;
	return (*this);
}

Victim::Victim(const std::string& name)
					: name(name)
{
	std::cout << "Some random victim called " << name <<
			" just appeared!" << std::endl;
}

Victim::Victim() : name("Unknown")
{
	std::cout << "Some random victim called " << name <<
			" just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}
