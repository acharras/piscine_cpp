/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:28:46 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:25:57 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const& cpy);
		virtual ~PlasmaRifle();
		PlasmaRifle&	operator=(PlasmaRifle const& str);
		void attack() const;
		
};

#endif