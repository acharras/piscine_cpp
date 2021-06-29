/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:06 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 16:22:30 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <cctype>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{	
	public:

		DiamondTrap();
		DiamondTrap(std::string new_name);
		DiamondTrap(DiamondTrap const& cpy);
		~DiamondTrap();

		DiamondTrap& operator=(DiamondTrap const& str);

		void setName(std::string const new_name);
		std::string getName() const;
		void whoAmI() const;
		
   private:

		std::string Name;

};

#endif