/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:35:45 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/07 14:37:58 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeeping;

	public:
		ScavTrap( void );
		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator=(const ScavTrap &other);
		~ScavTrap( void );

		ScavTrap(const std::string name);
		void	attack(const std::string& target);
		void	guardGate();
		bool	getGateKeepingMode() const;
};

std::ostream& operator<<(std::ostream& output, const ScavTrap& scavTrap);

#endif