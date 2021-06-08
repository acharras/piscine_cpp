/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:21:17 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 15:22:59 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;
    public:
        Cure();
        Cure(const Cure& copy);
        virtual ~Cure();
        Cure &operator=(const Cure& str);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif