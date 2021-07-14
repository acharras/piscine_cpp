#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    std::cout << std::endl;

    mstack.pop();
    
    std::cout << "size : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "ite : " << *ite << std::endl;
    while (it != ite)
    {
        std::cout << "it : " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}