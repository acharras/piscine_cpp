/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:22:27 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:22:38 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Warrior_H
# define Warrior_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>

class Warrior
{	
	public:

        Warrior();
		Warrior(std::string new_name);
		Warrior(Warrior const& cpy);
		~Warrior();
		
		Warrior&	operator=(Warrior const& str);
		const std::string	introduce() const;
		void  getPolymorphed() const;
		
   private:

		std::string Name;

};

std::ostream&	operator<<(std::ostream& os, Warrior const& c);

#endif