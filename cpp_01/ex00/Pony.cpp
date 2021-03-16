/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:28:02 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 17:53:15 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string owner){
	this->name = name;
	this->color = color;
	this->owner = owner;
}

Pony::~Pony(void){
}

void	Pony::display()
{
	std::cout << "A new pony is born, his name is " << name << ", he is " << color << " and his owner is " << owner << std::endl;
}
