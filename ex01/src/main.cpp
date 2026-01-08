/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:59:40 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/08 10:18:52 by ghambrec         ###   ########.fr       */
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

	return (0);
}
