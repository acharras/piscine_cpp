/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:49:50 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:30:33 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& cpy){
	*this = cpy;
}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& str){
	setType(str.getType());
	setHP(str.getHP());
	return (*this);
}