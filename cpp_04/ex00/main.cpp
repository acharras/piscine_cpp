/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:08:14 by acharras          #+#    #+#             */
/*   Updated: 2021/05/31 14:29:19 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Warrior.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Warrior jack("Jack");
    
    std::cout << robert << jim << joe << jack;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(jack);
    return 0;
}