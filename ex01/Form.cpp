/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:36:07 by haarab            #+#    #+#             */
/*   Updated: 2024/10/20 18:17:30 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false) ,grade(3), grade_execute(5)
{
	std::cout << "default constractor Form" << std::endl;
}

Form::Form(std::string Name, int Grade, int Grade_execute) : name(Name), grade(Grade), grade_execute(Grade_execute)
{
	std::cout << "constractor Form" << std::endl;
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

int	Form::getExecGrade()const
{
	return (this->grade_execute);
}

int	Form::get_Grade()const
{
	return (this->grade);
}

Form::Form(Form const &src) : grade(get_Grade()), grade_execute(getExecGrade()) 
{
	std::cout << "Form : copy constructor called" << std::endl;
	*this = src;
}

Form & Form::operator=(Form const &src)
{
	std::cout << "Form : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}

Form::~Form()
{
	std::cout << "Form is destroyed!" << std::endl;
}


std::string Form::getName ()
{
	return (this->name);
}

int Form::getGrade ()
{
	return (this->grade);
}

int Form::getGrade_execute ()
{
	return (this->grade_execute);
}	

bool Form::getSign()
{
	return (this->sign);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade)
	{
		throw Form::GradeTooLowException();
	}
	this->sign = true;
}

std::ostream& operator<<(std::ostream& os, Form& form) {
    os << "Form: " << form.getName() << ", Signed: "
		<< (form.getSign() ? "Yes" : "No") << ", Grade: "
		<< form.getGrade() << ", Execute Grade: " << form.getGrade_execute() << std::endl;
    return os;
}