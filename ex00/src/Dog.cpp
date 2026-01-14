/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:23 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/14 12:42:28 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:	Animal("Dog")
{
	std::cout << "[Dog] created\n";
}

Dog::Dog(const Dog &other)
	:	Animal(other)
{
	std::cout << "[Dog] copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "[Dog] assignment oerator called\n";
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] destroyed\n";
}

void Dog::makeSound(void) const
{
	std::cout << "[Dog] *wuff*\n";
}
