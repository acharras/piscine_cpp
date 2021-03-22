/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:35:04 by acharras          #+#    #+#             */
/*   Updated: 2021/03/22 14:28:14 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n){

	this->size = n;
	Horde = new Zombie[size];
	srand (time(NULL));
}

ZombieHorde::~ZombieHorde(void){
	delete[] Horde;
    std::cout << "Horde has been slain" << std::endl;
}

Zombie*	ZombieHorde::newZombie(std::string name)
{
	return (new Zombie(this->horde_type, name));
}

/*Zombie ZombieHorde::createHorde()
{
	Zombie	*r_zombie;
	int	rand_i;
	
	
	rand_i = rand() % 10;
	r_zombie = newZombie(name[rand_i]);
	return (*r_zombie);
}*/

void	ZombieHorde::announce()
{
	int     i;

    i = -1;
    while (++i < size)
        Horde[i].advert();
}
