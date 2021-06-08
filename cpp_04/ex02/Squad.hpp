/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:29:08 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 14:35:54 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private :
		int count;
		struct list
		{
			ISpaceMarine* unit;
			list* next;
		};
		list* first;

	public:
		Squad();
		Squad(const Squad& cpy);
		Squad &operator=(const Squad& str);
		virtual ~Squad();
		
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine* new_unit);
};

#endif