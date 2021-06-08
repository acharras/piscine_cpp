/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:25:56 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:30:19 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <cstring>
#include <iostream>

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string name);
        Character(const Character& copy);
        ~Character();
        Character &operator=(const Character& str);
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:
        AMateria *inventory[4];
        int _size;
        std::string _name;
};

#endif