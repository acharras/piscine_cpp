/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:32:05 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:17:18 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
# define ClapTrap_H

#include <iostream>
#include <cctype>
#include <string>
#include <time.h>

class ClapTrap
{	
	public:

		ClapTrap();
		ClapTrap(std::string new_name);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap();

		ClapTrap& operator=(ClapTrap const& str);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		void setName(std::string const new_name);
		unsigned int getHitPoints() const;
		void setHitPoints(unsigned int const amount);
		unsigned int getEnergyPoints() const;
		void setEnergyPoints(unsigned int const amount);
		unsigned int getAttackDamage() const;
		void setAttackDamage(unsigned int const amount);

   private:

		unsigned int Hit_points;
		unsigned int Energy_points;
		std::string Name;
		int attack_damage;

};

#endif
