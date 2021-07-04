/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:17:23 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 13:53:16 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data D;
    uintptr_t i;

    std::cout << "first address :\t\t" << &D << std::endl;
    i = D.serialize(&D);

    Data *sameD = D.deserialize(i);
    std::cout << "second address :\t" << &sameD << std::endl;
    
    delete sameD;
}