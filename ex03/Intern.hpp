/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:29:11 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:28:41 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "form.h"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Form;

class Intern
{
	private:
		Intern(Intern const &ob);
		Intern &operator=(Intern const &ob);

	public:
		Intern();
		~Intern();

		Form *makeForm(std::string const &formName, std::string const &target);

		class  UnknownForm : public std::exception
	{
		public:
			UnknownForm();
			~UnknownForm() throw();

			const char *what() const throw();
	};
};

Form *shrubberyFormCreation(std::string const &target);
Form *robotomyRequestFormCreation(std::string const &target);
Form *presidentialPardonFormCreation(std::string const &target);

#endif
