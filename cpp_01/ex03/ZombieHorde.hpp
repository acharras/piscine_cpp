/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:44:07 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:50:49 by acharras         ###   ########lyon.fr   */
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

        int n;
		
	public:

		ZombieHorde(int n);
		~ZombieHorde(void);
        
        Zombie* createHorde();
        
};

#endif