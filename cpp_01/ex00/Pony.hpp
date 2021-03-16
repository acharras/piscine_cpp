/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:28:36 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 17:42:54 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

class Pony
{	
	private:

		std::string name;
		std::string color;
		std::string owner;

	public:

		Pony(std::string name, std::string color, std::string owner);
		~Pony(void);
	
		void	add_pony(std::string name, std::string color, std::string owner);
		Pony	ponyOnTheStack();
		Pony*	ponyOnTheHeap();
		void	display();
		std::string	GetName() {return (name);};
		std::string GetColor() {return (color);};
		std::string GetOwner() {return (owner);};
		void	SetName(std::string new_name){new_name = name;};
		void	SetColor(std::string new_color){new_color = color;};
		void	SetOwner(std::string new_owner){new_owner = owner;};
};

#endif
