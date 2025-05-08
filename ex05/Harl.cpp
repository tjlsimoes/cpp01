/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:45:51 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/08 17:02:04 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout 
		<< "I love having extra bacon for my triple 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout 
		<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout 
		<< "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
		<< std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout 
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	void (Harl::*f)(void);
	std::map<std::string, void(Harl::*)()> map;

	map["debug"] = &Harl::debug;
	map["info"] = &Harl::info;
	map["warning"] = &Harl::warning;
	map["error"] = &Harl::error;

	f = map[level];
	if (f)
		(this->*f)();
	else
		std::cerr << "Invalid level" << std::endl;
	return ;
}

// map["debug"] = &Harl::debug; The address of the debug function is stored
//

