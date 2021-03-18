/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:18 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 10:41:38 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent zombie_event;
	Zombie *zombie;
	srand(time(NULL));

	zombie = new Zombie("Classic", "Zack");
	zombie->announce();
	delete zombie;
	
	zombie_event.setZombieType("Scratch");
	zombie = zombie_event.newZombie("Francis");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("Rocket");
	zombie = zombie_event.randomChump();
	zombie->announce();
	delete zombie;

	return 0;
}