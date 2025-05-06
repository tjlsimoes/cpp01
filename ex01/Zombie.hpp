/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:04:35 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:49:34 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		std::string		get_name(void) const;
		void			set_name(std::string str);

		void			announce(void) const;
	
	private:
		std::string	name;
};

#endif

// Constructor for Zombie changed to not use initialization list.