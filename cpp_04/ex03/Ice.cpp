/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:15:02 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:20:01 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}

Ice::Ice(const Ice& cpy){
    *this = cpy;
}

Ice::~Ice(){
}

Ice&	Ice::operator=(const Ice& str){
    this->setXP(str.getXp());
    this->setType(str.getType());
	return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice);
}

void Ice::use(ICharacter& target){
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}