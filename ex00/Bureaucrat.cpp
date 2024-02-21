/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:17:49 by haarab            #+#    #+#             */
/*   Updated: 2024/02/21 22:03:51 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("burea"), grade(2)
{
	std::cout << "default constractor Bureaucrat" << std::endl;
}
Bureaucrat::Bureaucrat(std::string nam, int grad) : name(nam)
{
	std::cout << "constractor Bureaucrat" << std::endl;
	if (grad < 1)
	{
		throw GradeTooHighException();
	}
	else if (grad > 150)
	{
		throw GradeTooLowException();
	}
	this->grade = grad;
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
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}

std::string Bureaucrat::getName ()
{
	return (this->name);
}

int Bureaucrat::getGrade ()
{
	return (this->grade);
}