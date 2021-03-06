/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:41:48 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:26:20 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const& cpy);
		virtual ~SuperMutant();
		SuperMutant&	operator=(SuperMutant const& str);
		void takeDamage(int damage);
		
};

#endif