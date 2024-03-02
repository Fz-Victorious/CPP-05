/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:52:41 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:54:24 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Zineb", 151);
		std::cout << b1 << std::endl;
		try
		{
			b1.gradeIncrement();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		b1.gradeDecrement();
		std::cout << b1 << std::endl;

		std::cout << std::endl;
		Bureaucrat b2("Sahar", 150);
		std::cout << b2 << std::endl;
		try
		{
			b2.gradeDecrement();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << b2 << std::endl;
		b2.gradeIncrement();
		std::cout << b2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
