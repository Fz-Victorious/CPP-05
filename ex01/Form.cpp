/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:58:11 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:53:20 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const &gradeToSign, unsigned int const &gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	//std::cout << "Form parametre constructor called " << std::endl;
	try
	{
		if (gradeToSign < HIGH_GRADE || gradeToExecute < HIGH_GRADE)
			throw GradeTooHighException("the Grades entred for Form " + _name + " is too High, the range between 1-150.");
		else if (gradeToSign > LOW_GRADE || gradeToExecute > LOW_GRADE)
			throw GradeTooLowException("the Grade entred for " + _name + " is too low,  the range between 1-150.");
		else
		{
			std::cout << "Form " + this->_name + " created" << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "Form " + _name + " creation failed" << std::endl;
		throw;
	}
}

Form::Form(Form const &ob)
	: _name(ob._name), _isSigned(ob._isSigned), _gradeToSign(ob._gradeToSign), _gradeToExecute(ob._gradeToExecute)
{
	//std::cout << "Form copy constructor called " << std::endl;
}

Form::~Form()
{
	//std::cout << "Form destructor called " << std::endl;
}

std::string const &Form::getName() const
{
	return (this->_name);
}

unsigned int const &Form::getSignGrade() const
{
	return (this->_gradeToSign);
}

unsigned int const &Form::getExecuteGrade() const
{
	return (this->_gradeToExecute);
}

bool const &Form::isSigned() const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_gradeToSign < bureaucrat.getGrade())
		throw GradeTooLowException("Bureaucrat grade is too low to sign the form");
	this->_isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(std::string const &displayMessage) : _displayMessage(displayMessage)
{
	//std::cout << "GradeTooHighException constructor called " << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (_displayMessage.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	//std::cout << "GradeTooHighException destructor called " << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(std::string const &displayMessage) : _displayMessage(displayMessage)
{
	//std::cout << "GradeTooLowException constructor called " << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (_displayMessage.c_str());
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	//std::cout << "GradeTooLowException destructor called " << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Form &ob)
{
	os << ob.getName() << ", Form sign grade: " << ob.getSignGrade() << " with execute grade : " << ob.getExecuteGrade() << (ob.isSigned() == true ? " signed" : " not signed");
	return (os);
}
