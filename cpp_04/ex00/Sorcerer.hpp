/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:15:48 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:30:35 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Warrior.hpp"


class Sorcerer
{	
	public:

		Sorcerer(std::string new_name, std::string new_title);
		Sorcerer(Sorcerer const& cpy);
		~Sorcerer();
		
		Sorcerer&	operator=(Sorcerer const& str);
		const std::string	introduce() const;
		void polymorph(Victim const &target) const;
		void polymorph(Peon const &target) const;
		void polymorph(Warrior const &target) const;
		
   private:

		std::string Name;
		std::string Title;

};

std::ostream&	operator<<(std::ostream& os, Sorcerer const& c);

#endif
