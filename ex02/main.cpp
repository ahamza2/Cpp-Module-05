/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/04/21 21:41:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// int main ()
// {
// 	try
// 	{
// 		ShrubberyCreationForm shb("Tree");
// 		Bureaucrat bureaucrat("hamza", 122);
// 		// bureaucrat.signForm(form);
// 		shb.beSigned(bureaucrat);
// 		// bureaucrat.signForm(form);
// 		shb.execute(bureaucrat);
//     } catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }





























// ShrubberyCreationForm
int main()
{
	try
	{
		ShrubberyCreationForm form("Tree");
		Bureaucrat bureaucrat("hamza", 122);
		std::cout << bureaucrat;
		std::cout << form;
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		form.execute(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// RobotMyrequestForm
// int main()
// {
// 	try
// 	{
// 		RobotomyRequestForm form("Robot");
// 		Bureaucrat amine("Amine", 10);
// 		std::cout << amine;
// 		std::cout << form;
// 		form.beSigned(amine);
// 		amine.signForm(form);
// 		form.execute(amine);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

//PresidentialPardonForm
// int main()
// {
// 	try
// 	{
// 		PresidentialPardonForm form("Hassan");
// 		Bureaucrat amine("Hassan", 10);
// 		std::cout << amine;
// 		std::cout << form;
// 		form.beSigned(amine);
// 		amine.signForm(form);
// 		form.execute(amine);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }