/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:35:04 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:50:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
	this->n = n;
}

ZombieHorde::~ZombieHorde(void){
}

Zombie* ZombieHorde::createHorde()
{
	Zombie	*r_zombie;
	std::string name[10] = {"Carlos", "Patrick", "Bob", "Karen", "Sandy", "Sheldon", "Krabs", "Gary", "Pearl", "Puff"};
	int	rand_i = (rand() % 10) + 1;

	r_zombie = newZombie(name[rand_i]);
	return (r_zombie);
}
