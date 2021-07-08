#include <iostream>
#include "Array.hpp"

template<typename T>
void	fill_tab(Array<T> &tab)
{
	for (int i = 0; i < tab.size(); i++)
		tab[i] = i * 5;
}

template<typename T>
void	print_tab(Array<T> &tab)
{
	if (tab.size() == 0)
	{
		std::cout << "Empty" << std::endl;
		return;
	}
	for (int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}

template<typename T>
void	print_size(Array<T> &tab)
{
	std::cout << tab.size() << std::endl;
}

template<typename T>
void	nonAllocatedZone(Array<T> &tab)
{
	try
	{
		std::cout << tab[1000] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: Cannot acces to a non allocated zone in memory !" << std::endl;
	}
}

int	main(void) 
{
	Array<int>	itab(5);
	Array<char>	ctab;
	Array<int>	randtab;

	std::cout << "Fill itab with some number" << std::endl;
	fill_tab(itab);
	std::cout << "size of itab : " << std::endl;
	print_size(itab);
	std::cout << "itab : " << std::endl;
	print_tab(itab);


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "ctab : " << std::endl;
	print_tab(ctab);
	std::cout << "Try to access to a non allocated zone in memory :" << std::endl;
	nonAllocatedZone(ctab);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Copy itab in a new tab : " << std::endl << "new tab:" << std::endl;;
	randtab = itab;
	print_tab(randtab);

	return 0;
}