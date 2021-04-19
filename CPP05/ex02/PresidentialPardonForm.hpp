#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class				PresidentialPardonForm : public Form
{
private:
	std::string				target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	PresidentialPardonForm&		operator=(const PresidentialPardonForm& other);

	void						execute(const Bureaucrat& bureau) const;
};

#endif
