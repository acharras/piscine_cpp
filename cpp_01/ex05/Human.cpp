/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:19:29 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 14:11:02 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(){
}

Human::~Human(){
}

const void*	Human::identify() const
{
	return (brain.identify());
}

const Brain&	Human::getBrain() const
{
	return (brain);
}
