#include "PresidentialPardonForm.hpp"

void						PresidentialPardonForm::execute(const Bureaucrat& bureau) const
{
	if (bureau.GetGrade() <= this->GetExecuteGrade())
	{
		if (this->GetSigned() == true)
			std::cout << "> has been pardoned by Zafod Beeblebrox" << std::endl;
		else
			throw Form::SignedException();
	}
	else
		throw Form::GradeTooLowException();
}


PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardon", 25, 5), target("unknown")
{
	srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardon", 25, 5), target(target)
{
	srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	*this = other;
	srand(time(NULL));
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// 할당 연산자 전혀 사용 안하는듯.... 캐노니컬 폼때문에 계속 만든다...
PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	target = other.target;
	return (*this);
}
