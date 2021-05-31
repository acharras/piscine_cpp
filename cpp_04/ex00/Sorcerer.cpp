/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:22:09 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:30:31 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Warrior.hpp"

Sorcerer::Sorcerer(std::string new_name, std::string new_title) : Name(new_name), Title(new_title){
	std::cout << Name << ", " << Title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& cpy){
	*this = cpy;
	std::cout << Name << ", " << Title << ", is reborn!" << std::endl;
}


Sorcerer::~Sorcerer(){
	std::cout <<  Name << ", " << Title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string	Sorcerer::introduce() const{
	std::string intro;
	intro.append("I am ");
	intro.append(Name);
	intro.append(", ");
	intro.append(Title);
	intro.append(", and i like ponies!\n");
	return (intro);
}


Sorcerer&	Sorcerer::operator=(Sorcerer const& str){
	this->Name = str.Name;
	this->Title = str.Title;
	return (*this);
}

std::ostream&  operator<<(std::ostream& os, Sorcerer const& c){
	os << c.introduce();
	return (os);
}

void Sorcerer::polymorph(Victim const &target) const{
	target.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &target) const{
	target.getPolymorphed();
}

void Sorcerer::polymorph(Warrior const &target) const{
	target.getPolymorphed();
}