/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:38:48 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/07 17:23:22 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {}

Weapon::~Weapon(void) {}

std::string const & Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string str)
{
	if (!str.empty())
		this->type = str;
	return ;
}