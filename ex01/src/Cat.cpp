/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:25 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/08 09:21:57 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
	:	Animal("Cat")
{
	brain_ = new Brain();
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
	delete brain_;
	std::cout << "[Cat] destroyed\n";
}

void Cat::makeSound(void) const
{
	std::cout << "[Cat] *meooow*\n";
}
