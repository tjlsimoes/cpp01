/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:56:47 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/07 17:57:08 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		*weapon;

	public:
		HumanB(std::string name_arg);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon_arg);
};

#endif


// A Weapon * (weapon pointer) is used here instead of
//   Weapon & (weapon reference) to allow Human B to 
//   not have a weapon.