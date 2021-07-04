/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:51:09 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 19:21:15 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <math.h>

class Conversion
{

    private :

        Conversion();
        std::string str;
        int     acc;
        double val;

        char    chr;
        int     i;
        float   f;
        double  d;
        
    public :

        Conversion(std::string const& new_str);
        Conversion(const Conversion & cpy);
        ~Conversion();
        Conversion& operator=(const Conversion & cpy);

        void    Convert_char();
        void    Convert_int();
        void    Convert_float();
        void    Convert_double();

};


#endif