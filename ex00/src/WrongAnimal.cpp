/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:57:39 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 18:05:52 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:	type_("unknown")
{
	std::cout << "[WrongAnimal " << type_ << "] created\n";
}

WrongAnimal::WrongAnimal(const std::string &type)
	:	type_(type)
{
	std::cout << "[WrongAnimal " << type_ << "] created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
	:	type_(other.type_)
{
	std::cout << "[WrongAnimal " << type_ << "] copy contructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type_ = other.type_;
	}
	std::cout << "[WrongAnimal " << type_ << "] assignment operator called\n";
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal " << type_ << "] destroyed\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal " << type_ << "] *normal WrongAnimal sound*\n";
}

const std::string& WrongAnimal::getType(void) const
{
	return (type_);
}
