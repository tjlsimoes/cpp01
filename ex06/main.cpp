/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:43:36 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/08 17:28:45 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	Harl	harl;
	int		i;

	std::map<std::string, int> map;
	map["DEBUG"] = 1;
	map["INFO"] = 2;
	map["WARNING"] = 3;
	map["ERROR"] = 4;
	i = map[argv[1]];
	switch (i)
	{
		case 1:
			harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break ;
		case 2:
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break ;
		case 3:
			harl.complain("warning");
			harl.complain("error");
			break ;
		case 4:
			harl.complain("error");
			break ;
		default:
			harl.complain("invalid");
	}
	return (0);
}