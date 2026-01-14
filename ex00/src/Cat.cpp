/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:25 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/14 12:41:57 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:	Animal("Cat")
{
	std::cout << "[Cat] created\n";
}

Cat::Cat(const Cat &other)
	:	Animal(other)
{
	std::cout << "[Cat] copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "[Cat] assignment oerator called\n";
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destroyed\n";
}

void Cat::makeSound(void) const
{
	std::cout << "[Cat] *meooow*\n";
}
