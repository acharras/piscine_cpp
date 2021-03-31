/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:29 by acharras          #+#    #+#             */
/*   Updated: 2021/03/25 14:10:25 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : i_rawbits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const& str){
    std::cout << "Assignation operator called" << std::endl;
    this->i_rawbits = str.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (i_rawbits);
}

void Fixed::setRawBits(int const raw )
{
    i_rawbits = raw;
}