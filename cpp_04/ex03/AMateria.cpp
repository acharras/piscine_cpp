/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:06:03 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:12:12 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default"), _xp(0){
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0){
}

AMateria::AMateria(const AMateria& cpy){
    *this = cpy;
}

AMateria::~AMateria(){
}

AMateria&	AMateria::operator=(const AMateria& str){
    this->setXP(str._xp);
    this->setType(str._type);
	return (*this);
}

std::string const & AMateria::getType() const{
    return (_type);
}

unsigned int AMateria::getXP() const{
    return (_xp);
}

void AMateria::setType(std::string type){
    _type = type;
}

void AMateria::setXP(unsigned int xp){
    _xp = xp;
}

void AMateria::use(ICharacter& target){
    static_cast<void>(target);
    _xp += 10;
}