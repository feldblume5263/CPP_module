#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class				RobotomyRequestForm : public Form
{
private:
	std::string				target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	// Intern이 이용!!! Intern에서 문자열이 일치하면 생성자를 불러온다.
	RobotomyRequestForm(const RobotomyRequestForm& other);
	~RobotomyRequestForm();
	RobotomyRequestForm&		operator=(const RobotomyRequestForm& other);

	void						execute(const Bureaucrat& bureau) const;
};

#endif
