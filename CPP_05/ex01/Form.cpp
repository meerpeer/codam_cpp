#include "include/Form.hpp"
#include <iostream>

Form::Form() 
	: _name("no-name"), _signed(false), _requiredGrade(1), _executeGrade(1)
{
}

Form::Form(std::string name, int requiredGrade, int executeGrade)
	: _name(name), _signed(false), _requiredGrade(requiredGrade), _executeGrade(executeGrade)
{
	if (_requiredGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	else if (_requiredGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &copy) :	_name(copy.getName()),
								_requiredGrade(copy.getRequiredGrade()),
								_executeGrade(copy.getExecuteGrade())
{
	*this = copy;
}

Form &Form::operator=(const Form &other)
{
	this->_signed = other.isSigned();
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::isSigned() const
{
	return this->_signed;
}

int Form::getRequiredGrade() const
{
	return this->_requiredGrade;
}

int Form::getExecuteGrade() const
{
	return this->_executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiredGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

std::ostream&	operator<<(std::ostream &output, const Form& form) {
	output << form.getName() << ":" << std::endl;
	output << "Signed Status:\t\t\t" << form.isSigned() << std::endl;
	output << "Required Grade to sign:\t\t" << form.getRequiredGrade() << std::endl;
	output << "Required Grade to execute:\t" << form.getExecuteGrade() << std::endl;

	return output;
}
