/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:23:18 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:39:52 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	SetType(type);
}

Weapon::~Weapon(){
}

std::string Weapon::getType()
{
	return (type);
}


void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
