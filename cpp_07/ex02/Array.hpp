#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template< typename T>
class   Array
{
    private :
        T *tab;
        int tablen;

    public :
        Array() : tab(NULL), tablen(0) {};
        Array(unsigned int n) : tab(new T[n]()), tablen(n) {};
        Array(const Array & cpy) {*this = cpy;};
        ~Array() {delete [] this->tab;};
        Array& operator=(Array const & rhs);
        T & operator[](int i);

        int size() const;
};

template< typename T>
Array<T>&  Array<T>::operator=(Array const & rhs)
{
    if (this != &rhs)
    {
        delete [] this->tab;
        if (rhs.tablen != 0)
            this->tab = new T[rhs.tablen];
        else
            this->tab = NULL;
        this->tablen = rhs.tablen;
        for (int i = 0; i < this->tablen; i++)
            this->tab[i] = rhs.tab[i];
    }
    return (*this);
}

template< typename T >
T & Array<T>::operator[](int i)
{
    if (i < 0 || i >= this->tablen)
        throw std::exception();
    else
        return this->tab[i];
}


template< typename T >
int Array<T>::size() const
{
        return this->tablen;
}

#endif