/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:23 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/14 11:25:25 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
	:	Animal("Dog"), brain_(new Brain())
{
	std::cout << "[Dog] created\n";
}

Dog::Dog(const Dog &other)
	:	Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "[Dog] copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "[Dog] assignment oerator called\n";
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain_;
		brain_ = new Brain(*other.brain_);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain_;
	std::cout << "[Dog] destroyed\n";
}

void Dog::makeSound(void) const
{
	std::cout << "[Dog] *wuff*\n";
}

void Dog::setIdea(int idx, const std::string &idea)
{
	brain_->setIdea(idx, idea);
}

const std::string &Dog::getIdea(int idx) const
{
	return (brain_->getIdea(idx));
}
