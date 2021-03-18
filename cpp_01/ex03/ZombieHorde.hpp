/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:44:07 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:06:05 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include <iostream>
# include <cctype>
# include <cstring>
# include "Zombie.hpp"

class ZombieHorde
{	
	private:

        int size;
		Zombie *Horde;
		std::string horde_type;
		
	public:

		ZombieHorde(int n);
		~ZombieHorde(void);
        
		void	setZombieType(std::string new_type);
		Zombie*	newZombie(std::string name);
        Zombie createHorde();
		void	announce();
        
};

#endif