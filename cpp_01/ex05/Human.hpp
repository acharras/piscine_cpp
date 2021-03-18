/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:59:43 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 14:06:52 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include <cctype>
# include <cstring>
# include "Brain.hpp"

class Human
{	
	private:
		const Brain brain;
		
	public:

		Human();
		~Human();
		const void*	identify() const;
		const Brain&	getBrain() const;
};

#endif