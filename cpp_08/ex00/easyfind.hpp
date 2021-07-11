#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <list>
#include <iostream>
#include <exception>

template< typename T>
void    easyfind(T c, int i)
{
    typename T::const_iterator it;
    int pos = 0;

    for(it = c.begin(); *it != i && it != c.end(); ++it)
        pos++;
    if (it == c.end())
        throw std::exception();
    std::cout << "the first occurence of : " << i << " is at rank : " << pos << std::endl;
}

#endif