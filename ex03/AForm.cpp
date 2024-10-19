#include "AForm.hpp"

AForm::AForm() : name("default"), sign(false) ,grade(3), grade_execute(5)
{
	std::cout << "default constractor AForm" << std::endl;
	// this->grade = 3;
	// this->grade_execute = 5;
	// this->sign = false;
}

AForm::AForm(std::string Name, int Grade, int Grade_execute) : name(Name), grade(Grade), grade_execute(Grade_execute)
{
	std::cout << "constractor AForm" << std::endl;
	if (Grade < 1 || Grade_execute < 1)
	{
		throw GradeTooHighException();
	}
	else if (Grade > 150 || Grade_execute > 150)
	{
		throw GradeTooLowException();
	}
	// this->grade = Grade;
	// this->grade_execute = Grade_execute;
	this->sign = false;
	
}

int	AForm::getExecGrade()const
{
	return (this->grade_execute);
}

int	AForm::get_Grade()const
{
	return (this->grade);
}

int	AForm::getSign()const
{
	return (this->sign);
}

AForm::AForm(AForm const &src) : grade(get_Grade()), grade_execute(getExecGrade()) 
{
	std::cout << "AForm : copy constructor called" << std::endl;
	*this = src;
}

AForm & AForm::operator=(AForm const &src)
{
	std::cout << "AForm : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm is destroyed!" << std::endl;
}


std::string AForm::getName ()
{
	return (this->name);
}

int AForm::getGrade ()
{
	return (this->grade);
}

int AForm::getGrade_execute ()
{
	return (this->grade_execute);
}

bool AForm::getSign()
{
	return (this->sign);
}

void AForm::beSigned(Bureaucrat & bureaucrat)
{
// std::cout << " uyyuyuy" << bureaucrat.getGrade() << " ---- " << this->grade  << std::endl;
	if (bureaucrat.getGrade() > this->grade)
	{
		throw AForm::GradeTooLowException();
	}
	this->sign = true;
}

std::ostream& operator<<(std::ostream& os, AForm& form) {
    os << "AForm: " << form.getName() << ", Signed: "
		<< (form.getSign() ? "Yes" : "No") << ", Grade: "
		<< form.getGrade() << ", Execute Grade: " << form.getGrade_execute() << std::endl;
    return os;
}

void AForm::execute(Bureaucrat const &executor)const
{
	(void)executor;
}

