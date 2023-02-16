#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		/* data */
	public:
		RobotomyRequestForm(/* args */);
		virtual ~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
};

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

#endif