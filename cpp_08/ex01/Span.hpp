#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <cstring>
#include <exception>
#include <algorithm>
#include <limits.h>

class   Span
{
    private :
        Span();
        unsigned int Num;
        std::vector<int> span;


    public :
        Span(unsigned int N);
        Span(const Span & cpy);
        ~Span();
        Span &operator=(const Span &cpy);

        void    addNumber(int nb);
        void addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

    class NoNumbersStockedException : public std::exception{
        public:
            virtual const char * what() const throw() {
                return ("Not enough number in span !");
            }
    };

    class FullException : public std::exception{
        public:
            virtual const char * what() const throw() {
                return ("Span is already full !");
            }
    };
};


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