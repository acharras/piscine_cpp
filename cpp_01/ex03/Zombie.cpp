/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:33:05 by acharras          #+#    #+#             */
/*   Updated: 2021/03/22 14:30:27 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie(void){
	setZombieType();
	setZombieName();
}

Zombie::Zombie(std::string old_type, std::string old_name): type(old_type), name(old_name)
{
	std::cout << "Zombie " << old_name << " of type " << old_type << " has spawned" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "The Zombie named " << name << " has been killed" << std::endl;
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ") > Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::setZombieType()
{
	int	rand_i = rand() % 10;
	std::string r_type[10] = {"Scorched", "Classic", "Knight", "Soul", "Archer", "Samurai", "Gunner", "Swordsman", "Crawling", "Giant"};
	this->type = r_type[rand_i];
}

void	Zombie::setZombieName()
{
	int	rand_i = rand() % 10;
	std::string r_name[10] = {"Carlos", "Patrick", "Bob", "Karen", "Sandy", "Sheldon", "Krabs", "Gary", "Pearl", "Puff"};
	this->name = r_name[rand_i];
}
