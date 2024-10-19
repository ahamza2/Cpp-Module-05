#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(Intern const  &src)
{
	std::cout << "Intern : copy constructor called" << std::endl;
	*this = src;
}
Intern & Intern::operator=(Intern const  &src)
{
	std::cout << "Intern : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}
Intern::~Intern() {}

AForm *Intern::makeForm(std::string Form, std::string target_form) {
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int j = -1;
	for (int i = 0; i < 3; i++)
	{
		if (Form == forms[i])
		{
			j = i;
			break;
		}
	}
	switch (j)
	{
		case 0:
			std::cout << "Intern creates " << Form << std::endl;
			return new PresidentialPardonForm(target_form);
		case 1:
			std::cout << "Intern creates " << Form << std::endl;
			return new RobotomyRequestForm(target_form);
		case 2:
			std::cout << "Intern creates " << Form << std::endl;
			return new ShrubberyCreationForm(target_form);
		default:
			break;
	}
	throw Intern::Error();
}
