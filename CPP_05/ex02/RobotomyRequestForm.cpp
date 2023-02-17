#include "include/RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("Robotomy Request Form", 25, 45), _target("Nobody") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("Robotomy Request Form", 25, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm("Robotomy Request Form", 25, 45), _target(copy.getTarget()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->_target = other.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	canExecute(executor);

	srand((unsigned) time(NULL));
	int random = rand();

	if (random % 2) {
		std::cout	<< this->_target
					<< " has been robotomized successfully ✅"
					<< std::endl;
	}
	else {
		std::cout	<< this->_target
					<< "'s robotomy failed... ❌"
					<< std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}
