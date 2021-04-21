#include "Bureaucrat.hpp"
#include "Form.hpp"

void					Bureaucrat::signInForm(Form& form) const // &필수!! 왜? 값을 저장해야하기 때문.
{
	try
	{
		form.beSigned(*this);
		std::cout << "Signing Clear!!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Signing Failure!! because... ";
		std::cerr << e.what() << std::endl;
	}

}

Bureaucrat::Bureaucrat() : name("unknown"), grade(0)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	if (grade < 1 || grade > 150)
	{
		throw Bureaucrat::InvalidGradeException(); // 예외처리
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&				Bureaucrat::operator=(const Bureaucrat& other)
{
	grade = other.grade;
	return (*this);
}


const std::string&		Bureaucrat::GetName() const
{
	return (name);
}

int						Bureaucrat::GetGrade() const
{
	return (grade);
}

void					Bureaucrat::IncrementGrade()
{
	int					tmp;

	tmp = grade - 1;
	if (tmp < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		grade = tmp;
	}
}

void					Bureaucrat::DecrementGrade()
{
	int					tmp;

	tmp = grade + 1;
	if (tmp > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		grade = tmp;
	}
}

const char*				Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high!");
}

const char*				Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low!");
}

const char*				Bureaucrat::InvalidGradeException::what(void) const throw()
{
	return ("Grade must be between 1 ~ 150!");
}

std::ostream&			operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	return (os << "Bureaucrat" << " <" << bureaucrat.GetName() << ">'s grade is <" << bureaucrat.GetGrade() << ">");
}
