/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:35:24 by acharras          #+#    #+#             */
/*   Updated: 2021/06/08 14:59:20 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"


int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    ISpaceMarine* walter = new TacticalMarine;
    ISpaceMarine* tyler = new AssaultTerminator;
    Squad t1;
    Squad t2;
    t1.push(walter);
    t2.push(tyler);
    t2 = t1;
    for (int i = 0; i < t2.getCount(); ++i)
    {
        ISpaceMarine* cur = t2.getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    return 0;
}