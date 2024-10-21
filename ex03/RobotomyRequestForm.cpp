#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm : copy constructor called" << std::endl;
	*this = src;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (getSign())
	{
		if (executor.getGrade() > getExecGrade())
			throw RobotomyRequestForm::GradeTooLowException();
		std::cout << "drilling noises" << std::endl;
		if (rand() % 2 == 0)
			std::cout << target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy failed." << std::endl;
	}
}