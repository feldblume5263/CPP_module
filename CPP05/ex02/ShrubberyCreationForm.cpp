#include "ShrubberyCreationForm.hpp"

std::string						ShrubberyCreationForm::asciiTree =
"\
          &&& &&  & &&\n\
      && &\\/&\\|& ()|/ @, &&\n\
      &\\/(/&/&||/& /_/)_&/_&\n\
   &() &\\/&|()|/&\\/ '% & ()\n\
  &_\\_&&_\\ |& |&&/&__%_/_& &&\n\
&&   && & &| &| /& & % ()& /&&\n\
 ()&_---()&\\&\\|&&-&&--%---()~\n\
     &&     \\|||\n\
             |||\n\
             |||\n\
             |||\n\
       , -=-~  .-^- _\n\
";

void							ShrubberyCreationForm::execute(const Bureaucrat& bureau) const
{
	if (bureau.GetGrade() <= this->GetExecuteGrade())
	{
		if (this->GetSigned() == true)
		{
			std::ofstream		ofs(target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
			if (ofs.is_open())
			{
				ofs << asciiTree;
				ofs.close();
			}
			else
				throw Form::OpenFileException();
		}
		else
			throw Form::SignedException();
	}
	else
		throw Form::GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137), target("unknown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->target = other.target;
	return (*this);
}
