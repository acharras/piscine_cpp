#include "easyfind.hpp"

template< typename T>
void    call_fct(T c, int i)
{
    try
    {
        ::easyfind(c, i);
    }
    catch (std::exception &e)
    {
        std::cout << "this container doesn't contain this int !" << std::endl;
    }
}


int main()
{
        std::list<int> li;
        std::vector<int> ve;

        li.push_back(5);
        li.push_back(15);
        li.push_back(25);
        li.push_back(35);
        li.push_back(25);
        li.push_back(15);
        li.push_back(5);


        ve.push_back(10);
        ve.push_back(20);
        ve.push_back(30);
        ve.push_back(40);
        ve.push_back(30);
        ve.push_back(20);
        ve.push_back(10);

        ::call_fct(li, 25);
        ::call_fct(ve, 40);
        ::call_fct(ve, 25);
        ::call_fct(li, 40);
        return (0);
}