/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:16:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:28:42 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

static	void	aux_function_a(void)
{
	Zombie	zombie_stack("Stack Zombie");
	
	std::cout << "Shall die upon leaving this aux_function_a\n";
}

static	Zombie	*aux_function_b(void)
{
	Zombie	*zmb_ptr;
	
	zmb_ptr = new Zombie("Heap Zombie");
	std::cout << "Shall not die upon leaving this aux_function_b\n";
	return (zmb_ptr);
}

int	main(void)
{
	Zombie	*zmb_ptr;

	aux_function_a();
	zmb_ptr = aux_function_b();
	zmb_ptr->set_name("Heap NEW Name");
	delete zmb_ptr;
	
	return (0);
}