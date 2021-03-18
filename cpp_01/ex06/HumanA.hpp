/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:09 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:49:46 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include <cctype>
# include <cstring>

class HumanA
{	
	private:

		std::string new_name;
		std::string new_weapon;
		
	public:

		HumanA(std::string name, std::string weapon);
		~HumanA();
		attack()
};

#endif