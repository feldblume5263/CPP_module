#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("whereisrobot?", "Bender");
	std::cout << std::string(60, '-') << std::endl;
	rrf = someRandomIntern.makeForm("can you handle this?", "Bender");
	std::cout << std::string(60, '-') << std::endl;


	rrf = someRandomIntern.makeForm("Robotmy request", "Bender");
	if (rrf)
		std::cout << *rrf;


	Bureaucrat  jack("jack", 44);
	std::cout << std::string(60, '-') << std::endl;
	// sign이 되지 않았을 경우에 실행이 될까?
	jack.executeForm(*rrf);

	jack.signInForm(*rrf);
	std::cout << *rrf;
	std::cout << std::string(60, '-') << std::endl;
	// sign이 되었을 경우 실행
	jack.executeForm(*rrf);
	return (0);
}
