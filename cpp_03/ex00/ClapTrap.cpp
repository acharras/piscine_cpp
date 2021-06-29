/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:16:55 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:17:02 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield ! I'm a CL4P-TP let's goooo !" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : 
Hit_points(10),
Energy_points(10),
Name(new_name),
attack_damage(0){
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield ! I'm a CL4P-TP let's goooo !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cpy){
	*this = cpy;
	std::cout << "Damn, you .. you ... you copy me ! I was the only one CL4P-TP..." << std::endl;
}


ClapTrap::~ClapTrap(){
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	std::cout << "Mmh, am I dying ? I'm a CL4P-TP I can't... No it's impossibbbb......" << std::endl;
}

ClapTrap&  ClapTrap::operator=(ClapTrap const& str){
	if (this != &str)
	{
		Hit_points = str.getHitPoints();
		Energy_points = str.getEnergyPoints();
		Name = str.getName();
		attack_damage = str.getAttackDamage();
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	std::cout << "CL4P-TP <" << Name << "> attacks <" << target << "> causing <" << attack_damage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	if (amount > this->Hit_points)
		amount = this->Hit_points;
	std::cout << "BOOM, " << Name << " take " << amount << " damage" << std::endl;
	this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << Name << " | | HP " << Hit_points << std::endl;
	std::cout << Name << " repairing himself, recovering " << amount << " Health Point" << std::endl;
	this->Hit_points += amount;
}

std::string ClapTrap::getName() const
{
	return Name;
}

void ClapTrap::setName(std::string const new_name)
{
	Name = new_name;
}

unsigned int ClapTrap::getHitPoints() const
{
	return Hit_points;
}

void ClapTrap::setHitPoints(unsigned int const amount)
{
	Hit_points = amount;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return Energy_points;
}

void ClapTrap::setEnergyPoints(unsigned int const amount)
{
	Energy_points = amount;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return attack_damage;
}

void ClapTrap::setAttackDamage(unsigned int const amount)
{
	attack_damage = amount;
}