/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:25 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 11:32:00 by ghambrec         ###   ########.fr       */
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
	Animal::operator=(other);
	std::cout << "[Cat] assignment oerator called\n";
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destroyed\n";
}

void Cat::makeSound(void) const
{
	std::cout << "[Cat] meooow\n";
}
