/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:56:33 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/07 17:26:30 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		&weapon;

	public:
		HumanA(std::string name_arg, Weapon &weapon_arg);
		~HumanA(void);

		void	attack(void);
};

#endif