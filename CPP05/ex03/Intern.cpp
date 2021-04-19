#include "Intern.hpp"

std::string					Intern::mForms[3] = {"Shrubbery creation", "Robotmy request", "Presidential pardon"};

Form*						newShrubberyCreation(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Form*						newRobotomyRequest(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form*						newPresidentialPardon(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

Form*						Intern::makeForm(const std::string& name, const std::string& target) const
{
	int			idx;

	idx = 0;
	while (idx < 3)
	{
		if (mForms[idx].compare(name) == 0)
		{
			std::cout << "Intern creates <" << name << ">." << std::endl;
			if (name.compare("Shrubbery creation") == 0)
				return (newShrubberyCreation(target));
			else if (name.compare("Robotmy request") == 0)
				return (newRobotomyRequest(target));
			else if (name.compare("Presidential pardon") == 0)
				return (newPresidentialPardon(target));
		}
		idx++;
	}
	std::cout << "Intern fails to create <" << name << ">" << std::endl;
	return (NULL);
}


Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& other)
{
	*this = other;
	return (*this);
}
