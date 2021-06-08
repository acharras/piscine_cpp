/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:59:47 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:21:06 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& copy);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& str);


        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        void setType(std::string type);
        void setXP(unsigned int xp);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif