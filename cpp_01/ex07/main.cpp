/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:36:44 by acharras          #+#    #+#             */
/*   Updated: 2021/03/22 11:49:03 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

int	main(int argc, char **argv)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string s1;
	std::string s2;
	std::string str;
	std::string finalstring;
	int		s1_pos;
	if (argc != 4)
	{
		std::cout << "Please enter a correct number of argument" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.open(argv[1]);
	if (ifs.is_open())
		std::cout << "well opened" << std::endl;
	else
	{
		std::cout << "no such file or directory" << std::endl;
		return (1);
	}
	ofs.open(filename + ".replace");
	int i = 0;
	while (!ifs.eof())
	{
		if (i > 0)
			finalstring.append("\n");
		std::getline(ifs, str);
		while ((s1_pos = str.find(s1)) != -1)
			str.replace(s1_pos, s1.length(), s2);
		finalstring.append(str);	
		i++;
	}
	ofs << finalstring;
	ifs.close();
	ofs.close();
}
