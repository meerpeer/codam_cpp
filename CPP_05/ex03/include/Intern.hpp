#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
	private:
		enum	eForm {
			ROBOT,
			SHRUB,
			PRESIDENTIAL,
			NONE
		};

		typedef struct s_formTypes
		{
			eForm		type;
			std::string	formName;
		}	t_formTypes;

		eForm	getType(std::string formName);
		AForm*	createForm(std::string formName, std::string target);

	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& other);
		~Intern();


		class UnableToCreateForm : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		AForm*	makeForm(std::string formName, std::string target);
};

#endif