/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:29 by acharras          #+#    #+#             */
/*   Updated: 2021/03/31 14:20:24 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << j;
}

Fixed::Fixed(const float n_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(n_float * (1 << this->j)));
}

Fixed::Fixed(Fixed const& src){
	std::cout << "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
}


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const& str){
	std::cout << "Assignation operator called" << std::endl;
	this->value = str.getRawBits();
	return (*this);
}

ostream& operator<<(ostream &os, const Fixed& c)
{
	os << c.toFloat();
	return os;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw )
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << j));
}

int Fixed::toInt(void) const
{
	return ((int)(this->value >> this->j));
}