#include "include/Intern.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &)
{
	return (*this);
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	eForm	type = NONE;
	t_formTypes types[3] = {
		{ROBOT, "robotomy request"},
		{SHRUB, "shrubbery request"},
		{PRESIDENTIAL, "presidential request"}
	};

	for (int i = 0; i < 3; i++){
		if (formName == types[i].formName)
			type = types[i].type;
	}

	AForm *created_form = NULL;
	switch (type)
	{
		case ROBOT:
			created_form = new RobotomyRequestForm(target);
			break;
		case SHRUB:
			created_form = new ShrubberyCreationForm(target);
			break;
		case PRESIDENTIAL:
			created_form = new PresidentialPardonForm(target);
			break;
		default:
			std::cerr << "\"" << formName << "\" is not a form that the intern can create" << std::endl;
			throw UnableToCreateForm();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return created_form;
}

const char *Intern::UnableToCreateForm::what() const throw()
{
	return "Unable to create form";
}
