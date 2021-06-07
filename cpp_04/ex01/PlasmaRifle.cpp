/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:33:32 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:34:15 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& cpy){
	*this = cpy;
}

PlasmaRifle::~PlasmaRifle(){
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const& str){
	setName(str.getName());
	setAPCost(str.getAPCost());
	setDamage(str.getDamage());
	return (*this);
}

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}