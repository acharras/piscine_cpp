/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:23 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:26:52 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string type, std::string name){
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void){
}

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ") > Braiiiiiiinnnssss ..." << std::endl;
}
