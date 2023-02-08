/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 15:14:29 by mevan-de      #+#    #+#                 */
/*   Updated: 2023/02/08 14:53:23 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/AAnimal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"

#include <iostream>

int main()
{
	//=====================================//
	//======== BASIC TEST FOR LEAKS =======//
	//=====================================//
	std::cout << "======== construct =======" << std::endl;
	int			nrAnimals = 6;
	//this should now be impossible:
	//const AAnimal* nope = new AAnimal();
	const AAnimal *pack[nrAnimals];
	for(int i = 0; i < nrAnimals; i++)
	{
		if (i % 2)
			pack[i] = new Dog();
		else
			pack[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "========= types =========" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
		std::cout << pack[i]->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "========= sounds ========" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
		pack[i]->makeSound();
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
	{
		std::cout << "animal[" << i << "]:" <<std::endl;
		delete pack[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;

	// std::cout << "======= leak check ======" << std::endl;
	// system("leaks -q brain");
	// std::cout << std::endl;

	//=====================================//
	//============= COPY TESTS ============//
	//=====================================//
	std::cout << "====== dog copy test ====" << std::endl;
	const Dog* firstDog = new Dog();
	std::cout << std::endl;
	//setting a thought to check if the value gets copied
	firstDog->getBrain()->setIdea(0, "Dog wants play!");
	std::cout	<< "firstDog: idea[0] = "
				<< firstDog->getBrain()->getIdea(0)
				<< std::endl
				<< "firstDog: brain address = "
				<< firstDog->getBrain()
				<< std::endl << std::endl;
	//copying the firstDog to copyDog
	std::cout << "Deep copying the firstDog:" << std::endl;
	const Dog* copyDog = new Dog(*firstDog);
	std::cout << std::endl;
	std::cout	<< "copyDog: idea[0] = "
				<< copyDog->getBrain()->getIdea(0)
				<< std::endl
				<< "copyDog: brain address = "
				<< copyDog->getBrain()
				<< std::endl << std::endl;


	std::cout << "====== cat copy test ====" << std::endl;
	const Cat* firstCat = new Cat();
	std::cout << std::endl;
	firstCat->getBrain()->setIdea(0, "Cat wants murder!");
	std::cout	<< "firstCat: idea[0] = "
				<< firstCat->getBrain()->getIdea(0)
				<< std::endl
				<< "firstCat: brain address = "
				<< firstCat->getBrain()
				<< std::endl << std::endl;
	//copying the firstCat to copyCat
	std::cout << "Deep copying the firstCat:" << std::endl;
	const Cat* copyCat = new Cat(*firstCat);
	std::cout << std::endl;
	std::cout	<< "copyCat: idea[0] = "
				<< copyCat->getBrain()->getIdea(0)
				<< std::endl
				<< "copyCat: brain address = "
				<< copyCat->getBrain()
				<< std::endl << std::endl;
	
	std::cout << "======== destruct =======" << std::endl;
	delete firstDog;
	delete copyDog;
	delete firstCat;
	delete copyCat;
	std::cout << std::endl;
	
	// std::cout << "======= leak check ======" << std::endl;
	// system("leaks -q brain");
	// std::cout << std::endl;
	return 0;
}
