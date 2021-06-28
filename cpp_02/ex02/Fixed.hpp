/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:28 by acharras          #+#    #+#             */
/*   Updated: 2021/06/28 14:00:34 by acharras         ###   ########lyon.fr   */
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

		bool operator!=(const Fixed& lhs) const;
		bool operator==(const Fixed& lhs) const;
		bool operator<(const Fixed &lhs) const;
		bool operator>(const Fixed &lhs) const;
		bool operator<=(const Fixed &lhs) const;
		bool operator>=(const Fixed &lhs) const;
		
		Fixed operator-(Fixed lhs);
		Fixed operator+(Fixed lhs);
		Fixed operator*(Fixed lhs);
		Fixed operator/(Fixed lhs);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(Fixed const &a, Fixed const &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		
   private:

		int	value;
		static const int	j = 8;

};

std::ostream& operator<<(ostream& os, const Fixed& c);

#endif