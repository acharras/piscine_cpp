/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:33:05 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:41:42 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
