#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class		Form;

class		Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat(void);

	Bureaucrat&			operator=(const Bureaucrat& other);

	const std::string&	GetName() const;
	int					GetGrade() const;
	void				IncrementGrade();
	void				DecrementGrade();

	void				signInForm(Form& form) const;

	// 예외처리!
	class GradeTooHighException : public std::exception
	{
		virtual const char*			what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char*			what(void) const throw();
	};

	class InvalidGradeException : public std::exception
	{
		virtual const char*			what(void) const throw();
	};


};

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
