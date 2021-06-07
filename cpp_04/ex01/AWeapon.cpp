/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:36:57 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 15:47:45 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){
	Name = "default";
	APcost = 0;
	Damage = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : Name(name), APcost(apcost), Damage(damage){
}

AWeapon::AWeapon(AWeapon const& cpy){
	*this = cpy;
}

AWeapon::~AWeapon(){
}

AWeapon&	AWeapon::operator=(AWeapon const& str){
	this->Name = str.Name;
	this->APcost = str.APcost;
	this->Damage = str.Damage;
	return (*this);
}

std::string	AWeapon::getName() const{
	return (Name);
}

int		AWeapon::getAPCost() const{
	return (APcost);
}

int		AWeapon::getDamage() const{
	return (Damage);
}

void AWeapon::setName(std::string new_name){
	Name = new_name;
}

void	AWeapon::setAPCost(int ap){
	APcost = ap;
}

void	AWeapon::setDamage(int da){
	Damage = da;
}