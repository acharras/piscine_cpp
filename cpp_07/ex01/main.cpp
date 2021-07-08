#include <iostream>
#include "iter.hpp"

int	main(void) 
{
	char *str = (char *)"Bonjour toi";
	int tab[5] = {11, 15, 16 , 8, 5};

	::iter(str, 7, print);
	
	std::cout << std::endl;

	::iter(tab, 3, print);
	
	return 0;
}