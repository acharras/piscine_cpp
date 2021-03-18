/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:20:36 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 14:07:19 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Brain::Brain(){
	address = this;
}

Brain::~Brain(){
}

const void*	Brain::identify() const
{
	return (address);
}
