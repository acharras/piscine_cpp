/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:16:55 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:22:13 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FR4G-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield !" << std::endl;
}

FragTrap::FragTrap(std::string new_name){
	setHitPoints(100);
	setEnergyPoints(100);
	setName(new_name);
	setAttackDamage(30);
	std::cout << "FR4G-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield !" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cpy){
	*this = cpy;
	std::cout << "Damn, you .. you ... you copy me !" << std::endl;
}


FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << "Mmh, am I dying ? I'm a FR4G-TP I can't... No it's impossibbbb......" << std::endl;
}

FragTrap&  FragTrap::operator=(FragTrap const& str){
	if (this != &str)
	{
		setHitPoints(str.getHitPoints());
		setEnergyPoints(str.getEnergyPoints());
		setName(str.getName());
		setAttackDamage(str.getAttackDamage());
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FR4G-TP " << getName() << " | | HP " << getHitPoints() << std::endl;
	std::cout << getName() << " ask someone to High Fives him" << std::endl;
}