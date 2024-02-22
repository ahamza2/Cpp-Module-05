/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/02/22 06:09:25 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
        // Bureaucrat bob("Bob", 5);
        // Form form("Form", 2, 3);

        // form.beSigned(bob);
        // form.getSign();
		// std::cout << form << std::endl;

        // Trying to sign a form with a bureaucrat of lower grade
        // Bureaucrat alice("Alice", 6);
        // form.beSigned(alice);

		Bureaucrat bureaucrat("hamza", 1);
		Form form("aarab", 3, 6);
		bureaucrat.signForm(form);
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}