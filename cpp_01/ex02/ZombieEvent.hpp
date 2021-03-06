/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:35 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:25:29 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include "Zombie.hpp"
# include <cctype>
# include <cstring>

class ZombieEvent
{	
	private:

		std::string event_type;

	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string new_type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
};

# endif