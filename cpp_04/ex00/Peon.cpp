/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:05:00 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:15:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(){
    Name = "default";
}

Peon::Peon(std::string new_name) : Name(new_name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& cpy){
	*this = cpy;
	std::cout << "Zog zog.Zog zog." << std::endl;
}


Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

const std::string	Peon::introduce() const{
	std::string intro;
	intro.append("I'm ");
	intro.append(Name);
	intro.append(" and I like otters!\n");
	return (intro);
}


Peon&	Peon::operator=(Peon const& str){
	this->Name = str.Name;
	return (*this);
}

std::ostream&  operator<<(std::ostream& os, Peon const& c){
	os << c.introduce();
	return (os);
}

void  Peon::getPolymorphed() const{
    std::cout << Name << " has been turned into a pink pony!" << std::endl;
}
