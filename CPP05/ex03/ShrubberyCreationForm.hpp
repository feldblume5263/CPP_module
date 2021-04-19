#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class							ShrubberyCreationForm : public Form
{
private:
	std::string					target;
	static std::string			asciiTree;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm&		operator=(const ShrubberyCreationForm& other);

	void						execute(const Bureaucrat& bureau) const;
};

#endif
