/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:05 by acharras          #+#    #+#             */
/*   Updated: 2021/03/19 11:29:19 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
	new_name = name;
}

HumanB::HumanB(){
}

HumanB::~HumanB(){
}

void	HumanB::attack()
{
	std::cout << new_name << " attacks with his " << new_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	new_weapon = &weapon;
}
