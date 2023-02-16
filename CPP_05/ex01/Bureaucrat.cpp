/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:36:17 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/16 17:36:33 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("no-name"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) 
	: _name(copy.getName())
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		this->_grade++;
	return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
		return "Grade too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
		return "Grade too High";
}

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& bureaucrat)
{
	output << bureaucrat.getName();
	output << ", bureaucrat grade: ";
	output << bureaucrat.getGrade();
	output << ".\n";

	return output;
}

void Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigned(*this);
		std::cout	<< "✅ \""
					<< this->_name 
					<< "\" signed \""
					<< form.getName()
					<< "\""
					<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout	<< "❌ \""
					<< this->_name 
					<< "\" couldn't sign \""
					<< form.getName()
					<< "\" because: \""
					<< e.what()
					<< "\""
					<< std::endl;
	}
}
