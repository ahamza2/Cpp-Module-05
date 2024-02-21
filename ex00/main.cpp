/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:46 by haarab            #+#    #+#             */
/*   Updated: 2024/02/21 22:10:57 by haarab           ###   ########.fr       */
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
		
		Bureaucrat bureaucrat("aarab", 150);
		std::cout << bureaucrat;
		bureaucrat.decrement();
		
	}
	catch (std::exception & e)
	{
		// print the exception
		std::cerr  << e.what() << std::endl;
	}
}