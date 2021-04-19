#include "RobotomyRequestForm.hpp"

void						RobotomyRequestForm::execute(const Bureaucrat& bureau) const
{
	if (bureau.GetGrade() <= this->GetExecuteGrade())
	{
		if (this->GetSigned() == true)
		{
			std::cout << "ZIIIIIINNNNNNNNGGGGGGGGGG~~~~~~~~~~~!!!!!" << std::endl;
			if (rand() % 2)
				std::cout << "<" << target << "> has been robotomized successfully" << std::endl;
			else
				std::cout << "<" << target << "> failed to robotomized" << std::endl;
		}
		else
			throw Form::NotYetSignedException();
	}
	else
		throw Form::GradeTooLowException();
}


RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequest", 72, 45), target("unknown")
{
	srand(time(NULL));
}

// Intern이 이용!!! Intern에서 문자열이 일치하면 생성자를 불러온다.
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequest", 72, 45), target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	*this = other;
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

// 할당 연산자 전혀 사용 안하는듯.... 캐노니컬 폼때문에 계속 만든다...
RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	target = other.target;
	return (*this);
}
