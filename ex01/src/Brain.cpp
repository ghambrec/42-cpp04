/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:12:45 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/08 10:31:02 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] created\n";
}

Brain::Brain(const Brain &other)
	: ideas_(other.ideas_)
{
	std::cout << "[Brain] copy constructor called\n";
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "[Brain] assignment oerator called\n";
	if (this != &other)
		ideas_ = other.ideas_;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] destroyed\n";
}
