/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:35:04 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:12:02 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n){

	this->size = n;
	Horde = new Zombie[size];
	int i = 0;
	while (i < size)
	{
		Horde[i] = createHorde();
		i++;
	}
}

ZombieHorde::~ZombieHorde(void){
	delete[] Horde;
    std::cout<<"Horde has been slain\n";
}


void	ZombieHorde::setZombieType(std::string new_type)
{
	this->horde_type = new_type;
}

Zombie*	ZombieHorde::newZombie(std::string name)
{
	return (new Zombie(this->horde_type, name));
}

Zombie ZombieHorde::createHorde()
{
	Zombie	*r_zombie;
	std::string name[10] = {"Carlos", "Patrick", "Bob", "Karen", "Sandy", "Sheldon", "Krabs", "Gary", "Pearl", "Puff"};
	srand (time(NULL));
	while (size > 0)
	{
		int	rand_i = (rand() % 10);
		r_zombie = newZombie(name[rand_i]);
		size--;
	}
	return (*r_zombie);
}

void	ZombieHorde::announce()
{
	int     i;

    i = 0;
    while (i < size)
    {
        Horde[i].advert();
        i++;
    }
}
