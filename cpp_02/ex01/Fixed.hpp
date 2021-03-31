/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:28 by acharras          #+#    #+#             */
/*   Updated: 2021/03/31 13:52:49 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

class Fixed
{	
	public:

		Fixed();
		Fixed(const int n);
		Fixed(const float n_float);
		Fixed(Fixed const& src);
		~Fixed();

		Fixed& operator=(Fixed const& str);
		int getRawBits( void ) const;
		void setRawBits(int const raw );
		float toFloat(void) const;
		int toInt(void) const;

		friend ostream& operator<<(ostream& os, const Fixed& c);
		
   private:

		int	value;
		static const int	j = 8;


};

#endif