/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SavageWasayad.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:48:34 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:51:51 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAVAGE_WASAYAD_H
# define SAVAGE_WASAYAD_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 
#include "Enemy.hpp"

class SavageWasayad : public Enemy
{
	public:
		SavageWasayad();
		SavageWasayad(SavageWasayad const& cpy);
		virtual ~SavageWasayad();
		SavageWasayad&	operator=(SavageWasayad const& str);
		void takeDamage(int damage);
		
};

#endif