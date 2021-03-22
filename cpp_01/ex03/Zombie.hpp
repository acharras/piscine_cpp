/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:33:23 by acharras          #+#    #+#             */
/*   Updated: 2021/03/22 14:29:12 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <cctype>
# include <cstring>
# include <time.h>

class Zombie
{	
	private:
		std::string type;
		std::string name;
	
	public:

		Zombie(std::string type, std::string name);
		Zombie(void);
		~Zombie(void);
		void	advert();
		void	setZombieType();
		void	setZombieName();
};

#endif
