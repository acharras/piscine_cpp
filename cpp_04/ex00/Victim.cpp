/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:48:16 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:19:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(){
    Name = "default";
}

Victim::Victim(std::string new_name) : Name(new_name){
	std::cout << "Some random victim called " << Name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const& cpy){
	*this = cpy;
	std::cout << Name << " just reappeared!" << std::endl;
}


Victim::~Victim(){
	std::cout << "Victim " << Name << " just died for no apparent reason!" << std::endl;
}

const std::string	Victim::introduce() const{
	std::string intro;
	intro.append("I'm ");
	intro.append(Name);
	intro.append(" and I like otters!\n");
	return (intro);
}


Victim&	Victim::operator=(Victim const& str){
	this->Name = str.Name;
	return (*this);
}

std::ostream&  operator<<(std::ostream& os, Victim const& c){
	os << c.introduce();
	return (os);
}

void  Victim::getPolymorphed() const{
    std::cout << Name << " has been turned into a cute little sheep!" << std::endl;
}
