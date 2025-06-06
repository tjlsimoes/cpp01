/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:01:12 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/19 14:01:13 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string;
	std::string	*stringPTR;
	
	string = "HI THIS BRAIN";
	stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address string: " << &string << std::endl;
	std::cout << "Memory address stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address stringRE: " << &stringREF << std::endl;

	std::cout << "\n";

	std::cout << "Value string variable: " << string << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}