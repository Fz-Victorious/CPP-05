/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:55:47 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:50:17 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    int n = 3;
    Form *form[n];
    for (int i = 0; i < n; i++)
    {
        form[i] = nullptr;
    }
    try
    {
        Bureaucrat bcrat("Sahar", 4);

        form[0] = new PresidentialPardonForm("benden");
        form[1] = new RobotomyRequestForm("forest");
        form[2] = new ShrubberyCreationForm("newform");

        std::cout << std::endl;
        std::cout << "bureaucrat : " << bcrat << std::endl;
        std::cout << "form[0] : " << *form[0] << std::endl;
        std::cout << "form[1] : " << *form[1] << std::endl;
        std::cout << "form[2] : " << *form[2] << std::endl;
        std::cout << std::endl;

        std::cout << "->sign Forms" << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to sign " << (*form[0]).getName() << "  ********" << std::endl;
        bcrat.signForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to sign " << (*form[1]).getName() << "  ********" << std::endl;
        bcrat.signForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to sign " << (*form[2]).getName() << "  ********" << std::endl;
        bcrat.signForm(*form[2]);

        std::cout << std::endl;
        std::cout << "->execute Forms" << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to execute " << (*form[0]).getName() << "  ********" << std::endl;
        bcrat.executeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to execute " << (*form[1]).getName() << "  ********" << std::endl;
        bcrat.executeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << bcrat.getName() << " try to execute " << (*form[2]).getName() << "  ********" << std::endl;
        bcrat.executeForm(*form[2]);

        for (int i = 0; i < n; i++)
        {
            delete form[i];
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "main catch : ";
        std::cout << e.what() << std::endl;
        for (int i = 0; i < n; i++)
        {
            delete form[i];
        }
    }
    return 0;
}
