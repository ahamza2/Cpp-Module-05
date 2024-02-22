#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
    private :
		std::string name;
		bool sign;
		int grade;
		int	grade_execute;

    public :
		Form();
		Form(Form const &src);
		Form &operator=(Form const &src);
		Form(const std::string name, int grade);
		~Form();
		std::string getName ();
		int getGrade ();
		bool getSign ();
		int getGrade_execute ();
		void beSigned(Bureaucrat & bureaucrat);
		Form(std::string name, int grade, int grade_execute);
		
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
		// void signForm();
  };

std::ostream& operator<<(std::ostream& os, Form& form);

#endif