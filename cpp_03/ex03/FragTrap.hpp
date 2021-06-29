/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:32:05 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 16:22:16 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H
# define FragTrap_H

#include <iostream>
#include <cctype>
#include <string>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{	
	public:

		FragTrap();
		FragTrap(std::string new_name);
		FragTrap(FragTrap const& cpy);
		~FragTrap();

		FragTrap& operator=(FragTrap const& str);

		void highFivesGuys(void);

};


#endif
