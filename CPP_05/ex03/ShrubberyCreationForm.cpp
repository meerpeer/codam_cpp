#include "include/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery Creation Form", 145, 137), _target("Nobody") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: AForm("Shrubbery Creation Form", 145, 137), _target(copy.getTarget()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->_target = other.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	canExecute(executor);
	std::ofstream output(this->_target + "_shrubbery");
	if (!output)
		throw UnableToCreateTrees();
	output	<< "                             ,@@@@@@@," << std::endl;
	output	<< "                     ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	output	<< "                  ,&@@&%&&%,@@@@@/@@@@@@,8888/88/8o" << std::endl;
	output	<< "                 ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	output	<< "               __%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	output	<< "              / _)%&&%/ %&&%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	output	<< "     _.----._/ / `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	output	<< "    /         /      |o|        | |         | |" << std::endl;
	output	<< " __/ (  | (  |       |.|        | |         | |" << std::endl;
	output	<< "/__.-'|_|--|_|     \\/ ._\\//_/__/  ,\\_//__ \\/.  \\_//__/_ " << std::endl;
	output.close();
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

const char *ShrubberyCreationForm::UnableToCreateTrees::what() const throw()
{
	return "Unable to create tree file";
}
