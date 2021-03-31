/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:28 by acharras          #+#    #+#             */
/*   Updated: 2021/03/25 14:09:02 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Fixed
{	
	public:

		Fixed();
		Fixed(Fixed const& src);
		~Fixed();

		Fixed& operator=(Fixed const& str);
		int getRawBits( void ) const;
		void setRawBits(int const raw );

   private:

		int	i_rawbits;
		static const int	j = 8;


};

#endif