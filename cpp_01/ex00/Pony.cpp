/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:28:02 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 10:38:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string owner){
	this->name = name;
	this->color = color;
	this->owner = owner;
}

Pony::~Pony(void){
	std::cout << GetName() << " pony died..." << std::endl;
}

void	Pony::display()
{
	std::cout << "A new pony is born, his name is " << name << ", he is " << color << " and his owner is " << owner << std::endl;
}

void	Pony::replace()
{
	std::cout << "A pony changed, his name is " << GetName() << ", he is " << GetColor() << " and his owner is " << GetOwner() << std::endl;
}
