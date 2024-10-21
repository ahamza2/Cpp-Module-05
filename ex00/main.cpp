/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/10/20 16:34:31 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
	
		Bureaucrat bureau("hamza", 2);
		std::cout << bureau;
		bureau.increment();
		std::cout << bureau;
		
		Bureaucrat bureaucrat("aarab", 12);
		std::cout << bureaucrat;
		bureaucrat.decrement();
		std::cout << bureaucrat;
		
	}
	catch (std::exception & e)
	{
		std::cerr  << e.what() << std::endl;
	}
}