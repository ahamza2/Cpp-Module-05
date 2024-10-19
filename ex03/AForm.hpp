#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    private :
		std::string name;
		bool sign;
		const int grade;
		const int grade_execute;

    public :
		AForm();
		AForm(AForm const &src);
		AForm &operator=(AForm const &src);
		AForm(const std::string name, int grade);
		~AForm();
		std::string getName ();
		int getGrade ();
		bool getSign ();
		int getGrade_execute ();
		void beSigned(Bureaucrat & bureaucrat);
		AForm(std::string name, const int grade, const int grade_execute);
		
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
		int	getExecGrade()const;
		int	get_Grade()const;
		int	getSign()const;
		virtual void execute(const Bureaucrat& executor) const = 0;
		// void signAForm();
  };

std::ostream& operator<<(std::ostream& os, AForm& form);
#endif