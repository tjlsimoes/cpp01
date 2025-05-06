/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:04:39 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:49:52 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor was called.\n";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor was called.\n";
	std::cout << "Zombie " << name << " has been killed.\n";
	return ;
}

std::string	Zombie::get_name(void) const
{
	return this->name;
}

void	Zombie::set_name(std::string str)
{
	this->name = str;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout
		<< name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}
