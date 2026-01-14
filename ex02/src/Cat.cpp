/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:25 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/14 11:26:26 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
	:	Animal("Cat"), brain_(new Brain())
{
	std::cout << "[Cat] created\n";
}

Cat::Cat(const Cat &other)
	:	Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "[Cat] copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "[Cat] assignment oerator called\n";
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain_;
		brain_ = new Brain(*other.brain_);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "[Cat] destroyed\n";
}

void Cat::makeSound(void) const
{
	std::cout << "[Cat] *miauu*\n";
}

void Cat::setIdea(int idx, const std::string &idea)
{
	brain_->setIdea(idx, idea);
}

const std::string &Cat::getIdea(int idx) const
{
	return (brain_->getIdea(idx));
}
