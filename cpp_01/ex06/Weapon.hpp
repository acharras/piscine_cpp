/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:24 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:39:43 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <cctype>
# include <cstring>

class Weapon
{	
	private:

		std::string type;
		
	public:

		Weapon(std::string type);
		~Weapon();
		std::string getType();
        void	SetType(std::string new_type);
};

#endif