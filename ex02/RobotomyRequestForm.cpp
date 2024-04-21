#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src){
	std::cout << "RobotomyRequestForm : copy constructor called" << std::endl;
	*this = src;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
	std::cout << "RobotomyRequestForm : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {}
