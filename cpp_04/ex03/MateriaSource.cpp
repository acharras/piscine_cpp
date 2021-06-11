/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:16:04 by acharras          #+#    #+#             */
/*   Updated: 2021/06/10 14:34:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::memset(learned, 0, 4);
    _size = 0;
}

MateriaSource::MateriaSource(const MateriaSource& cpy){
    *this = cpy;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i< _size; i++)
    {
        delete learned[i];
        learned[i] = 0;
    }
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& str){
    for (int i =0; i < _size; i++)
    {
        delete learned[i];
        learned[i] = 0;
    }
    _size = str._size;
    for (int i = 0; i < str._size; i++)
    {
        learned[i] = str.learned[i]->clone();
    }
	return (*this);
}

void MateriaSource::learnMateria(AMateria *learn){
    learned[_size++] = learn;
}

AMateria* MateriaSource::createMateria(const std::string &type){
    AMateria *tmp = NULL;
    if (!(type.compare("cure")))
        tmp = new Cure();
    else if (!(type.compare("ice")))
        tmp = new Ice();
    return (tmp);
}