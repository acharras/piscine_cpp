/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:36:57 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:41:06 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWepon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : Name(name), APcost(apcost), Damage(damage){
	std::cout << Name << ", " << Title << ", is born!" << std::endl;
}

AWeapon::AWeapon(AWeapon const& cpy){
	*this = cpy;
	std::cout << Name << ", " << Title << ", is reborn!" << std::endl;
}

AWeapon::~AWeapon(){
	std::cout <<  Name << ", " << Title << ", is dead. Consequences will never be the same!" << std::endl;
}
