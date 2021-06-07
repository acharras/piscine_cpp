/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LaserGun.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:44:19 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:48:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "LaserGun.hpp"

LaserGun::LaserGun() : AWeapon("Laser Gun", 15, 75){
}

LaserGun::LaserGun(LaserGun const& cpy){
	*this = cpy;
}

LaserGun::~LaserGun(){
}

LaserGun&	LaserGun::operator=(LaserGun const& str){
	setName(str.getName());
	setAPCost(str.getAPCost());
	setDamage(str.getDamage());
	return (*this);
}

void LaserGun::attack() const{
    std::cout << "* pffff .... POW ! *" << std::endl;
}