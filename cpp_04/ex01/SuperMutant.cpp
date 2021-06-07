/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:42:35 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:29:46 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& cpy){
	*this = cpy;
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const& str){
	setType(str.getType());
	setHP(str.getHP());
	return (*this);
}

void SuperMutant::takeDamage(int damage){
    damage -= 3;
    Enemy::takeDamage(damage);
}