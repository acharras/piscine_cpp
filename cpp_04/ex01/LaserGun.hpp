/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LaserGun.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:43:46 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:44:09 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LASER_GUN_H
# define LASER_GUN_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "AWeapon.hpp"

class LaserGun : public AWeapon
{
	public:
		LaserGun();
		LaserGun(LaserGun const& cpy);
		virtual ~LaserGun();
		LaserGun&	operator=(LaserGun const& str);
		void attack() const;
		
};

#endif