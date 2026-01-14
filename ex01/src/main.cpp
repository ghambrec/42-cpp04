/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:59:40 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/14 11:59:10 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main()
{	
	std::array<Animal*, 6> animals;
	std::array<std::string, 5> idea;
	int i = 0;

	while (i < 6)
	{
		if (i % 2 == 0)
			animals.at(i) = new Dog();
		else
			animals.at(i) = new Cat();
		i++;
	}

	std::cout << animals.at(0)->getType() << " " << std::endl;
	std::cout << animals.at(1)->getType() << " " << std::endl;
	std::cout << animals.at(2)->getType() << " " << std::endl;
	std::cout << animals.at(3)->getType() << " " << std::endl;
	std::cout << animals.at(4)->getType() << " " << std::endl;
	std::cout << animals.at(5)->getType() << " " << std::endl;
	animals.at(0)->makeSound();
	animals.at(1)->makeSound();
	animals.at(2)->makeSound();
	animals.at(3)->makeSound();
	animals.at(4)->makeSound();
	animals.at(5)->makeSound();
	
	for (Animal *a : animals)
	{
		delete a;
	}

	// deep copy tests
	std::cout << "########## DEEP COPY TEST [COPY CONSTRUCTOR] ##########\n";
	Cat percy;
	percy.setIdea(0, "cuddle with human");
	
	Cat mico(percy);
	std::cout << "percy: " << percy.getIdea(0) << "\n";
	std::cout << "mico:  " << mico.getIdea(0) << "\n";
	
	mico.setIdea(0, "clean myself");
	std::cout << "percy: " << percy.getIdea(0) << "\n";
	std::cout << "mico:  " << mico.getIdea(0) << "\n";
	
	
	std::cout << "########## DEEP COPY TEST [OPERATOR=] ##########\n";
	Cat lucy;
	lucy.setIdea(0, "get some rest");

	Cat momo;
	momo.setIdea(0, "get a mouse");

	std::cout << "lucy: " << lucy.getIdea(0) << "\n";
	std::cout << "momo: " << momo.getIdea(0) << "\n";
	
	momo = lucy;
	std::cout << "lucy: " << lucy.getIdea(0) << "\n";
	std::cout << "momo: " << momo.getIdea(0) << "\n";

	momo.setIdea(0, "get a bird");
	std::cout << "lucy: " << lucy.getIdea(0) << "\n";
	std::cout << "momo: " << momo.getIdea(0) << "\n";


	return (0);
}
