#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_requiredGrade;
		const int			_executeGrade;
		
	public:
		Form();
		Form(std::string name, int requiredGrade, int executeGrade);
		Form(const Form& copy);
		Form& operator=(const Form&);
		~Form();


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

		void		beSigned(const Bureaucrat &steve);
};

std::ostream&	operator<<(std::ostream &output, const Form& bureaucrat);


#endif