/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SavageWasayad.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:49:24 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:54:17 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SavageWasayad.hpp"

SavageWasayad::SavageWasayad() : Enemy(250, "Savage Wasayad"){
    std::cout << "Gnnn gnnn gnnn !" << std::endl;
}

SavageWasayad::SavageWasayad(SavageWasayad const& cpy){
	*this = cpy;
}

SavageWasayad::~SavageWasayad(){
    std::cout << "Gnark gnark..." << std::endl;
}

SavageWasayad&	SavageWasayad::operator=(SavageWasayad const& str){
	setType(str.getType());
	setHP(str.getHP());
	return (*this);
}

void SavageWasayad::takeDamage(int damage){
    damage -= 7;
    Enemy::takeDamage(damage);
}