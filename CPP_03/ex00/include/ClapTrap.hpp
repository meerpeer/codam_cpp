#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();


	std::string getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergypoints( void ) const;
	int			getAttackDamage( void) const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	bool	canDoAction( void );

};

std::ostream& operator<<(std::ostream& output, const ClapTrap& clapTrap);

#endif