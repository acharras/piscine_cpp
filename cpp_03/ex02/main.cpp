/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:24:49 by acharras          #+#    #+#             */
/*   Updated: 2021/06/29 15:15:49 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap trap_one("Wall-e");
    ClapTrap trap_two("R2D2");

    trap_two.setHitPoints(50);

    trap_one.attack(trap_two.getName());
    trap_two.takeDamage(trap_one.getAttackDamage());
    std::cout << std::endl;

    trap_one.setAttackDamage(5);
    trap_one.attack(trap_two.getName());
    trap_two.takeDamage(trap_one.getAttackDamage());
    std::cout << std::endl;
    
    trap_two.beRepaired(5);
    std::cout << std::endl;

    trap_one.highFivesGuys();
    std::cout << std::endl;
}