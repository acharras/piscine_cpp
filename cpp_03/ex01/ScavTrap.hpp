/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:32:05 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:17:27 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
# define ScavTrap_H

#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{	
	public:

		ScavTrap();
		ScavTrap(std::string new_name);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const& str);

		bool getGateMode() const;
		void setGateMode(bool const status);
		void guardGate();
		
   private:

		bool	gate_mode;

};

#endif
