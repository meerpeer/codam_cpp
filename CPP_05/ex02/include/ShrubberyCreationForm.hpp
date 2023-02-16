#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		/* data */
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


#endif