/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:51:09 by acharras          #+#    #+#             */
/*   Updated: 2021/07/01 12:22:59 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>

class   Conversion
{
    public :

        Conversion(std::string new_str);
        Conversion(const Conversion & cpy);
        ~Conversion();
        Conversion& operator=(const Conversion & cpy);

        void    Convert_char();
        void    Convert_int();
        void    Convert_float();
        void    Convert_double();

    private :

        Conversion();
        std::string str;
        char    chr;
        int     i;
        float   f;
        double  d;

}


#endif