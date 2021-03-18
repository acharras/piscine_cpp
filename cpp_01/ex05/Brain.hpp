/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:58:46 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 14:11:14 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>
# include <cctype>
# include <cstring>

class Brain
{	
	private:

		void*	address;
		
	public:

		Brain();
		~Brain();
		const void*	identify() const;
};

#endif