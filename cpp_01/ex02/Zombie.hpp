/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:27 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 13:27:15 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <cctype>
# include <cstring>

class Zombie
{	
	private:
		std::string name;
		std::string type;
		
	public:

		Zombie(std::string type, std::string name);
		~Zombie(void);
		void	announce();
};

#endif