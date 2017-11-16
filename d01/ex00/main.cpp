/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:30:30 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 11:30:32 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony *ponyOnTheHeap(std::string name, double hight, std::string color, int age)
{
	return new Pony(name, hight, color, age);
}

Pony ponyOnTheStack(std::string name, double hight, std::string color, int age)
{
	return Pony(name, hight, color, age);
}

int main(void)
{
	Pony *ponyHeap = ponyOnTheHeap("Heap", 1.2, "brown", 2);
	Pony ponyStack = ponyOnTheStack("Stack", 1.6, "black", 3);
	delete ponyHeap;
	return 0;
}
