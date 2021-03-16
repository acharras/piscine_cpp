/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:27:14 by acharras          #+#    #+#             */
/*   Updated: 2021/03/16 17:53:13 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	PonyOnTheStack()
{
	Pony	pony_stack("Stacky", "black", "Carlos B.");
	return (pony_stack);
}

Pony*	PonyOnTheHeap()
{
	Pony	*pony_heap = new Pony("Heapy", "white", "Charles D.");
	return (pony_heap);
}

int	main()
{
	Pony pony_stack = PonyOnTheStack();
	pony_stack.display();
	pony_stack.SetName("Stackzer");
	GetName();
	pony_stack.SetColor("brown");
	GetColor();
	pony_stack.SetOwner("Charlie P.");
	GetOwner();

	Pony* pony_heap = PonyOnTheHeap();
	pony_heap->display();
	pony_heap.SetName("Heapzer");
	GetName();
	pony_heap.SetColor("yellow");
	GetColor();
	pony_heap.SetOwner("Patrick V.");
	GetOwner();
	delete pony_heap;
	std::cout << "Heapy pony died..." << std::endl;
	std::cout << "Stacky pony died a little bit later..." << std::endl;
	return 0;
}