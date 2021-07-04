/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:54:54 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 16:33:33 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void    identify(Base* p){
    if (dynamic_cast<A *>(p) != 0)
        std::cout << "instanciate type A" << std::endl;
    else if (dynamic_cast<B *>(p) != 0)
        std::cout << "instanciate type B" << std::endl;
    else if (dynamic_cast<C *>(p) != 0)
        std::cout << "instanciate type C" << std::endl;
}

void    identify(Base& p){
    if (dynamic_cast<A *>(&p) != 0)
        std::cout << "instanciate type A" << std::endl;
    else if (dynamic_cast<B *>(&p) != 0)
        std::cout << "instanciate type B" << std::endl;
    else if (dynamic_cast<C *>(&p) != 0)
        std::cout << "instanciate type C" << std::endl;
}

Base* generate(void){
    int randi = rand() % 3;
    if (randi == 0)
        return reinterpret_cast<Base *>(new A());
    else if (randi == 1)
        return reinterpret_cast<Base *>(new B());
    return reinterpret_cast<Base *>(new C());
}

int main()
{
    srand(time(NULL));
    Base* B1 = generate();
    Base* B2 = generate();
    Base* B3 = generate();

    std::cout << "Pointers :" << std::endl;
    identify(B1);
    identify(B2);
    identify(B3);

    std::cout << "References :" << std::endl;
    identify(*B1);
    identify(*B2);
    identify(*B3);

    delete B1;
    delete B2;
    delete B3;
}