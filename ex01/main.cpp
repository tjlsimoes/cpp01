/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:16:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 17:00:40 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*zmb_array;

	zmb_array = zombieHorde(50, "The Mind Flayer");
	for (int i = 0; i < 50; i++)
		zmb_array[i].announce();
	delete[] zmb_array;
	return (0);
}