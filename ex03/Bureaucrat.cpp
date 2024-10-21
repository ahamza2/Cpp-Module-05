/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:17:49 by haarab            #+#    #+#             */
/*   Updated: 2024/10/20 12:53:04 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("burea"), grade(2)
{
	std::cout << "default constractor Bureaucrat" << std::endl;
}
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
	std::cout << "constractor Bureaucrat" << std::endl;
	if (Grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (Grade > 150)
	{
		throw GradeTooLowException();
	}
	this->grade = Grade;
}

void Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
	{
		std::cout << this->grade << std::endl;
    	throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrement()
{
	this->grade++;
	if (this->grade > 150)
	{
		std::cout << this->grade << std::endl;
    	throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat : copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat : assignation operator called" << std::endl;
	if (this != & src)
	{
		*this = src;
	}
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat is destroyed!" << std::endl;
}

std::ostream& operator << (std::ostream& os, Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << std::endl;
	return (os);
}

int Bureaucrat::getGrade () const
{
	return (this->grade);
}

std::string Bureaucrat::getName ()
{
	return (this->name);
}


void Bureaucrat::signForm(AForm & form)
{
	try  {
		form.beSigned(*this);
    	std::cout << this->name << " signed "  << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " couldn’t sign "  << form.getName() << " because " << " signe form is false " << std::endl;
    	std::cout << e.what() << std::endl;
	}
	//   	if (form.getSign())
	//   else
	//   {
	//     	<< " signe form is false " << std::endl;
	//   }
}

void	Bureaucrat::executeForm(AForm &form)const
{
	try {
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}