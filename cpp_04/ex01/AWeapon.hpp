/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:34:28 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:38:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>


class AWeapon
{
	protected:
		std::string Name;
		int APcost;
		int Damage;
		
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const& cpy);
		virtual ~AWeapon();
		AWeapon&	operator=(AWeapon const& str);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		void setName(std::string new_name);
		void setAPCost(int ap);
		void setDamage(int da);
		virtual void attack() const = 0;
		
};

#endif