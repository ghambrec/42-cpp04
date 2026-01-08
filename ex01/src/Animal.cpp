/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:07:27 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 11:38:45 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	:	type_("unknown")
{
	std::cout << "[Animal " << type_ << "] created\n";
}

Animal::Animal(const std::string &type)
	:	type_(type)
{
	std::cout << "[Animal " << type_ << "] created\n";
}

Animal::Animal(const Animal &other)
	:	type_(other.type_)
{
	std::cout << "[Animal " << type_ << "] copy contructor called\n";
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type_ = other.type_;
	}
	std::cout << "[Animal " << type_ << "] assignment operator called\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal " << type_ << "] destroyed\n";
}

void Animal::makeSound(void) const
{
	std::cout << "[Animal " << type_ << "] *normal animal sound*\n";
}

const std::string& Animal::getType(void) const
{
	return (type_);
}
