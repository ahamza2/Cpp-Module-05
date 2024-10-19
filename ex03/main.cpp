/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/04/25 23:22:07 by haarab           ###   ########.fr       */
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
		Bureaucrat bureaucrat("biro", 3);
		ShrubberyCreationForm shrubby("Shrubbery");
		RobotomyRequestForm robbot("robbot");
		PresidentialPardonForm presidential("presidential");
		robbot.beSigned(bureaucrat);
		shrubby.beSigned(bureaucrat);
		presidential.beSigned(bureaucrat);
		shrubby.execute(bureaucrat);
		robbot.execute(bureaucrat);
		presidential.execute(bureaucrat);
		ShrubberyCreationForm gg("gg");
		gg.beSigned(bureaucrat);
		bureaucrat.signForm(gg);
		Intern intern;
		AForm *form = intern.makeForm("PresidentialPardonForm", "Bender");
		std::cout << "FORM NAME : " << form->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
