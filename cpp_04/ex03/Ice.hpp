/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:13:30 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:20:57 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;
    public:
        Ice();
        Ice(const Ice& copy);
        virtual ~Ice();
        Ice &operator=(const Ice& str);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif