/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/10/16 19:06:37 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Bureaucrat bureaucrat("hamza", 5);
		Form form("aarab", 6, 6);
		std::cout << form;
		bureaucrat.signForm(form);
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}