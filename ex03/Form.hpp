/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:04:58 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:28:25 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const unsigned int _gradeToSign;
		const unsigned int _gradeToExecute;
		Form &operator=(Form const &ob);
		Form();

	public:
		Form(std::string const &name, unsigned int const &_gradeToSign, unsigned int const &gradeToExecute);
		Form(Form const &ob);
		virtual ~Form();

		std::string const &getName() const;
		unsigned int const &getSignGrade() const;
		unsigned int const &getExecuteGrade() const;
		bool const &isSigned() const;


		void beSigned(Bureaucrat const &bureaucrat);

		void execute(Bureaucrat const & executor) const;
		virtual void action() const = 0;

		class FormNotSigned : public std::exception
		  {
		  private:
		  std::string _errorMessage;

		  public:
		  FormNotSigned(std::string const &errorMessage);
		  ~FormNotSigned() throw();
		  const char *what() const throw();
		  };

		class GradeTooHighException : public std::exception
	{
		private:
			std::string _displayMessage;

		public:
			GradeTooHighException(std::string const &displayMessage);
			~GradeTooHighException() throw();

			const char *what() const throw();
	};

		class GradeTooLowException : public std::exception
	{
		private:
			std::string _displayMessage;

		public:
			GradeTooLowException(std::string const &displayMessage);
			~GradeTooLowException() throw();

			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &ob);

#endif
