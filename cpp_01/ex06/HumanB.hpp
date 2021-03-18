/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:12 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:49:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include <cctype>
# include <cstring>

class HumanB
{	
	private:

		std::string new_name;
		std::string new_weapon;
        
	public:

		HumanB(std::string name, std::string weapon);
		~HumanB();
		attack()
};

#endif