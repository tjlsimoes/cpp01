/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:04:33 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:28:35 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
	return ;
}
