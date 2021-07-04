/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:54:54 by acharras          #+#    #+#             */
/*   Updated: 2021/07/04 20:08:18 by acharras         ###   ########lyon.fr   */
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
    else
        std::cout << "cannot cast this type" << std::endl; 
}

void    identify2(Base& p){
    try{
        A& ref = dynamic_cast<A&>(p);
        std::cout << "instanciate type A" << std::endl;
        static_cast<void>(ref);
    }
    catch (std::bad_cast &e) {}
    try{
        B& ref = dynamic_cast<B&>(p);
        std::cout << "instanciate type B" << std::endl;
        static_cast<void>(ref);
    }
    catch (std::bad_cast &e) {}
    try{
        C& ref = dynamic_cast<C&>(p);
        std::cout << "instanciate type C" << std::endl;
        static_cast<void>(ref);
    }
    catch (std::bad_cast &e) {}
}

Base* generate(void){
    int randi = rand() % 3;
    if (randi == 0)
        return new A();
    else if (randi == 1)
        return new B();
    return new C();
}

int main()
{
    srand(time(NULL));
    
    Base* B1 = generate();
    Base* Bnull = NULL;

    std::cout << "Pointer :" << std::endl;
    identify(B1);

    std::cout << "Reference :" << std::endl;
    identify2(*B1);

    std::cout << "Null Pointer :" << std::endl;
    identify(Bnull);
    
    delete B1;
}