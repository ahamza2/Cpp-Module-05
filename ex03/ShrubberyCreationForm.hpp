#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		const std::string target;
    public :
      	ShrubberyCreationForm();
    	ShrubberyCreationForm(const std::string& target);
      	ShrubberyCreationForm(ShrubberyCreationForm const &src);
      	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
    	virtual ~ShrubberyCreationForm();
    	void execute(const Bureaucrat& executor) const;
		
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return "lowest possible grade Shrubbery Form";
			}
		};


};

#endif