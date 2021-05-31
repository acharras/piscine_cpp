/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:21:20 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:30:22 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"

Warrior::Warrior(){
    Name = "default";
}

Warrior::Warrior(std::string new_name) : Name(new_name){
	std::cout << "Aaaargh !" << std::endl;
}

Warrior::Warrior(Warrior const& cpy){
	*this = cpy;
	std::cout << "Aaaargh !Aaaargh !" << std::endl;
}


Warrior::~Warrior(){
	std::cout << "Grrr..." << std::endl;
}

const std::string	Warrior::introduce() const{
	std::string intro;
	intro.append("Me ");
	intro.append(Name);
	intro.append(", you dead !\n");
	return (intro);
}


Warrior&	Warrior::operator=(Warrior const& str){
	this->Name = str.Name;
	return (*this);
}

std::ostream&  operator<<(std::ostream& os, Warrior const& c){
	os << c.introduce();
	return (os);
}

void  Warrior::getPolymorphed() const{
    std::cout << Name << " has been turned into a bloody pony!" << std::endl;
}
