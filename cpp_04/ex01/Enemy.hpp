/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:24:37 by acharras          #+#    #+#             */
/*   Updated: 2021/06/07 13:41:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <ostream>
#include <cctype>
#include <string> 

class Enemy
{
	protected:
		int HP;
		std::string Type;
		
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const& cpy);
		virtual ~Enemy();
		Enemy&	operator=(Enemy const& str);
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
		void setHP(int hp);
		void setType(std::string type);
};


#endif