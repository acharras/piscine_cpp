/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:22:57 by acharras          #+#    #+#             */
/*   Updated: 2021/03/19 11:29:15 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : new_name(name), new_weapon(weapon)
{
}

HumanA::~HumanA(){
}

void	HumanA::attack()
{
	std::cout << new_name << " attacks with his " << new_weapon.getType() << std::endl;
}
