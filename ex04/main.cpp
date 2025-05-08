/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:28:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/05/08 13:18:42 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

static std::string	*get_filename_content(std::ifstream &filename)
{
	int			length;
	char		*buffer;
	std::string	*str_buffer;
	
	filename.seekg(0, filename.end);
	length = filename.tellg();
	filename.seekg(0, filename.beg);

	buffer = new char [length];
	if (!buffer)
		return (NULL);
	filename.read(buffer, length);
	filename.close();
	str_buffer = new std::string(buffer, length);
	delete[] buffer;
	return (str_buffer);
}

static int	filter_output(std::ifstream &filename, std::ofstream &newfile,
						std::string s1, std::string s2) // References correctly used here?
{
	std::string		*buffer;
	long unsigned	i;

	buffer = get_filename_content(filename);
	if (!buffer)
		return (std::cerr << "Error on buffer allocation" << std::endl, 0);
	i = 0;
	if (s1.empty())
		return (newfile << *buffer, 0);
	while (i < buffer->length())
	{
		if (s1.compare(buffer->substr(i, s1.length())) == 0)
		{
			newfile << s2;
			i += s1.length();
		}
		else
		{
			newfile << (*buffer)[i];
			i++;
		}
	}
	delete buffer;
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream		filename;
	std::ofstream		newfile;
	std::string			new_path;
	std::string			str;

	if (argc != 4)
		return (1);
	new_path = argv[1];
	new_path += ".replace";
	filename.open(argv[1]);
	newfile.open(&(new_path[0]),  std::ios::out | std::ios_base::trunc);
	if (!filename.is_open() || !newfile.is_open())
		return (std::cerr << "Failed to open file streams." << std::endl, 1);
	
	filter_output(filename, newfile,argv[2], argv[3]);

	filename.close();
	newfile.close();
	return (0);
}

// ./prog Makefile "" b
// ./prog Makefile c++ a
// ./prog Makefile c "Chickensaw is awesome!"
