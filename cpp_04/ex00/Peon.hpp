/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:04:30 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:14:56 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_H
# define Peon_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string>

class Peon
{	
	public:

        Peon();
		Peon(std::string new_name);
		Peon(Peon const& cpy);
		~Peon();
		
		Peon&	operator=(Peon const& str);
		const std::string	introduce() const;
		void  getPolymorphed() const;
		
   private:

		std::string Name;

};

std::ostream&	operator<<(std::ostream& os, Peon const& c);

#endif