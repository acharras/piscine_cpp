/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:17:23 by acharras          #+#    #+#             */
/*   Updated: 2021/07/01 12:22:13 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, std::string *av)
{
    if (ac != 2)
        std::cout << "Only one parameter is accepted" << std::endl;
    Conversion to_convert(av[1]);
    
    to_convert.Convert_char();
    to_convert.Convert_int();
    to_convert.Convert_float();
    to_convert.Convert_double();
}