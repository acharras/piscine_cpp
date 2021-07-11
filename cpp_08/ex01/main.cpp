#include "Span.hpp"

int main()
{
    try
    {
        Span S = Span(5);
        Span S2 = Span(5);
        Span S3 = Span(5);

        S.addNumber(5);
        S.addNumber(12);
        S.addNumber(2);
        S.addNumber(8);
        S.addNumber(1);

        std::cout << "shortest span : " << S.shortestSpan() << std::endl;
        std::cout << "longest span : " << S.longestSpan() << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        std::vector<int> vec(1, 50);
        vec.push_back(10);
        vec.push_back(15);
        vec.push_back(5);

        S2.addMultipleNumber(vec.begin(), vec.end());
        
        S2.addNumber(500);

        std::cout << "Vector size : " << vec.size() << std::endl;

        std::cout << "shortest span 2 : " << S2.shortestSpan() << std::endl;
        std::cout << "longest span 2 : " << S2.longestSpan() << std::endl; 
        std::cout << std::endl;
        std::cout << std::endl;

        S3.addNumber(2);
        std::cout << "shortest span 3 : " << S3.shortestSpan() << std::endl;

    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}