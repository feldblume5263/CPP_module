#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm		scf("target");
		Bureaucrat					man("Man", 137);
		std::cout << man << std::endl;
		man.signInForm(scf);
		std::cout << scf;
		man.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::string(70, '-') << std::endl;





	try
	{
		RobotomyRequestForm			ref("target");
		Bureaucrat					man("Man", 46);

		std::cout << man << std::endl;
		man.signInForm(ref);
		std::cout << ref;
		man.executeForm(ref);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::string(70, '-') << std::endl;




	try
	{
		PresidentialPardonForm		ppf("target");
		Bureaucrat					president("Man", 1);

		std::cout << president << std::endl;
		president.signInForm(ppf);
		std::cout << ppf;
		president.executeForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
