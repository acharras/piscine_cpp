/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:33:28 by acharras          #+#    #+#             */
/*   Updated: 2021/07/03 17:16:11 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <math.h>

class Data
{

    private :

        int     i;
        std::string s1;
        std::string s2;
    
    public :

        Data();
        Data(const Data & cpy);
        ~Data();
        Data& operator=(const Data & cpy);

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

};


#endif