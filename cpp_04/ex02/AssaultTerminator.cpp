/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:17:13 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 14:38:35 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& cpy){
    *this = cpy;
}

AssaultTerminator::~AssaultTerminator(){
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& str){
    (void)str;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const{
    ISpaceMarine* clone = new AssaultTerminator(*this);
    return (clone);
}

void AssaultTerminator::battleCry() const{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
    std::cout << "* attacks with chainfists *" << std::endl;
}