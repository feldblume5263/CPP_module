#include "Form.hpp"

const char*				Form::NotYetSignedException::what(void) const throw()
{
	return ("Not yet Signed!");
}

const char*				Form::OpenFileException::what(void) const throw()
{
	return ("Error occurs while opening File!");
}

const char*				Form::SignedException::what(void) const throw()
{
	return ("Already Signed!");
}

const char*				Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high!");
}

const char*				Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low!");
}

const char*				Form::InvalidGradeException::what(void) const throw()
{
	return ("Grade must be between 1 ~ 150!");
}

Form::Form() : name("unknown"), ifSigned(false), signGrade(1), executeGrade(1)
{
}

Form::Form(const std::string& name, const int signGrade, const int executeGrade)
	: name(name), ifSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || signGrade > 150)
	{
		throw Form::InvalidGradeException();
	}
	if (executeGrade < 1 || executeGrade > 150)
	{
		throw Form::InvalidGradeException();
	}
}

Form::Form(const Form& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	*this = other;
}

Form::~Form(void)
{
}

Form&				Form::operator=(const Form& other)
{
	name = other.name;
	ifSigned = other.ifSigned;
	signGrade = other.signGrade;
	executeGrade = other.executeGrade;
	return (*this);
}

const std::string&	Form::GetName(void) const
{
	return (name);
}

bool				Form::GetSigned(void) const
{
	return (ifSigned);
}

int					Form::GetSignGrade(void) const
{
	return (signGrade);
}

int					Form::GetExecuteGrade(void) const
{
	return (executeGrade);
}

void				Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.GetGrade() <= signGrade)
	{
		if (ifSigned == false)
			ifSigned = true;
		else
			throw Form::SignedException();
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

std::ostream&			operator<<(std::ostream& os, const Form& form)
{
	os << std::endl;
	os << "|" << std::string(53, '-') << "|" << std::endl;
	os << "|";
	os << " ";
	os << std::setw(51) << std::left << form.GetName();
	os << " ";
	os << "|" << std::endl;
	os << "|" << std::string(53, '-') << "|" << std::endl;
	os << "| ";
	os << "Sign Grade : " << std::setw(3) << std::right << form.GetSignGrade();
	os << " | ";
	os << "Execute Grade : " << std::setw(3) << form.GetExecuteGrade();
	os << " | ";
	os << "Signed : ";
	if (form.GetSigned() == true)
		os << "O";
	else
		os << "X";
	os << " |" << std::endl;
	os << "|" << std::string(53, '-') << "|" << std::endl;
	return (os);
}
