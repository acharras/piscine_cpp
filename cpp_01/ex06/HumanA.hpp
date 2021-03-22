/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:09 by acharras          #+#    #+#             */
/*   Updated: 2021/03/19 11:25:14 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include <cctype>
# include <cstring>
# include "Weapon.hpp"

class HumanA
{	
	private:

		std::string new_name;
		Weapon& new_weapon;
		
	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
};

#endif