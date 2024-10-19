/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/10/19 16:58:28 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	try
	{
		ShrubberyCreationForm shb("Tree");
		Bureaucrat bureaucrat("hamza", 145);
		std::cout << shb;
		bureaucrat.signForm(shb);
		std::cout << shb;
		bureaucrat.executeForm(shb);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}





























// // ShrubberyCreationForm
// int main()
// {
// 	try
// 	{
// 		ShrubberyCreationForm form("Tree");
// 		Bureaucrat bureaucrat("hamza", 122);
// 		std::cout << bureaucrat;
// 		std::cout << form;
// 		form.beSigned(bureaucrat);
// 		bureaucrat.signForm(form);
// 		form.execute(bureaucrat);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

// RobotMyrequestForm
// int main()
// {
// 	try
// 	{
// 		RobotomyRequestForm form("Robot");
// 		Bureaucrat hamza("hamza", 42);
// 		std::cout << hamza;
// 		std::cout << form;
// 		form.beSigned(hamza);
// 		hamza.signForm(form);
// 		form.execute(hamza);
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
// 		PresidentialPardonForm form("hamza");
// 		Bureaucrat aarab("hamza", 5);
// 		std::cout << aarab;
// 		std::cout << form;
// 		form.beSigned(aarab);
// 		aarab.signForm(form);
// 		form.execute(aarab);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }