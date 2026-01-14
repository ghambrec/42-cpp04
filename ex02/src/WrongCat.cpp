/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:57:35 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/16 18:22:52 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	:	WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] created\n";
}

WrongCat::WrongCat(const WrongCat &other)
	:	WrongAnimal(other)
{
	std::cout << "[WrongCat] copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	std::cout << "[WrongCat] assignment oerator called\n";
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] destroyed\n";
}

void WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat] *muuuuh*\n";
}
