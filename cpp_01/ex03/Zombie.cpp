/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:33:05 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:09:16 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie(std::string type, std::string name){
	SetName(name);
	SetType(type);
}

Zombie::Zombie(void){
	std::cout << "Zombie " << name << " of type " << type << " has spawned" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "The Zombie named " << name << " has been killed" << std::endl;
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ") > Braiiiiiiinnnssss ..." << std::endl;
}

std::string Zombie::GetName()
{
	return (name);
}


void	Zombie::SetName(std::string new_name)
{
	name = new_name;
}

std::string Zombie::GetType()
{
	return (type);
}


void	Zombie::SetType(std::string new_type)
{
	type = new_type;
}
