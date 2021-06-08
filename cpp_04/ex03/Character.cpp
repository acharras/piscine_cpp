/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:30:41 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:42:01 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    std::memset(inventory, 0, 4);
    _size = 0;
    _name = "Default";
}

Character::Character(std::string name){
    std::memset(inventory, 0, 4);
    _size = 0;
    _name = name;
}

Character::Character(const Character& cpy){
    *this = cpy;
}

Character::~Character(){
    for (int i = 0; i < _size; i++)
    {
        delete inventory[i];
        inventory[i] = 0;
    }
}

Character&	Character::operator=(const Character& str){
    _name = str._name;
    for (int i = 0; i < _size; i++)
    {
       delete inventory[i];
       inventory[i] = 0;
    }
    _size = str._size;
    for (int i = 0; i < str._size;i++)
    {
       inventory[i] = str.inventory[i]->clone();
    }
    return (*this);
}

void Character::equip(AMateria* m){
    if (_size < 4)
        inventory[_size++] = m;
}

void Character::unequip(int idx){
    if (idx >=0 && idx < _size)
    {
        inventory[idx] = 0;
        _size--;
    }
}

const std::string & Character::getName() const{
    return (_name);
}

void Character::use(int idx, ICharacter &target){
    if (idx >=0 && idx < _size)
        inventory[idx]->use(target);
}