/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:23 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 17:52:47 by ghambrec         ###   ########.fr       */
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
	Animal::operator=(other);
	std::cout << "[Dog] assignment oerator called\n";
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
