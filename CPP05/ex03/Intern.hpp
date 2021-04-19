#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	static std::string			mForms[3];

public:
	Intern();
	Intern(const Intern& other);
	~Intern();
	Intern&						operator=(const Intern& other);

	Form*   					makeForm(const std::string& name, const std::string& target) const;
};

Form*						newShrubberyCreation(const std::string& target);
Form*						newRobotomyRequest(const std::string& target);
Form*						newPresidentialPardon(const std::string& target);

#endif
