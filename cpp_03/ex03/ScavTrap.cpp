/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:16:55 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:20:46 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "SC4V-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield ! I'm a SC4V-TP let's goooo !" << std::endl;
}

ScavTrap::ScavTrap(std::string new_name){
	setHitPoints(100);
	setEnergyPoints(50);
	setName(new_name);
	setAttackDamage(20);
	setGateMode(false);
	std::cout << "SC4V-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield ! I'm a SC4V-TP let's goooo !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy){
	*this = cpy;
}


ScavTrap::~ScavTrap(){
	std::cout << "SC4V-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Mmh, am I dying ? I'm a SC4V-TP I can't... No it's impossibbbb......" << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const& str){
	if (this != &str)
	{
		setHitPoints(str.getHitPoints());
		setEnergyPoints(str.getEnergyPoints());
		setName(str.getName());
		setAttackDamage(str.getAttackDamage());
	}
	return (*this);
}

void ScavTrap::setGateMode(bool const status)
{
	gate_mode = status;
}

bool ScavTrap::getGateMode() const
{
	return (gate_mode);
}

void ScavTrap::guardGate()
{
	std::cout << "SC4V-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << getName() << " have enterred in Gate keeper mode" << std::endl;
}
