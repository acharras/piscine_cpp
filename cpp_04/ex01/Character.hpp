/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:52:10 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:37:03 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string Name;
		int AP;
		AWeapon *Weapon;

	public:
		Character();
		Character(std::string const & name);
		Character(Character const& cpy);;
		virtual ~Character();
		Character&	operator=(Character const& str);
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
		std::string getName() const;
		int getAP() const;
		AWeapon const* getWeapon() const;
		std::string getAWeaponName() const;
};

std::ostream&	operator<<(std::ostream& os, Character const& f);

#endif