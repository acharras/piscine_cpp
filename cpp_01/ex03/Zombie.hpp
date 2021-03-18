/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:33:23 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 15:07:34 by acharras         ###   ########lyon.fr   */
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
		Zombie(void);
		~Zombie(void);
		void	advert();
		std::string GetName();
		void	SetName(std::string new_name);
		std::string GetType();
		void	SetType(std::string new_type);
};

#endif
