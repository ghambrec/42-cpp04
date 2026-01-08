/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 08:58:08 by ghambrec          #+#    #+#             */
/*   Updated: 2026/01/08 09:22:07 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <array>

class Brain
{
	private:
		std::array<std::string, 100> ideas_;
		std::string ideasa_[100];

	public:
		Brain();
		~Brain();
};
