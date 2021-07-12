#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <vector>
#include <iostream>
#include <cstring>
#include <exception>
#include <algorithm>
#include <limits.h>

class   MutantStack : public std::stack
{
    private :
        MutantStack();
        unsigned int Num;

    public :
        MutantStack(unsigned int N);
        MutantStack(const MutantStack & cpy);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &cpy);

        
};

#endif