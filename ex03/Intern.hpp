#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern {
    private :
    public :
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		~Intern();
		AForm *makeForm(std::string Form, std::string target_form);

		class Error : public std::exception {
			const char* what() const throw() {
			return "Intern Error : Name u provided was not found";
			}
		};
  
  };

#endif