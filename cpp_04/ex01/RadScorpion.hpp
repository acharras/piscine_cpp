/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:50:08 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:26:14 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const& cpy);
		virtual ~RadScorpion();
		RadScorpion&	operator=(RadScorpion const& str);
};

#endif