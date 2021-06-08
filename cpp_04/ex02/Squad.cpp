/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:30:03 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 14:38:14 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(){
    count = 0;
    first = NULL;
}

Squad::Squad(const Squad& cpy){
    *this = cpy;
}

Squad::~Squad(){
    while (first)
    {
        list *tmp = first->next;
        delete first->unit;
        delete first;
        first = tmp;
    }
}

Squad&	Squad::operator=(const Squad& str){
    for (int i = 0; i < count; i++)
    {
        list *tmp = first->next;
        delete first->unit;
        delete first;
        first = tmp;
    }
    count = 0;
    list *tmp = str.first;
    for (int i = 0; i < str.count; i++)
    {
        tmp->unit->battleCry();
        push(tmp->unit->clone());
        tmp = tmp->next;
    }
	return (*this);
}

int Squad::getCount() const {
    return (count);
}

ISpaceMarine* Squad::getUnit(int n) const{
    list* tmp = first;
    if (n > count || n < 0)
        return (NULL);
    for (int i = 0; i < n; i++)
    {
        tmp = tmp->next;
    }
    return (tmp->unit);
}

int Squad::push(ISpaceMarine* new_unit){
    count++;
    if (count == 1)
    {
        first = new list;
        first->unit = new_unit;
        first->next = NULL;
    }
    else
    {
        list* the_next;
        the_next = first;
        while (the_next->next != NULL)
            the_next = the_next->next;
        the_next->next = new list;
        the_next = the_next->next;
        the_next->unit = new_unit;
        the_next->next = NULL;
    }
    return (count);
}