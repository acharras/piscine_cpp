#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <iostream>
#include <cstring>

template< typename T>
    class   MutantStack : public std::stack<T>
    {
        public :

            typedef typename std::stack<T>::container_type::iterator iterator;
            iterator begin() {return (this->c.begin()); };
            iterator end() {return (this->c.end()); };
        
};

#endif