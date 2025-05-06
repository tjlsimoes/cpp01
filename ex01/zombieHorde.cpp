/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:40:28 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:17 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zmb_array;

	zmb_array = new Zombie[N];
	for (int i = 0; i < N; i++)
		(&zmb_array[i])->set_name(name);
	return (zmb_array);
}