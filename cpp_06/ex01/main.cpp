/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:17:23 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 19:47:33 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t    serialize(Data* ptr){
    void *result = reinterpret_cast<void *>(ptr);
    
    return reinterpret_cast<uintptr_t>(result);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data D;
    Data *ptr = &D;
    uintptr_t i;

    i = serialize(ptr);
    std::cout << "before serialize :\t" << ptr << std::endl;
    std::cout << "deserialize value :\t" << deserialize(i) << std::endl;
    ptr->str = "oui monsieur";
    std::cout << ptr->str << std::endl;
}