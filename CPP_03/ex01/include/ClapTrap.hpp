/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:36:35 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 18:33:56 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();


	std::string getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergypoints( void ) const;
	int			getAttackDamage( void) const;

	void		setName( std::string name );
	void		setHitPoints( int hp );
	void		setEnergypoints( int ep );
	void		setAttackDamage( int ad );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	bool	canDoAction( void );

};

std::ostream& operator<<(std::ostream& output, const ClapTrap& clapTrap);

#endif