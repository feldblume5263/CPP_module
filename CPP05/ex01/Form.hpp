#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>

# include "Bureaucrat.hpp"

class		Form;

class		Form
{
private:
	std::string		name; // DC?
	bool			ifSigned;
	int				signGrade;
	int				executeGrade;

public:
	Form();
	Form(const std::string& name, const int signGrade, const int executeGrade);
	Form(const Form& other);
	~Form(void);

	Form&				operator=(const Form& other);

	const std::string&	GetName() const;
	bool				GetSigned() const;
	int					GetSignGrade() const;
	int					GetExecuteGrade() const;

	void				beSigned(const Bureaucrat& bureaucrat);



	class GradeTooHighException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class InvalidGradeException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class SignedException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
};


std::ostream			&operator<<(std::ostream& os, const Form& Form);


#endif
