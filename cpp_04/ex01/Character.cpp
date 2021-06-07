/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:52:08 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:30:43 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	Name = "default";
	AP = 40;
	Weapon = NULL;
}

Character::Character(std::string const & name) : Name(name){
	AP = 40;
	Weapon = NULL;
}

Character::Character(Character const& cpy){
	*this = cpy;
}

Character::~Character(){
}

Character&	Character::operator=(Character const& str){
	this->Name = str.Name;
	this->AP = str.AP;
	this->Weapon = str.Weapon;
	return (*this);
}

void Character::recoverAP(){
	if (AP < 31)
		AP += 10;
	else
		AP = 40;
}

void Character::equip(AWeapon *weapon){
	Weapon = weapon;
}

void Character::attack(Enemy *enemy){
	if (Weapon != NULL && enemy != NULL)
	{
		if (AP >= Weapon->getAPCost())
		{
			std::cout << getName() << " attacks " << enemy->getType() << " with a " << Weapon->getName() << std::endl;
			AP = AP - Weapon->getAPCost();
			enemy->takeDamage(Weapon->getDamage());
			Weapon->attack();
			if (enemy->getHP() <= 0)
				delete enemy;
		}
		else
			std::cout << "Not enought AP to use this weapon, you need to recover it or to change Weapon!" << std::endl;
	}
}

std::string Character::getName() const{
	return (Name);
}

int Character::getAP() const{
	return (AP);
}

AWeapon const* Character::getWeapon() const{
	return (Weapon);
}

std::string Character::getAWeaponName() const{
	return (Weapon->getName());
}

std::ostream&	operator<<(std::ostream& os, Character const& f){
	if (f.getWeapon() != NULL)
	{
		os << f.getName();
		os << " has ";
		os << f.getAP();
		os << " AP and wields a ";
		os << f.getAWeaponName();
		os << "\n";
	}
	else
	{
		os << f.getName();
		os << " has ";
		os << f.getAP();
		os << " AP and is unarmed";
		os << "\n";
	}
	return (os);
}