/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:56:26 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/07 17:45:10 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name_arg) : name(name_arg), weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	if (this->weapon == nullptr)
		return ;
	std::cout
		<< this->name
		<< " attacks with their " 
		<< this->weapon->getType() 
		<< std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon_arg)
{
	// Any safeguard needed here for weapon_arg?
	this->weapon = &weapon_arg;
	return ;
}
