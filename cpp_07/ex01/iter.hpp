#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template< typename A>
void	print(A const i)
{
	std::cout << i << std::endl;
}

template< typename A, typename T >
void   iter(A *array, T len, void (*fct)(A &))
{
    T i = 0;

    while (i < len)
    {
        fct((array)[i]);
        i++;
    }
}

#endif