/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:07:24 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:53:53 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bcrat("Zineb", 20);
    Form form1("benden", 25, 25);
    try
    {    
        std::cout << std::endl;
        std::cout << "bureaucrat : " << bcrat << std::endl;
        std::cout << "form1 : " << form1 << std::endl;
        std::cout << std::endl;

        std::cout << "******** "<< bcrat.getName() << " try to sign " << form1.getName() << "  ********"<< std::endl; 
        bcrat.signForm(form1);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "main catch : " ;
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "form1 : " << form1 << std::endl;
    return (0);
}
