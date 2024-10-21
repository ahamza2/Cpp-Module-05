#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP


#include "AForm.hpp"
#include <cstdlib>
#include <ctime>


class RobotomyRequestForm : public AForm {
    private :
		const std::string target;
    public :
      	RobotomyRequestForm();
      	RobotomyRequestForm(RobotomyRequestForm const &src);
      	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

		RobotomyRequestForm(const std::string& target);
		virtual ~RobotomyRequestForm();

		virtual void execute(const Bureaucrat& executor) const;

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return "lowest possible grade Robotomy Form";
			}
		};
  };


#endif