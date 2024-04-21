/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:17:55 by haarab            #+#    #+#             */
/*   Updated: 2024/04/21 18:53:02 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>


class AForm;
class Bureaucrat
{
    private :
		const std::string name;
		int grade;
    public :
		Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw()
			{
				return "highest possible grade";
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return "lowest possible grade";
			}
		};

		void increment();
		void decrement();
		std::string getName () ;
		int getGrade () const;
		void signForm(AForm & form);
		void executeForm(AForm &form)const;
	
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif