/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:56:17 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/07 17:28:20 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name_arg, Weapon &weapon_arg) : name(name_arg), weapon(weapon_arg) {}

HumanA::~HumanA(void) {} // No need to delete Weapon?

void	HumanA::attack(void)
{
	std::cout
		<< this->name
		<< " attacks with their " 
		<< this->weapon.getType() 
		<< std::endl;
}