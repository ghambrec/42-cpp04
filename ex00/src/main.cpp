/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:59:40 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 18:23:54 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{	
	const Animal* meta = new Animal("Frettchen");
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* y = new WrongCat();
	const WrongCat* w = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	x->makeSound();
	y->makeSound();
	w->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete x;
	delete y;
	delete w;

	return (0);
}
