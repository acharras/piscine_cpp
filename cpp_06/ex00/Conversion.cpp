/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:51:10 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 19:22:53 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string const& new_str) : str(new_str), acc(0), val(std::atof(str.c_str())){
    int i = 0;


    while (str[i] && (str[i] != '.'))
        i++;
    if (i == 1)
        val = static_cast<double>(str[0]);
    if (str[i] == '.')
        i++;
    while (str[i + acc] && str[i + acc] != 'f')
        acc++;
    if (acc > 6)
        acc = 6;
    if (acc == 0)
        acc = 1;
}

Conversion::Conversion(const Conversion & cpy) : str(cpy.str){
    *this = cpy;
}

Conversion::~Conversion(){
}

Conversion& Conversion::operator=(const Conversion & cpy){
    this->str = cpy.str;
    return (*this);
}

void    Conversion::Convert_char(){
    if (val < CHAR_MIN || val > CHAR_MAX || isnan(val))
        std::cout << "char: impossible" << std::endl;
    else if (std::isprint(val) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
    {
        chr = static_cast<char>(val);
        std::cout << "char : '" << chr << "'" << std::endl;
    }
}

void    Conversion::Convert_int(){
    if (val < INT_MIN || val > INT_MAX || isnan(val) || isinf(val))
        std::cout << "int: impossible" << std::endl;
    else
    {
        i = static_cast<int>(val);
        std::cout << "int : " << i << std::endl;
    }
}

void    Conversion::Convert_float(){
    f = static_cast<float>(val);
    std::cout << std::setprecision(acc) << std::fixed << "float : " << f << "f" << std::endl;
}

void    Conversion::Convert_double(){
    d = static_cast<double>(val);
    std::cout << std::setprecision(acc) << std::fixed << "double : " << d << std::endl;
}