/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:29 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:22:41 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/AAnimal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"

#include <iostream>

int main()
{
	std::cout << "======== construct =======" << std::endl;
	// won't work:
	//const AAnimal* meta = new AAnimal();
	const AAnimal* doggie = new Dog();
	const AAnimal* rightCat = new Cat();
	std::cout << std::endl;

	std::cout << "========= types =========" << std::endl;
	std::cout << "rightCat type = " << rightCat->getType() << " " << std::endl;
	std::cout << "doggie type = " << doggie->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "========= sounds ========" << std::endl;
	rightCat->makeSound(); //will output the cat sound!
	doggie->makeSound();
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	std::cout << "deleting rightCat:" << std::endl;
	delete rightCat;
	std::cout << std::endl;
	std::cout << "deleting doggie:" << std::endl;
	delete doggie;
	std::cout << std::endl;
	return 0;
}
