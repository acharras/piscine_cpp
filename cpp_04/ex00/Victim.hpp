/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:09 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:35:55 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_H
# define Victim_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>

class Victim
{	
	public:

        Victim();
		Victim(std::string new_name);
		Victim(Victim const& cpy);
		virtual ~Victim();
		
		Victim&	operator=(Victim const& str);
		const std::string	introduce() const;
		void  getPolymorphed() const;
		
   private:

		std::string Name;

};

std::ostream&	operator<<(std::ostream& os, Victim const& c);

#endif