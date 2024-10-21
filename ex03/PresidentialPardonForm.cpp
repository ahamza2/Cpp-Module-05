#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm : copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}


PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{

}


void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (getSign())
	{
		if (executor.getGrade() > getExecGrade())
		{
			throw PresidentialPardonForm::GradeTooLowException();
		}
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}