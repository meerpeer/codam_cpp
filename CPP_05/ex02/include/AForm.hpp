#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_requiredGrade;
		const int			_executeGrade;
		
	public:
		AForm();
		AForm(std::string name, int requiredGrade, int executeGrade);
		AForm(const AForm& copy);
		AForm& operator=(const AForm&);
		~AForm();


		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string	getName() const;
		bool		isSigned() const;
		int			getRequiredGrade() const;
		int			getExecuteGrade() const;

		void			beSigned(const Bureaucrat &steve);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream &output, const AForm& bureaucrat);


#endif