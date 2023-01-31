#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon();
	Weapon(std::string type);
	const std::string	getType();
	void				setType(std::string newType);
	~Weapon();
};

#endif
