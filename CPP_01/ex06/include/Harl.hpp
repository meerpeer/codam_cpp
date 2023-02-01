#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );
	int		get_level (std::string level);

public:
	enum	level {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	typedef struct		s_complain
	{
		std::string	command;
		level		level;
	}					t_complain;
	

	Harl();
	void	complain ( std::string level);
	~Harl();
};




#endif