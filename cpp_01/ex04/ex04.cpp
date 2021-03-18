/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:49:18 by acharras          #+#    #+#             */
/*   Updated: 2021/03/18 10:56:00 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string hello = "HI THIS IS BRAIN";
    std::string *helloPtr = &hello;
    std::string &helloRef = hello;

    std::cout << hello << std::endl << *helloPtr << std::endl << helloRef << std::endl;
}
