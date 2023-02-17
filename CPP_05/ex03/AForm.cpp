#include "include/AForm.hpp"
#include <iostream>

AForm::AForm() 
	: _name("no-name"), _signed(false), _requiredGrade(1), _executeGrade(1)
{
}

AForm::AForm(std::string name, int requiredGrade, int executeGrade)
	: _name(name), _signed(false), _requiredGrade(requiredGrade), _executeGrade(executeGrade)
{
	if (_requiredGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	else if (_requiredGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) :	_name(copy.getName()),
								_requiredGrade(copy.getRequiredGrade()),
								_executeGrade(copy.getExecuteGrade())
{
	*this = copy;
}

AForm &AForm::operator=(const AForm &other)
{
	this->_signed = other.isSigned();
	return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::isSigned() const
{
	return this->_signed;
}

int AForm::getRequiredGrade() const
{
	return this->_requiredGrade;
}

int AForm::getExecuteGrade() const
{
	return this->_executeGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_requiredGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void AForm::canExecute(const Bureaucrat &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSigned();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

const char *AForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}

std::ostream&	operator<<(std::ostream &output, const AForm& form) {
	output << form.getName() << ":" << std::endl;
	output << "Signed Status:\t\t\t" << form.isSigned() << std::endl;
	output << "Required Grade to sign:\t\t" << form.getRequiredGrade() << std::endl;
	output << "Required Grade to execute:\t" << form.getExecuteGrade() << std::endl;

	return output;
}
