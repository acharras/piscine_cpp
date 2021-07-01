/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:51:10 by acharras          #+#    #+#             */
/*   Updated: 2021/07/01 12:24:43 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string new_str) : str(new_str){
}

Conversion::Conversion(const Conversion & cpy) : str(str.cpy){
    *this = cpy;
}

Conversion& Conversion::operator=(const Conversion & cpy){
    this->str = cpy.str;
    return (*this);
}

Conversion::~Conversion(){
}

void    Conversion::Convert_char(){
    chr = (char)str;
    std::cout << "char : " << chr << std::endl;
}

void    Conversion::Convert_int(){
    i = (int)str;
    std::cout << "int : " << i << std::endl;
}

void    Conversion::Convert_float(){
    f = (float)str;
    std::cout << "float : " << f << std::endl;
}

void    Conversion::Convert_double(){
    d = (double)str;
    std::cout << "double : " << d << std::endl;
}