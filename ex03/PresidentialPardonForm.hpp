#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private :
		const std::string target;
    public :
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

		PresidentialPardonForm(const std::string& target);
		virtual ~PresidentialPardonForm();

		virtual void execute(const Bureaucrat& executor) const;
  };

#endif