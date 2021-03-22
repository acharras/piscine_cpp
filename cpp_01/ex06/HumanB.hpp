/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:12 by acharras          #+#    #+#             */
/*   Updated: 2021/03/19 11:20:45 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include <cctype>
# include <cstring>
# include "Weapon.hpp"

class HumanB
{	
	private:

		std::string new_name;
		Weapon* new_weapon;
        
	public:

		HumanB(std::string name);
		HumanB();
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif