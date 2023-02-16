#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		/* data */
	public:
		PresidentialPardonForm(/* args */);
		virtual ~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


#endif