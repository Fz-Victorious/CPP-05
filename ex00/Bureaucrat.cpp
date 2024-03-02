/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:51:05 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:54:32 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, unsigned int const &grade) : _name(name)
{
	//std::cout << "Bureaucrat parametre  constructor called " << std::endl;
	try
	{
		if (grade < HIGH_GRADE)
			throw GradeTooHighException();
		else if (grade > LOW_GRADE)
			throw GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (const std::exception &e)
	{
		std::cout << "Bureacrate " + _name + " Constructor failed" << std::endl;
		throw;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &ob) : _name(ob._name), _grade(ob._grade)
{
	//std::cout << "Bureaucrat copy constructor called " << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "destructor Bureaucrat called " << std::endl;
}

std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int const &Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::gradeIncrement()
{
	if (this->_grade == HIGH_GRADE)
		throw GradeTooHighException();
	std::cout << "Bureaucrat " << _name << " is incremented" << std::endl;
	this->_grade--;
}

void Bureaucrat::gradeDecrement()
{
	if (this->_grade == LOW_GRADE)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << _name << " is decremented" << std::endl;

	this->_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	//std::cout << "GradeTooHighException constructor called " << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureaucrat Grade too High, grades are between 1 and 150.");
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	//std::cout << "GradeTooHighException destructor called " << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	//std::cout << "GradeTooLowException constructor called " << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureaucrat Grade is too Low, grades are between 1 and 150.");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	//std::cout << "GradeTooLowException destructor called " << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ob)
{
	this->_grade = ob.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ob)
{
	os << ob.getName() << ", bureaucrat grade " << ob.getGrade();
	return (os);
}
