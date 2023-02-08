/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:29 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 13:11:36 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongCat.hpp"
#include "include/WrongAnimal.hpp"

#include <iostream>

int main()
{
	std::cout << "======== construct =======" << std::endl;
	const Animal* meta = new Animal();
	const Animal* doggie = new Dog();
	const Animal* rightCat = new Cat();
	std::cout << std::endl;

	std::cout << "========= types =========" << std::endl;
	std::cout << "rightCat type = " << rightCat->getType() << " " << std::endl;
	std::cout << "doggie type = " << doggie->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "========= sounds ========" << std::endl;
	rightCat->makeSound(); //will output the cat sound!
	doggie->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	std::cout << "deleting rightCat:" << std::endl;
	delete rightCat;
	std::cout << std::endl;
	std::cout << "deleting doggie:" << std::endl;
	delete doggie;
	std::cout << std::endl;
	std::cout << "deleting meta:" << std::endl;
	delete meta;
	std::cout << std::endl;

	std::cout << "======== construct =======" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "wrongCat type = " << wrongCat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "========= sounds ========" << std::endl;
	wrongCat->makeSound(); // will not output cat sound
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	std::cout << "deleting wrongCat:" << std::endl;
	delete wrongCat;
	std::cout << std::endl;
	std::cout << "deleting wrongAnimal:" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;
	return 0;
}
