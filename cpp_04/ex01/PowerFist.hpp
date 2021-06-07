/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:38:33 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:26:34 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
# define POWER_FIST_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const& cpy);
		virtual ~PowerFist();
		PowerFist&	operator=(PowerFist const& str);
		void attack() const;
		
};

#endif