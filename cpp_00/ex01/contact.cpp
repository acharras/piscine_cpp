/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:09:56 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 13:22:48 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

contact::contact(void){
}

contact::~contact(void){
}

void	title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
}

void	exit()
{
	std::string		input;
	
	std::cout << "\nYou want to exit ? You will lose all your contact\nAre you sure (Y/N) ? ";
	std::cin >> input;
	if (input == "Y" || input == "y")
	{
		std::cout << "Goodnight ! Sleepin..." << std::endl;
		std::exit(0);
	}
	std::cout << "Okay, you can continue to use myself..." << std::endl;
}

int	main()
{
	contact Contact[8];
	std::string command;
	int	i;
	int	j;
	std::string index_of_contact;

	i = 0;
	title();
	while (getline(std::cin, command))
	{
		if (command.compare("EXIT") == 0)
			exit();
		else if (command.compare("ADD") == 0)
		{	
			if (i < 8)
			{
				Contact[i].add();
				i++;
			}
			else
				std::cout << "Sorry, but your phone is full of contact !" << std::endl;
		}
		else if (command.compare("SEARCH") == 0)
		{	
			if (i == 0)
				std::cout << "Please add at least one contact\n";
			else
			{
				std::cout << "|     index|first name| last name|  nickname|" << std::endl;
				j = 0;
				while (j < i)
				{
					Contact[j].search(j);
					j++;
				}
				std::cout << "Please enter an index..." << std::endl;
				getline(std::cin, index_of_contact);
				index_of_contact[0] -= 48;
				if (index_of_contact[0] >= 0 && index_of_contact[0] < i && index_of_contact[1] == '\0')
					Contact[(int)index_of_contact[0]].display_contact();
				else
					std::cout << "Please enter a correct index or use the basics command..." << std::endl;
			}
		}
		else
			std::cout << "Wrong command, please enter \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
	}
	return (0);
}
