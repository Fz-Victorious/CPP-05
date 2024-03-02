/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:50:48 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:48:04 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

#define HIGH_GRADE 1
#define LOW_GRADE 150

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
		Bureaucrat();

	public:
		Bureaucrat &operator=(Bureaucrat const &ob);
		Bureaucrat(std::string const &name, unsigned int const &grade);
		Bureaucrat(Bureaucrat const &ob);
		~Bureaucrat();

		std::string const &getName() const;
		unsigned int const &getGrade() const;
		void gradeIncrement();
		void gradeDecrement();

		void signForm(Form &form);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
	{

		public:
			GradeTooHighException();
			~GradeTooHighException() throw();

			const char *what() const throw();
	};

		class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			~GradeTooLowException() throw ();

			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ob);

#endif
