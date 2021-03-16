/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:27 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 17:37:23 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie
{	
	private:
		std::string name;
		std::string type;
		
	public:

		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	advert();
};

#endif