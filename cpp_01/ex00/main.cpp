/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:27:14 by acharras          #+#    #+#             */
/*   Updated: 2021/03/17 10:38:41 by acharras         ###   ########lyon.fr   */
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
	pony_stack.SetColor("brown");
	pony_stack.SetOwner("Charlie P.");
	pony_stack.replace();

	Pony* pony_heap = PonyOnTheHeap();
	pony_heap->display();
	pony_heap->SetName("Heapzer");
	pony_heap->SetColor("yellow");
	pony_heap->SetOwner("Patrick V.");
	pony_heap->replace();
	delete pony_heap;
	return 0;
}
