/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:29:58 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 16:28:33 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(){
	std::cout << "DI4M-TP " << Name << " | | HP " << FragTrap::getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name){
    ClapTrap::setName(new_name);
	setName(new_name + "_clap_name");
    setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DI4M-TP " << Name << " <" << ClapTrap::getName() <<"> | | HP " << FragTrap::getHitPoints() << std::endl;
	std::cout << "Hi there, I'm ready to go the battlefield !" << std::endl;
    
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy){
	*this = cpy;
	std::cout << "Damn, you .. you ... you copy me !" << std::endl;
}


DiamondTrap::~DiamondTrap(){
	std::cout << "DI4M-TP " << Name << " | | HP " << FragTrap::getHitPoints() << std::endl;
	std::cout << "Mmh, am I dying ? I'm a DI4M-TP I can't... No it's impossibbbb......" << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(DiamondTrap const& str){
	if (this != &str)
	{
		setHitPoints(str.FragTrap::getHitPoints());
		setEnergyPoints(str.ScavTrap::getEnergyPoints());
		setName(str.getName());
		setAttackDamage(str.FragTrap::getAttackDamage());
	}
	return (*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "DI4M-TP <" << Name << "> <" << ClapTrap::getName() << "> ready to fight !" << std::endl;
}

void DiamondTrap::setName(std::string const new_name)
{
    Name = new_name;
}

std::string DiamondTrap::getName() const
{
    return Name;
}
