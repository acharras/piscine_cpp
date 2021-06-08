/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:19:43 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:20:26 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& cpy){
    *this = cpy;
}

Cure::~Cure(){
}

Cure&	Cure::operator=(const Cure& str){
    this->setXP(str.getXp());
    this->setType(str.getType());
	return (*this);
}

AMateria* Cure::clone() const{
    return (new Cure);
}

void Cure::use(ICharacter& target){
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}