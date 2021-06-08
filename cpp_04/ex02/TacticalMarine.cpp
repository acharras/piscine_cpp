/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:26:59 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 14:38:49 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& cpy){
    *this = cpy;
}

TacticalMarine::~TacticalMarine(){
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& str){
    (void)str;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const{
    ISpaceMarine* clone = new TacticalMarine(*this);
    return (clone);
}

void TacticalMarine::battleCry() const{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const{
    std::cout << "* attacks with a chainsword *" << std::endl;
}