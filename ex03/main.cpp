/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:28:34 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:32:17 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form *form = someRandomIntern.makeForm("what", "bendin");
		std::cout << *form << std::endl;
		std::cout << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cout << "main catch : ";
		std::cout << e.what() << std::endl;
	}
	return (0);
}
