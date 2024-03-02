/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:29:03 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:28:35 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::UnknownForm::UnknownForm() 
{
}

Intern::UnknownForm::~UnknownForm() throw()
{
}

const char *Intern::UnknownForm::what() const throw() 
{
	return ("Requested form is unknown");
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
    std::string array[3] = {"shrubbery","robotomy request", "presidential pardon"};
    Form *(*func[3])(std::string const &target);

    func[0] = &shrubberyFormCreation;
    func[1] = &robotomyRequestFormCreation;
    func[2] = &presidentialPardonFormCreation;

    for (int i = 0; i < 3; i++)
    {
        if (array[i] == formName)
        {
            std::cout << "Intern creates " + array[i] << std::endl;
            return(func[i](target));
        }
    }
    throw UnknownForm();
}

Form *shrubberyFormCreation(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

Form *robotomyRequestFormCreation(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

Form *presidentialPardonFormCreation(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}
