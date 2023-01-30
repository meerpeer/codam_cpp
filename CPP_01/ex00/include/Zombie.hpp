/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merel <merel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:43:59 by merel             #+#    #+#             */
/*   Updated: 2023/01/30 10:01:39 by merel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie;

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

class Zombie
{
private:
	std::string	_name;
	
public:
	Zombie();
	Zombie(std::string name);
	
	void	announce( void );

	~Zombie();
};




#endif