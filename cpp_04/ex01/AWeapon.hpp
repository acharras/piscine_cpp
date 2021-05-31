/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:34:28 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:41:12 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>


class AWeapon
{
    protected:
        std::string Name;
        int APcost;
        int Damage;
        
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const& cpy);
        ~AWeapon();
        std::string [...] getName() const;
        int getAPCost() const;
        int getDamage() const;
        [...] void attack() const = 0;
        
};

#endif