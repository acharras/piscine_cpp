/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:40:58 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 13:29:01 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class contact
{	
	public:
	
	contact(void);
	~contact(void);
	
	void	display_contact()
	{
		std::cout << "First name : " << first_name << std::endl;
		std::cout << "Last name : " << last_name << std::endl;
		std::cout << "Nickname : " << nickname << std::endl;
		std::cout << "Login : " << login << std::endl;
		std::cout << "Postal address : " << postal_address << std::endl;
		std::cout << "Email address : " << email_address << std::endl;
		std::cout << "Phone number : " << phone_number << std::endl;
		std::cout << "Birthday date : " << birthday_date << std::endl;
		std::cout << "Favorite meal : " << favorite_meal << std::endl;
		std::cout << "Underwear color : " << underwear_color << std::endl;
		std::cout << "Darkest secret : " << darkest_secret << std::endl;
	}


	int	search(int i)
	{
		size_t j;
		char	c[2];

		c[1] = '\0';
		j = 10;
		std::cout << std::endl;
		std::string temp;
		std::string space = "                   ";
		temp.append("|");
		temp.append(space.substr(0, 9));
		c[0] = i + 48;
		temp += c;
		temp.append("|");
		if (first_name.length() <= j)
		{
			temp.append(space.substr(0, j - first_name.length()));
			temp.append(first_name);
		}
		else
		{
			temp.append(first_name.substr(0, 9));
			temp.append(".");
		}
		temp.append("|");
		if (last_name.length() <= j)
		{
			temp.append(space.substr(0, j - last_name.length()));
			temp.append(last_name);
		}
		else
		{
			temp.append(last_name.substr(0, 9));
			temp.append(".");
		}
		temp.append("|");
		if (nickname.length() <= j)
		{
			temp.append(space.substr(0, j - nickname.length()));
			temp.append(nickname);
		}
		else
		{
			temp.append(nickname.substr(0, 9));
			temp.append(".");
		}
		temp.append("|");
		std::cout << temp << std::endl;
		return (0);
	}
	
	int	add(void)
	{
		std::cout << "first name" << std::endl;
		getline(std::cin, first_name);
		std::cout << "last name" << std::endl;
		getline(std::cin, last_name);
		std::cout << "nickname" << std::endl;
		getline(std::cin, nickname);
		std::cout << "login" << std::endl;
		getline(std::cin, login);
		std::cout << "postal address" << std::endl;
		getline(std::cin, postal_address);
		std::cout << "email address" << std::endl;
		getline(std::cin, email_address);
		std::cout << "phone number" << std::endl;
		getline(std::cin, phone_number);
		std::cout << "birthday date" << std::endl;
		getline(std::cin, birthday_date);
		std::cout << "favorite meal" << std::endl;
		getline(std::cin, favorite_meal);
		std::cout << "underwear color" << std::endl;
		getline(std::cin, underwear_color);
		std::cout << "darkest secret" << std::endl;
		getline(std::cin, darkest_secret);
		return (0);
	}

	private:

	std::string nickname;
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	

};

#endif
