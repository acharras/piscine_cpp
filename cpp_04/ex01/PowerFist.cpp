/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:39:06 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:33:08 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
}

PowerFist::PowerFist(PowerFist const& cpy){
	*this = cpy;
}

PowerFist::~PowerFist(){
}

PowerFist&	PowerFist::operator=(PowerFist const& str){
	setName(str.getName());
	setAPCost(str.getAPCost());
	setDamage(str.getDamage());
	return (*this);
}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}