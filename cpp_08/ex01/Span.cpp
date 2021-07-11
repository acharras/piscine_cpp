#include "Span.hpp"

Span::Span(unsigned int N) : Num(N){
    span.reserve(Num);
}

Span::Span(const Span & cpy){
    *this = cpy;
}

Span::~Span(){
}

Span& Span::operator=(const Span &cpy){
    Num = cpy.Num;
    span = cpy.span;
    return *this;
}

void    Span::addNumber(int nb){
    if (span.size() == span.capacity())
        throw FullException();
    span.push_back(nb);
}

void Span::addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if (end - begin <= Num)
        span.assign(begin, end);
    else 
        throw FullException();
}

int Span::shortestSpan(){
    if (span.size() == 0 || span.size() == 1)
        throw NoNumbersStockedException();
    std::vector<int> tmp_span = span;
    long tmp = LONG_MAX;
    std::sort(tmp_span.begin(), tmp_span.end());
    for(size_t i = 1; i < tmp_span.size(); i++)
    {
        if (tmp_span[i - 1] > tmp_span[i])
        {
            if (tmp > (tmp_span[i - 1] - tmp_span[i]))
                tmp = tmp_span[i - 1] - tmp_span[i];
        }
        else if (tmp > (tmp_span[i] - tmp_span[i - 1]))
            tmp = tmp_span[i] - tmp_span[i - 1];
    }
    return tmp;
}

int Span::longestSpan(){
    if (span.size() == 0 || span.size() == 1)
        throw NoNumbersStockedException();
    std::vector<int> tmp_span = span;
    long tmp = LONG_MAX;
    std::sort(tmp_span.begin(), tmp_span.end());
    tmp = tmp_span[tmp_span.size() - 1] - tmp_span[0];
    return tmp;
}
