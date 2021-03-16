/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:23 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 17:23:18 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type){
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void){
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ") > Braiiiiiiinnnssss ..." << std::endl;
}
