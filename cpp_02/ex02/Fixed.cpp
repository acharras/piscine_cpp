/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:56:29 by acharras          #+#    #+#             */
/*   Updated: 2021/06/28 14:02:07 by acharras         ###   ########lyon.fr   */
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

bool Fixed::operator==(const Fixed& lhs) const
{
    return this->value == lhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& lhs) const
{
    return this->value != lhs.getRawBits();
}

bool Fixed::operator<(const Fixed &lhs) const
{
	return this->value < lhs.getRawBits();
}

bool Fixed::operator>(const Fixed &lhs) const
{
	return this->value > lhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &lhs) const
{
	return this->value <= lhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &lhs) const
{
	return this->value >= lhs.getRawBits();
}

Fixed Fixed::operator-(Fixed lhs)
{
	Fixed	fix;

	fix.setRawBits((this->value - lhs.getRawBits()));
	return fix;
}

Fixed Fixed::operator+(Fixed lhs)
{
	Fixed	fix;

	fix.setRawBits((this->value + lhs.getRawBits()));
	return fix;
}

Fixed Fixed::operator*(Fixed lhs)
{
    Fixed	fix;

	fix.setRawBits((this->value * lhs.getRawBits()) >> j);
	return fix;
}

Fixed Fixed::operator/(Fixed lhs)
{
	Fixed	fix;

	fix.setRawBits((this->value << j) / lhs.getRawBits());
	return fix;
}

Fixed& Fixed::operator++()
{
	this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    operator++();
    return old;
}

Fixed& Fixed::operator--()
{
	this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    operator--();
    return old;
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
}