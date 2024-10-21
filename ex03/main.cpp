/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/10/20 15:25:32 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("biro", 140);
		Bureaucrat bureaucrat1("hamza", 5);
		Bureaucrat bureaucrat2("aarab", 4);
		ShrubberyCreationForm shrubby("Shrubbery");
		RobotomyRequestForm robbot("robbot");
		PresidentialPardonForm presidential("presidential");
		bureaucrat.signForm(shrubby);
		bureaucrat1.signForm(robbot);
		bureaucrat2.signForm(presidential);

		bureaucrat.executeForm(shrubby);
		bureaucrat1.executeForm(robbot);
		bureaucrat2.executeForm(presidential);
		Bureaucrat bureaucrat3("aara", 4);
		Intern intern;
		AForm *form = intern.makeForm("PresidentialPardonForm", "Bender");
		bureaucrat3.signForm(*form);
		bureaucrat3.executeForm(*form);

		std::cout << "FORM NAME : " << form->getName()  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
