/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:04:35 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/06 16:26:39 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string str);
		~Zombie(void);

		std::string		get_name(void) const;
		void			set_name(std::string str);
		void			randomChump(std::string name);
		Zombie			*newZombie(std::string name);

		void			announce(void) const;
	
	private:
		std::string	name;
};

#endif