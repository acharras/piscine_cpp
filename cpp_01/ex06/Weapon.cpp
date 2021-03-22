/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:18 by acharras          #+#    #+#             */
/*   Updated: 2021/03/19 10:58:05 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	new_type = type;
}

Weapon::~Weapon(){
}

std::string Weapon::getType()
{
	return (new_type);
}


void	Weapon::setType(std::string type)
{
	new_type = type;
}
