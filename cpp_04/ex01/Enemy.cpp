/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:24:47 by acharras          #+#    #+#             */
/*   Updated: 2021/06/03 14:56:59 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){
	HP = 100;
	Type = "default";
}

Enemy::Enemy(int hp, std::string const & type) : HP(hp), Type(type){
}

Enemy::Enemy(Enemy const& cpy){
	*this = cpy;
}

Enemy::~Enemy(){
}

Enemy&	Enemy::operator=(Enemy const& str){
	this->Type = str.Type;
	this->HP = str.HP;
	return (*this);
}

std::string Enemy::getType() const{
	return (Type);
}

int Enemy::getHP() const{
	return (HP);
}

void Enemy::setType(std::string type){
	Type = type;
}

void Enemy::setHP(int hp){
	HP = hp;
}

void Enemy::takeDamage(int damage){
	if (damage < 0)
	{
	}
	else if (HP - damage < 0)
		HP = 0;
	else
		HP = HP - damage;
}