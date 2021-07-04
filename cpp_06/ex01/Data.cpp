/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:33:26 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 13:37:32 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){
}

Data::Data(const Data & cpy){
    *this = cpy;
}

Data::~Data(){
}

Data& Data::operator=(const Data & cpy){
    (void)cpy;
    return (*this);
}

uintptr_t    Data::serialize(Data* ptr){
    ptr->i = 10;
    ptr->s1 = "string1";
    ptr->s2 = "string2";
    void *result = reinterpret_cast<void *>(ptr);
    
    return reinterpret_cast<uintptr_t>(result);
}

Data* Data::deserialize(uintptr_t raw){
    res = new Data;
    void *obj =reinterpret_cast<void *>(raw);
    
    res->i = *(reinterpret_cast<int *>(obj));
    res->s1 = std::string(reinterpret_cast<char *>(obj));
    res->s2 = std::string(reinterpret_cast<char *>(obj));
    
    return res;
}