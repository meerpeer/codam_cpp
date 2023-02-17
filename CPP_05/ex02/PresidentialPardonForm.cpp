#include "include/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Presidential Pardon Form", 25, 45), _target("Nobody") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("Presidential Pardon Form", 25, 45), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: AForm("Presidential Pardon Form", 25, 45), _target(copy.getTarget()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->_target = other.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	canExecute(executor);
	std::cout	<< this->_target
				<< " has been pardoned by Zaphod BeebleBrox"
				<< std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}
