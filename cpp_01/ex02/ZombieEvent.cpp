/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:31 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:32:40 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void){
}

ZombieEvent::~ZombieEvent(void){
}

void	ZombieEvent::setZombieType(std::string new_type)
{
	this->event_type = new_type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->event_type, name));
}

Zombie* ZombieEvent::randomChump()
{
	Zombie	*r_zombie;
	std::string name[10] = {"Carlos", "Patrick", "Bob", "Karen", "Sandy", "Sheldon", "Krabs", "Gary", "Pearl", "Puff"};
	int	rand_i = (rand() % 10) + 1;

	r_zombie = newZombie(name[rand_i]);
	return (r_zombie);
}
